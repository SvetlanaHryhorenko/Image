#ifndef SINGLE_H
#define SINGLE_H

#include <QDialog>

namespace Ui {
class Single;
}

class Single : public QDialog
{
    Q_OBJECT

public:
    explicit Single(QWidget *parent = 0);
    ~Single();

private slots:
    void on_Add_clicked();

    void on_Next_clicked();

    void on_Previous_clicked();

    void on_Delete_clicked();

    void on_SaveChanges_clicked();

private:
    Ui::Single *ui;
};

#endif // SINGLE_H
