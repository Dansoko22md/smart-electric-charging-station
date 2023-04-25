#ifndef CAMERA_H
#define CAMERA_H

#include <QDialog>

namespace Ui {
class Camera;
}

class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;

class Camera : public QDialog
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = nullptr);
    ~Camera();

private:
    Ui::Camera *ui;
    QCamera *mCamera;
    QCameraViewfinder *mCameraViewfinder;
    QCameraImageCapture *mCameraImageCapture;
    QVBoxLayout *mLayout;
    QMenu *mOptionMenu;
    QAction *mStartAction;
    QAction *mEndAction;
    QAction *mCapturAction;
};

#endif // CAMERA_H
