#include "employe.h"

Employe::Employe(int cin,QString nom,QString prenom,QString mail,int age,QString role,QString pass)
{
  this->CINE = cin;
  this->nom = nom;
  this->prenom = prenom;
  this->email = mail;
  this->age = age;
  this->role = role;
  this->mdp = pass;
}
void Employe::setEstConnecte(bool estConnecte) {
    m_estConnecte = estConnecte;
}
void Employe::deconnecter() {
    session_active = false;
    email = "";
    mdp = "";
}

bool Employe::ajouter()
{
 QSqlQuery query;
 QString res = QString::number(CINE);

 query.prepare( "insert into employes (cine, nom, prenom, email, age, role, mdp)" "values (:cine, :nom, :prenom, :email, :age, :role, :mdp)");


 query.bindValue(":cine",res);
 query.bindValue(":nom",nom);
 query.bindValue(":prenom",prenom);
 query.bindValue(":email",email);
 query.bindValue(":age",age);
 query.bindValue(":role",role);
 query.bindValue(":mdp",mdp);

 return  query.exec();
}
QSqlQueryModel * Employe::afficher()
{
  QSqlQueryModel * model= new QSqlQueryModel();
  model->setQuery("select * from employes");
  model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
  model->setHeaderData(1,Qt::Horizontal,QObject::tr("Nom"));
  model->setHeaderData(2,Qt::Horizontal,QObject::tr("Prénom"));
  model->setHeaderData(3,Qt::Horizontal,QObject::tr("Email"));
  model->setHeaderData(4,Qt::Horizontal,QObject::tr("Âge"));
  model->setHeaderData(5,Qt::Horizontal,QObject::tr("Rôle"));
  model->setHeaderData(6,Qt::Horizontal,QObject::tr("Mot de passe"));

  return model;
}
bool Employe::supprimer(int cin)
{
    QSqlQuery query;
    QString res = QString::number(cin);

    query.prepare( "delete from employes where CINE=:cin");
    query.bindValue(":cin",res);
    return  query.exec();
}

bool Employe::modifier()
{
    QSqlQuery query;
    QString id = QString::number(CINE);
    query.prepare("UPDATE employes SET cine=:cine, nom=:nom, prenom=:prenom, email=:email, age=:age, role=:role, mdp=:mdp WHERE cine=:CINE");
    query.bindValue(":cine", id);
    query.bindValue(":CINE", CINE);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":age", age);
    query.bindValue(":role", role);
    query.bindValue(":mdp", mdp);


    return query.exec();
}
QSqlQueryModel* Employe::rechercher(QString id)
{

    QString res=QString(id);
    QSqlQueryModel* model = new QSqlQueryModel();

     model->setQuery("select * FROM employes WHERE CINE like '%"+res+"%' or nom like '%"+res+"%' or prenom like '%"+res+"%' or email like '%"+res+"%' or age like '%"+res+"%' or role like '%"+res+"%'  ");

   return model;
}
QSqlQueryModel* Employe::Trier(QString critere)
{
    QSqlQueryModel *modal=new QSqlQueryModel();

    if(critere == "CINE")
        modal->setQuery("select * from employes order by CINE ASC ");
    else if(critere == "nom")
         modal->setQuery("select * from employes order by nom");


    return  modal;
}
bool Employe::rechercherEmploye(int cin)
{
    QSqlQuery query;
    QString res = QString::number(cin);
    query.prepare("select * from employes where CINE=:cin");
    query.bindValue(":cin",res);
    if(query.exec())
    {
        int count=0;
        while(query.next())
        {
            count++;
        }
        if(count==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}


bool Employe::seConnecter(QString email, QString mdp)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM employes WHERE email = :email AND mdp = :mdp");
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    query.exec();

    if (query.next()) {
        int count = query.value(0).toInt();
        if (count == 1) {
            return true;
        }

                session_active = true;
    }
    return false;
}
void Employe::setEtatConnexion(int etat, QString id)
{
    // Préparer la requête SQL pour mettre à jour l'état de connexion
    QSqlQuery query;
    query.prepare("UPDATE employes SET etat = :etat WHERE email = :email");
    query.bindValue(":email", id);
    query.bindValue(":etat", etat);

    query.exec(); // Exécuter la requête SQL
}

int Employe::getEtatConnexion(int id)

{
    int etat = -1;

    // Préparer la requête SQL pour récupérer l'état de connexion
    QSqlQuery query;
    query.prepare("SELECT etat FROM employes WHERE cine = :cine");
    query.bindValue(":cine", id);

    query.exec(); // Exécuter la requête SQL

    if (query.next()) {
        // Si une ligne est retournée, cela signifie que l'utilisateur existe dans la base de données
        etat = query.value("etat").toInt();
    }

    return etat;
}
/*std::pair<bool, QString> Employe::seConnecter(const QString &email, const QString &mdp) {
    QSqlQuery query;
    query.prepare("SELECT role FROM employes WHERE email = :email AND mdp = :mdp");
    query.bindValue(":email", email);
    query.bindValue(":mdp", mdp);
    bool connexionReussie = query.exec() && query.next();

    if (connexionReussie) {
        QString role = query.value(0).toString();
        return std::make_pair(true, role);
    } else {
        return std::make_pair(false, "");
    }
}

*/
/*void Employe::envoyerMailReinitialisationMotDePasse(QString email) {
    // Générer un jeton aléatoire pour le lien de réinitialisation
    QString jeton = QString::number(QDateTime::currentDateTime().toMSecsSinceEpoch() + qrand());

    // Stocker le jeton en base de données avec l'email de l'utilisateur

    // Envoyer l'email avec le lien de réinitialisation
    QtEmail emailClient;
    emailClient.setSmtpServer("smtp.gmail.com", 465);
    emailClient.setAuthentication("votre-adresse-email@gmail.com", "votre-mot-de-passe");
    emailClient.setSslEnabled(true);
    emailClient.setFrom("votre-adresse-email@gmail.com");
    emailClient.addTo(email);
    emailClient.setSubject("Réinitialisation de mot de passe");
    emailClient.setBody("Bonjour,\n\nVous avez demandé la réinitialisation de votre mot de passe. Veuillez cliquer sur le lien suivant pour continuer : http://www.mon-site.com/reinitialisation_mot_de_passe?jeton=" + jeton + "\n\nSi vous n'êtes pas à l'origine de cette demande, ignorez simplement ce message.\n\nCordialement,\nL'équipe de MonSite.com");
    emailClient.send();
}*/


QVector <QString> Employe::getListNom()
{
    QVector <QString> vectNom;
    QSqlQuery query;
    query.prepare("SELECT DISTINCT role FROM employes");
    query.exec();
    int name = query.record().indexOf("role");
    while (query.next()){
        vectNom.push_back(query.value(name).toString());
    }
    return vectNom;

}
QVector <QString> Employe::getList()
{
    QVector <QString> vectNom;
    QSqlQuery query;
    query.prepare("SELECT DISTINCT CINE FROM employes");
    query.exec();
    int name = query.record().indexOf("CINE");
    while (query.next()){
        vectNom.push_back(query.value(name).toString());
    }
    return vectNom;

}

int Employe::getNombreEmployeRetraite(QString Role, int val1, int val2){

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM employes WHERE role=:role and age BETWEEN :val1 AND :val2");
    query.bindValue(":role", Role);
    query.bindValue(":val1", val1);
    query.bindValue(":val2", val2);
    query.exec();
    query.first();
    return query.value(0).toInt();

}
int Employe::getNombreEmployeParRole(QString Role,QString Type){

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM employes WHERE role=:Role AND role LIKE '%' || :Type || '%'");
    query.bindValue(":Role", Role);
     query.bindValue(":Type",Type);
    query.exec();
    query.first();
    return query.value(0).toInt();

}
int Employe::getNombreEmployes() {

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) role FROM employes");
    query.exec();
    query.first();
    return query.value(0).toInt();

}

int Employe::getNombreEmploye(QString Role){

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM employes WHERE role=:Role");
     query.bindValue(":Role", Role);
    query.exec();
    query.first();
    return query.value(0).toInt();

}
