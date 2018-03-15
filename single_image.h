#ifndef SINGLE_IMAGE_H
#define SINGLE_IMAGE_H

#include <QDialog>

namespace Ui {
class Single_Image;
}

class Single_Image : public QDialog
{
    Q_OBJECT

public:
    explicit Single_Image(QWidget *parent = 0);
    ~Single_Image();

private slots:
    void on_pushButton_Add_Image_clicked();

private:
    Ui::Single_Image *ui;
};

#endif // SINGLE_IMAGE_H
