#ifndef ORDERCREATION_H
#define ORDERCREATION_H

#include <QDialog>
#include <QQmlApplicationEngine>

#include "StaffTable.h"

namespace Ui {
class OrderCreation;
}

class OrderCreation : public QDialog
{
    Q_OBJECT

public:
    explicit OrderCreation(QWidget *parent = nullptr);
    ~OrderCreation();

private:
    Ui::OrderCreation *ui;

    StaffTable* staffTable;

private slots:
    void openMap();
    void on_openStaffTable_clicked();
};

#endif // ORDERCREATION_H
