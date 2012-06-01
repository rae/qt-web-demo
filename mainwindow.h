#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QUrl;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_lineEdit_returnPressed();

    void on_webView_urlChanged(const QUrl &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
