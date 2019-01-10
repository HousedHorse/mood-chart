/********************************************************************************
** Form generated from reading UI file 'legenditem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGENDITEM_H
#define UI_LEGENDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LegendItem
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *label;

    void setupUi(QWidget *LegendItem)
    {
        if (LegendItem->objectName().isEmpty())
            LegendItem->setObjectName(QString::fromUtf8("LegendItem"));
        LegendItem->resize(238, 75);
        gridLayout = new QGridLayout(LegendItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(LegendItem);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(30, 30));
        frame->setMaximumSize(QSize(30, 30));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        label = new QLabel(LegendItem);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(LegendItem);

        QMetaObject::connectSlotsByName(LegendItem);
    } // setupUi

    void retranslateUi(QWidget *LegendItem)
    {
        LegendItem->setWindowTitle(QApplication::translate("LegendItem", "Form", nullptr));
        label->setText(QApplication::translate("LegendItem", "Entry", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LegendItem: public Ui_LegendItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGENDITEM_H
