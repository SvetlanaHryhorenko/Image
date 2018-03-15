#ifndef COMPLEX_H
#define COMPLEX_H

#include <QDialog>

namespace Ui {
class Complex;
}

class Complex : public QDialog
{
    Q_OBJECT

public:
    explicit Complex(QWidget *parent = 0);
    ~Complex();

private slots:
    void on_Add1_clicked();

    void on_Add2_clicked();

    void on_Add3_clicked();

    void on_Add4_clicked();

    void on_Save_clicked();

private:
    Ui::Complex *ui;
};

#endif // COMPLEX_H
