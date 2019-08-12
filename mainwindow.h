#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class QNetworkAccessManager;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnGet_clicked();

    void on_btnPost_clicked();

private:
//    void getUsers();
//    void getUser();
//    void newOrUpdateUser();
//    void newUser();
//    void updateUser();
//    void removeUser();

    void getProduction();
    void newProductionDetail();
    Ui::MainWindow *ui;
    QNetworkAccessManager *m_nam;
};

#endif // MAINWINDOW_H
