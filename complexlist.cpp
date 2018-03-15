#include "complexlist.h"
#include "ui_complexlist.h"
#include "complex.h"
#include "singleton.h"

ComplexList::ComplexList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComplexList)
{
    ui->setupUi(this);
}

ComplexList::~ComplexList()
{
    delete ui;
}


void ComplexList::on_AddComplex_clicked()
{
   // Image4 Im4;// = new Image4();
    //Singleton::getInstance()->myList4.push_back(Im4);
    Singleton::getInstance()->Im.image1="";
    Singleton::getInstance()->Im.image2="";
    Singleton::getInstance()->Im.image3="";
    Singleton::getInstance()->Im.image4="";
    Complex *Im = new Complex();
        Im->show();
}

void ComplexList::on_Next_clicked()
{
   // Singleton::getInstance()->iter4++;
    if(Singleton::getInstance()->iter4<Singleton::getInstance()->myList4.size()-1)
   {
        Singleton::getInstance()->iter4++;
        //ui->Img1->setBackgroundRole(QPalette::Base);
   // ui->Img1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->Img1->setScaledContents(true);
    QPixmap pix1(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image1);
    ui->Img1->setPixmap(pix1);
      //  ui->Img2->setBackgroundRole(QPalette::Base);
       // ui->Img2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->Img2->setScaledContents(true);
        QPixmap pix2(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image2);
        ui->Img2->setPixmap(pix2);
     //       ui->Img3->setBackgroundRole(QPalette::Base);
       //     ui->Img3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
            ui->Img3->setScaledContents(true);
            QPixmap pix3(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image3);
            ui->Img3->setPixmap(pix3);
         //       ui->Img4->setBackgroundRole(QPalette::Base);
           //     ui->Img4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
                ui->Img4->setScaledContents(true);
                QPixmap pix4(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image4);
                    ui->Img4->setPixmap(pix4);}
   // Singleton::getInstance()->myList4.image
}

void ComplexList::on_Delete_clicked()
{
    Singleton::getInstance()->myList4.removeAt(Singleton::getInstance()->iter4);
    if(Singleton::getInstance()->iter4>=Singleton::getInstance()->myList4.size())
    {Singleton::getInstance()->iter4--;}
  //  ui->Img1->setBackgroundRole(QPalette::Base);
//ui->Img1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
ui->Img1->setScaledContents(true);
QPixmap pix1(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image1);
ui->Img1->setPixmap(pix1);
  //  ui->Img2->setBackgroundRole(QPalette::Base);
    //ui->Img2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->Img2->setScaledContents(true);
    QPixmap pix2(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image2);
    ui->Img2->setPixmap(pix2);
      //  ui->Img3->setBackgroundRole(QPalette::Base);
        //ui->Img3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->Img3->setScaledContents(true);
        QPixmap pix3(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image3);
        ui->Img3->setPixmap(pix3);
          //  ui->Img4->setBackgroundRole(QPalette::Base);
            //ui->Img4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
            ui->Img4->setScaledContents(true);
            QPixmap pix4(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image4);
                ui->Img4->setPixmap(pix4);
}



void ComplexList::on_Previous_clicked()
{
    if(Singleton::getInstance()->iter4>0)
   {
        Singleton::getInstance()->iter4--;
      //  ui->Img1->setBackgroundRole(QPalette::Base);
    //ui->Img1->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->Img1->setScaledContents(true);
    QPixmap pix1(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image1);
    ui->Img1->setPixmap(pix1);
        //ui->Img2->setBackgroundRole(QPalette::Base);
        //ui->Img2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        ui->Img2->setScaledContents(true);
        QPixmap pix2(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image2);
        ui->Img2->setPixmap(pix2);
          //  ui->Img3->setBackgroundRole(QPalette::Base);
            //ui->Img3->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
            ui->Img3->setScaledContents(true);
            QPixmap pix3(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image3);
            ui->Img3->setPixmap(pix3);
              //  ui->Img4->setBackgroundRole(QPalette::Base);
                //ui->Img4->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
                ui->Img4->setScaledContents(true);
                QPixmap pix4(Singleton::getInstance()->myList4.at(Singleton::getInstance()->iter4).image4);
                    ui->Img4->setPixmap(pix4);}

}

void ComplexList::on_SaveChanges_clicked()
{

    QString outfile1="C://users/sveta/documents/image/complex.txt";
    QFile file1(outfile1);
    if (!file1.open(QIODevice::WriteOnly)) {
             //QMessageBox::information(this, tr("Unable to open file"),
               //  file1.errorString());
    }

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
