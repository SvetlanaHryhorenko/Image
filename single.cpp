#include "single.h"
#include "ui_single.h"
#include "singleton.h"
#include <QFileDialog>
#include <QFile>
#include <QPicture>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QMessageBox>
#include <QList>

Single::Single(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Single)
{
    ui->setupUi(this);
}

Single::~Single()
{
    delete ui;
}

void Single::on_Add_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open file "),"C://","All files (*.*)");

     //   ui->imageLabel= new QLabel;
    if( Singleton:: getInstance()->myList0.size()<1)
      { //ui->imageLabel->setBackgroundRole(QPalette::Base);
        //ui->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->imageLabel->setScaledContents(true);
        QPixmap pix(filename);
        ui->imageLabel->setPixmap(pix);}
           Singleton:: getInstance()->myList0.push_back(filename);
         //  Singleton:: myList0.toStdList();
       //  QMessageBox::information(this,tr("File name"),Singleton::getInstance()->myList0.at(0));
}

void Single::on_Next_clicked()
{
if(Singleton:: getInstance()->iter0<Singleton::getInstance()->myList0.size()-1)
{
    Singleton:: getInstance()->iter0++;
    //ui->imageLabel->setBackgroundRole(QPalette::Base);
//ui->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
ui->imageLabel->setScaledContents(true);
QPixmap pix(Singleton::getInstance()->myList0.at(Singleton::getInstance()->iter0));
 ui->imageLabel->setPixmap(pix);}
}

void Single::on_Previous_clicked()
{
    if(Singleton:: getInstance()->iter0>0)
    {
        Singleton:: getInstance()->iter0--;
        ui->imageLabel->setBackgroundRole(QPalette::Base);
    ui->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->imageLabel->setScaledContents(true);
    QPixmap pix(Singleton::getInstance()->myList0.at(Singleton::getInstance()->iter0));
     ui->imageLabel->setPixmap(pix);}
}

void Single::on_Delete_clicked()
{
    Singleton::getInstance()->myList0.removeAt(Singleton::getInstance()->iter0);
    if(Singleton::getInstance()->iter0>=Singleton::getInstance()->myList0.size())
    {Singleton::getInstance()->iter0--;}
    ui->imageLabel->setBackgroundRole(QPalette::Base);
ui->imageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
ui->imageLabel->setScaledContents(true);
QPixmap pix(Singleton::getInstance()->myList0.at(Singleton::getInstance()->iter0));
 ui->imageLabel->setPixmap(pix);
}

void Single::on_SaveChanges_clicked()
{
    QString outfile="C://users/sveta/documents/image/single.txt";
    QFile file(outfile);
    if (!file.open(QIODevice::WriteOnly)) {
             QMessageBox::information(this, tr("Unable to open file"),
                 file.errorString());}

    QDataStream out(&file);
     out.setVersion(QDataStream::Qt_4_8);
    for(int i=0;i<Singleton::getInstance()->myList0.size();i++)
    {
        out <<Singleton::getInstance()->myList0.at(i)/*<<"\n"*/ ;
    }
file.close();

}
