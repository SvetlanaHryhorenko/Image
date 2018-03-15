#ifndef IMAGEWINDOW_H
#define IMAGEWINDOW_H

#include <QMainWindow>

namespace Ui {
class ImageWindow;
}

class ImageWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageWindow(QWidget *parent = 0);
    ~ImageWindow();

private slots:
    void on_pushButton_add_clicked();


    void on_Resize_Button_clicked();

  //  void on_Single_clicked();

    void on_Single_clicked();

    void on_Complex_clicked();

    void on_Save_clicked();

private:
    Ui::ImageWindow *ui;
};

#endif // IMAGEWINDOW_H
