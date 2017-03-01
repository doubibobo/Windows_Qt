#include "hellodialog.h"
#include "ui_hellodialog.h"

//HelloDialog类成员函数的实现方法
/*
 *构造函数:Ui中的HelloDialog并非是HelloDilog中的类
 */
HelloDialog::HelloDialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelloDialog)
{
    ui->setupUi(this);
}
/*
 *析构函数
 */
HelloDialog::~HelloDialog()
{
    delete ui;
}
