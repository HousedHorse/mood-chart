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
    void setColor(QColor color);
    void setLabel(QString label);

private:
    Ui::LegendItem *ui;
};

#endif // LEGENDITEM_H
