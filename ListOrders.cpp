#include "ListOrders.h"
#include "ui_ListOrders.h"

ListOrders::ListOrders(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListOrders)
{
    ui->setupUi(this);

    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    setWindowFlags(windowFlags() & Qt::WindowMinimizeButtonHint);

    ListOrders::showNormal();
    ListOrders::showMaximized();

    ordersHistoryDB = QSqlDatabase::addDatabase("QSQLITE");
    ordersHistoryDB.setDatabaseName("D:\\Diploma\\CRM_AutoService\\ServiceStationDB.db");
    ordersHistoryDB.open();

    loadTable();
}

ListOrders::~ListOrders()
{
    delete ui;
}

void ListOrders::loadTable()
{
    queryModel = new QSqlQueryModel(this);

    QString queryString;

    queryString = "SELECT client, date, contacts, auto_model, manufacture_year, VIN_number, discounts, service_number, auto_license_plate, "
                  "staff_team, works_list, spare_list, price, feedback, ready_or_not FROM OrdersHistory";

    queryModel->setQuery(queryString, ordersHistoryTable);

    //queryModel->setHeaderData(0, Qt::Horizontal, tr("id"));
    queryModel->setHeaderData(0, Qt::Horizontal, tr("ФИО клиента"));
    queryModel->setHeaderData(1, Qt::Horizontal, tr("Дата"));
    queryModel->setHeaderData(2, Qt::Horizontal, tr("Контакты"));
    queryModel->setHeaderData(3, Qt::Horizontal, tr("Модель авто"));
    queryModel->setHeaderData(4, Qt::Horizontal, tr("Год выпуска"));
    queryModel->setHeaderData(5, Qt::Horizontal, tr("VIN"));
    queryModel->setHeaderData(6, Qt::Horizontal, tr("Скидки"));
    queryModel->setHeaderData(7, Qt::Horizontal, tr("Сервис"));
    queryModel->setHeaderData(8, Qt::Horizontal, tr("Гос. номер"));
    queryModel->setHeaderData(9, Qt::Horizontal, tr("Работники"));
    queryModel->setHeaderData(10, Qt::Horizontal, tr("Список работ"));
    queryModel->setHeaderData(11, Qt::Horizontal, tr("Список запчастей"));
    queryModel->setHeaderData(12, Qt::Horizontal, tr("Цена"));
    queryModel->setHeaderData(13, Qt::Horizontal, tr("Отзыв"));
    queryModel->setHeaderData(14, Qt::Horizontal, tr("Готовность"));

    ui->tableView->setModel(queryModel);

    ui->tableView->horizontalHeader()->setDefaultSectionSize(maximumWidth());
    ui->tableView->resizeColumnsToContents();
}

void ListOrders::on_orderCreationButton_clicked()
{
    addOrder = new AddOrder;
    addOrder->show();
    addOrder->setAttribute(Qt::WA_DeleteOnClose);
}
