#ifndef SINGLETON_H
#define SINGLETON_H
#include <Qlist>
#include <QString>
#include <QFile>
#include "image4.h"

class Singleton
{
private:
static Singleton * p_instance;
// Конструкторы и оператор присваивания недоступны клиентам
Singleton() {}
Singleton( const Singleton& );
Singleton& operator=( Singleton& );
public:
   // Singleton();
//static Singleton * getInstance();

static Singleton * Singleton::getInstance()
{
    if(!p_instance)
        p_instance = new Singleton();
    return p_instance;
}
QList<QString> myList0;
QList<Image4> myList4;
int iter0;
int iter4;
Image4 Im;
void ReadSingle()
{

      /*  in>>a>>b>>c;
        QMessageBox::information(this,tr("File name a"),a);
        QMessageBox::information(this,tr("File name b"),b);
        QMessageBox::information(this,tr("File name c"),c);
    */
}
};

#endif // SINGLETON_H
