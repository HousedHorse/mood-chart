#include "legenditem.h"
#include "ui_legenditem.h"

LegendItem::LegendItem(QWidget *parent, QColor color, QString label) :
    QWidget(parent),
    ui(new Ui::LegendItem)
{
    ui->setupUi(this);

    setColor(color);
    setLabel(label);
}

LegendItem::~LegendItem()
{
    delete ui;
}

void LegendItem::setColor(QColor color)
{
    // set color
    QPalette pal = palette();
    pal.setColor(QPalette::Background, color);
    ui->frame->setAutoFillBackground(true);
    ui->frame->setPalette(pal);
}

void LegendItem::setLabel(QString label)
{
    // set label
    ui->label->setText(label);
}
