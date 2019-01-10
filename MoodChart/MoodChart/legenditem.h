#ifndef LEGENDITEM_H
#define LEGENDITEM_H

#include <QWidget>

namespace Ui {
class LegendItem;
}

class LegendItem : public QWidget
{
    Q_OBJECT

public:
    explicit LegendItem(QWidget *parent = nullptr, QColor color = Qt::white, QString label = "Null");
    ~LegendItem();

private:
    Ui::LegendItem *ui;
    //QColor color;
    //QString label;
};

#endif // LEGENDITEM_H
