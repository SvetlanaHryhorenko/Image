#include "imagewindow.h"
#include <QApplication>
#include <QString>
#include "singleton.h"
#include "image4.h"

int main(int argc, char *argv[])
{
  //  ReadSingle();
    QString infile="C://users/sveta/documents/image/single.txt";
    QFile file1(infile);
    if (!file1.open(QIODevice::ReadOnly)) {
             //QMessageBox::information(this, tr("Unable to open file"),
               //  file1.errorString());}
}
    QDataStream in(&file1);
     in.setVersion(QDataStream::Qt_4_8);
     QString file;
    while (!file1.atEnd())
    // for(int i;i<3;i++)
     {
       in>>file;
        Singleton:: getInstance()->myList0.push_back(file);
     }

    QString infile2="C://users/sveta/documents/image/complex.txt";
    QFile file2(infile2);
    if (!file2.open(QIODevice::ReadOnly)) {
             //QMessageBox::information(this, tr("Unable to open file"),
               //  file1.errorString());}
}
    QDataStream in2(&file2);
     in.setVersion(QDataStream::Qt_4_8);
   //  QString file;

    while (!file2.atEnd())
    {
         Image4 Im;
         QString name;
      in2>>name;
      Im.image1=name;//>>Im.image2>>Im.image3>>Im.image4;
      in2>>name;
      Im.image2=name;
      in2>>name;
      Im.image3=name;
      in2>>name;
      Im.image4=name;
      Singleton:: getInstance()->myList4.push_back(Im);

    }


    QApplication a(argc, argv);
    ImageWindow w;
    w.show();

    return a.exec();
}
