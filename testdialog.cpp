#include "testdialog.h"
#include "ui_testdialog.h"

TestDialog::TestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TestDialog)
{
    ui->setupUi(this);
}

TestDialog::~TestDialog()
{
    delete ui;
}


void TestDialog::on_checkBoxChangeStyle_toggled(bool checked)
{
    QPalette palette=ui->lineEdit->palette();
    if (checked) {
//        ui->lineEdit->setStyleSheet("QLineEdit { background-color : red; color : white; }");
        palette.setColor (QPalette::Base, QColor(255, 0, 0));
    }
    else {
//        ui->lineEdit->setStyleSheet(styleSheet());
        palette.setColor (QPalette::Base, QColor(255, 255, 255));
    }
    ui->lineEdit->setPalette(palette);
}
