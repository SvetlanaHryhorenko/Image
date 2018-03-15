#ifndef COMPLEXLIST_H
#define COMPLEXLIST_H

#include <QDialog>

namespace Ui {
class ComplexList;
}

class ComplexList : public QDialog
{
    Q_OBJECT

public:
    explicit ComplexList(QWidget *parent = 0);
    ~ComplexList();

private slots:


    void on_AddComplex_clicked();

    void on_Next_clicked();

    void on_Delete_clicked();


    void on_Previous_clicked();

    void on_SaveChanges_clicked();

private:
    Ui::ComplexList *ui;
};

#endif // COMPLEXLIST_H
