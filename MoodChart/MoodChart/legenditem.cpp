#include "legenditem.h"
#include "ui_legenditem.h"

LegendItem::LegendItem(QWidget *parent, QColor color, QString label) :
    QWidget(parent),
    ui(new Ui::LegendItem)
{
    ui->setupUi(this);

    // set color
    QPalette pal = palette();
    pal.setColor(QPalette::Background, color);
    ui->frame->setAutoFillBackground(true);
    ui->frame->setPalette(pal);

    // set label
    ui->label->setText(label);
}

LegendItem::~LegendItem()
{
    delete ui;
}
