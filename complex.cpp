#include "complex.h"
#include "ui_complex.h"
#include <QFileDialog>
#include <QFile>
#include <QPicture>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "singleton.h"
#include "image4.h"

Complex::Complex(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Complex)
{
    ui->setupUi(this);
}

Complex::~Complex()
{
    delete ui;
}

void Complex::on_Add1_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open file "),"C://","All files (*.*)");
    Singleton::getInstance()->Im.image1=filename;//QFileDialog::getOpenFileName(this,tr("Open file "),"C://","All files (*.*)");
      // ui->Im1->setBackgroundRole(QPalette::Base);
        //ui->Im1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->Im1->setScaledContents(true);
        QPixmap pix(Singleton::getInstance()->Im.image1);
        ui->Im1->setPixmap(pix);
     //  Singleton::getInstance()->myList4.at((Singleton::getInstance()->myList4.size())-1).image1=;
}

void Complex::on_Add2_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open file "),"C://","All files (*.*)");
    Singleton::getInstance()->Im.image2=filename;
        //ui->Im2->setBackgroundRole(QPalette::Base);
        //ui->Im2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->Im2->setScaledContents(true);
        QPixmap pix(Singleton::getInstance()->Im.image2);
            ui->Im2->setPixmap(pix);
         //   Singleton::getInstance()->myList4.at(Singleton::getInstance()->myList4.size()-1).image2=filename;
}

void Complex::on_Add3_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open file "),"C://","All files (*.*)");
    Singleton::getInstance()->Im.image3=filename;
        //ui->Im3->setBackgroundRole(QPalette::Base);
        //ui->Im3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->Im3->setScaledContents(true);
        QPixmap pix(Singleton::getInstance()->Im.image3);
            ui->Im3->setPixmap(pix);
           // Singleton::getInstance()->myList4.at(Singleton::getInstance()->myList4.size()-1).image3=filename;
}

void Complex::on_Add4_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open file "),"C://","All files (*.*)");
    Singleton::getInstance()->Im.image4=filename;
        //ui->Im4->setBackgroundRole(QPalette::Base);
        //ui->Im4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->Im4->setScaledContents(true);
        QPixmap pix(Singleton::getInstance()->Im.image4);
            ui->Im4->setPixmap(pix);
            //Singleton::getInstance()->myList4.at(Singleton::getInstance()->myList4.size()-1).image4=filename;
}

void Complex::on_Save_clicked()
{
    Singleton::getInstance()->myList4.push_back( Singleton::getInstance()->Im);
}
