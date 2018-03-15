#include "imagewindow.h"
#include "ui_imagewindow.h"
#include "dialog.h"
#include "single.h"
#include "complexlist.h"
#include "singleton.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QTextEdit>
#include <QFile>
#include <QPicture>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include "singleton.h"



ImageWindow::ImageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageWindow)
{
    ui->setupUi(this);
}

ImageWindow::~ImageWindow()
{
    delete ui;
}
/*
void ImageWindow::on_pushButton_add_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open file "),"C://","All files (*.*)");
/*QMessageBox::information(this,tr("File name"),filename);
QString outfile="C:\\f.txt";
QFile file(outfile);
if (!file.open(QIODevice::WriteOnly)) {
         QMessageBox::information(this, tr("Unable to open file"),
             file.errorString());
         return;
 }
QDataStream out(&file);
 out.setVersion(QDataStream::Qt_4_8);
 out << filename;
*/
/* QPixmap pix(filename);
     ui->label->setPixmap(pix);

   /*  QListWidget *mylist = new QListWidget;

        //Create Our Item
        MyListItem *itm = new MyListItem;
        itm->setText("My Item");
        itm->icon_to_be_shown = "PATH TO PICTURE";

        //Add Our Item To Our List
        mylist->addItem(itm);*/
}


/*void ImageWindow::on_Resize_Button_clicked()
{
    /*Q_ASSERT(ui->label->pixmap());
   //  int scaleFactor = 0.2;
        ui->label->resize(/*scaleFactor1.5 * ui->label->pixmap()->size());
}
*/

/*void ImageWindow::on_Single_clicked()
{
    Single_Image *Im = new Single_Image();
       Im->show();
}
*/

void ImageWindow::on_Single_clicked()
{
   Single *Im = new Single();
       Im->show();
Singleton::getInstance()->iter0=-1;
       /* Dialog1 *Im = new Dialog1();
       Im->show();*/
}

void ImageWindow::on_Complex_clicked()
{
    ComplexList *Im = new ComplexList();
        Im->show();
        Singleton::getInstance()->iter4=-1;
       // Singleton::instance().->myList.push_back(i);
}

void ImageWindow::on_Save_clicked()
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

QString outfile1="C://users/sveta/documents/image/complex.txt";
QFile file1(outfile1);
if (!file1.open(QIODevice::WriteOnly)) {
         QMessageBox::information(this, tr("Unable to open file"),
             file1.errorString());}

QDataStream out1(&file1);
 out1.setVersion(QDataStream::Qt_4_8);
for(int i=0;i<Singleton::getInstance()->myList4.size();i++)
{/*
    if(!Singleton::getInstance()->myList4.at(i).image1.trimmed().isEmpty())
  {  out1 <<Singleton::getInstance()->myList4.at(i).image1 ;}else
    {out1 <<"\n";}
    if(!Singleton::getInstance()->myList4.at(i).image2.trimmed().isEmpty())
  {  out1 <<Singleton::getInstance()->myList4.at(i).image2;}else
    {out1 <<"\n";}
    if(!Singleton::getInstance()->myList4.at(i).image3.trimmed().isEmpty())
  {  out1 <<Singleton::getInstance()->myList4.at(i).image3 ;}else
    {out1 <<"\n";}
    if(!Singleton::getInstance()->myList4.at(i).image4.trimmed().isEmpty())
  {  out1 <<Singleton::getInstance()->myList4.at(i).image4 ;}else
    {out1 <<"\n";}
*/
     out1 <<Singleton::getInstance()->myList4.at(i).image1;
    out1 <<Singleton::getInstance()->myList4.at(i).image2;
    out1 <<Singleton::getInstance()->myList4.at(i).image3;
    out1 <<Singleton::getInstance()->myList4.at(i).image4/*<<"\n"*/;
}
file1.close();

}
