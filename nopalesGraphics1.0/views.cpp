#include "views.h"
#include "ui_example.h"

example::example(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::example)
{
    ui->setupUi(this);
}

example::~example()
{
    delete ui;
}
