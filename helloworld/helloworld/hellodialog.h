#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QMainWindow>

namespace Ui {
    class HelloDialog;
}

class HelloDialog : public QMainWindow
{
    Q_OBJECT

    public:
        //不能发生相应的隐式类型转换
        HelloDialog(QWidget *parent = 0);
        ~HelloDialog();

    private:
        //定义私有数据成员为只想HelloDialog的指针
        Ui::HelloDialog *ui;
};

#endif // HELLODIALOG_H
