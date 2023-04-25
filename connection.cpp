#include "connection.h"

Connection::Connection()
{

}
bool Connection::createConnection()
{
 bool test=false;
 db = QSqlDatabase::addDatabase("QODBC");
 db.setDatabaseName("Source_Projet2A");
 db.setUserName("moussa");//inserer nom de l'utilisateur
 db.setPassword("esprit18");//inserer mot de passe de cet utilisateur

  if (db.open())
  test=true;
    return  test;
   }
void Connection::closeConnection()
{
       db.close();
       db.removeDatabase(QSqlDatabase::defaultConnection);
}
