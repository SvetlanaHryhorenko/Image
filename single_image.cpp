#include "single_image.h"
#include "ui_single_image.h"

Single_Image::Single_Image(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Single_Image)
{
    ui->setupUi(this);
}

Single_Image::~Single_Image()
{
    delete ui;
}

void Single_Image::on_pushButton_Add_Image_clicked()
{
   }
