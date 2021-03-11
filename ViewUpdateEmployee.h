#ifndef VIEWUPDATEEMPLOYEE_H
#define VIEWUPDATEEMPLOYEE_H

#include "ListEmployees.h"

#include <QDialog>
#include <QSqlDatabase>

class ListEmployee;

namespace Ui {
class ViewUpdateEmployee;
}

class ViewUpdateEmployee : public QDialog
{
    Q_OBJECT

signals:
    void sendData(bool update);

public:
    explicit ViewUpdateEmployee(QWidget *parent = nullptr);
    ~ViewUpdateEmployee();

public slots:
    void setValues(const QString &id);

private slots:
    void on_saveUpdatedInfo_clicked();
    void on_updateEmployeeInfoButton_clicked();

private:
    Ui::ViewUpdateEmployee *ui;

    QSqlDatabase employeesDB;

    QString employeeId;
};

#endif // VIEWUPDATEEMPLOYEE_H
