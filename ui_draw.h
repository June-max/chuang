/********************************************************************************
** Form generated from reading UI file 'draw.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAW_H
#define UI_DRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_draw
{
public:

    void setupUi(QWidget *draw)
    {
        if (draw->objectName().isEmpty())
            draw->setObjectName(QString::fromUtf8("draw"));
        draw->resize(400, 300);

        retranslateUi(draw);

        QMetaObject::connectSlotsByName(draw);
    } // setupUi

    void retranslateUi(QWidget *draw)
    {
        draw->setWindowTitle(QApplication::translate("draw", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class draw: public Ui_draw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAW_H
