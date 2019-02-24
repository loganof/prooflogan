/********************************************************************************
** Form generated from reading UI file 'qtfir.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTFIR_H
#define UI_QTFIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GotoCellDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *GotoCellDialog)
    {
        if (GotoCellDialog->objectName().isEmpty())
            GotoCellDialog->setObjectName(QStringLiteral("GotoCellDialog"));
        GotoCellDialog->resize(263, 88);
        widget = new QWidget(GotoCellDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(9, 9, 234, 55));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setEnabled(false);

        horizontalLayout_2->addWidget(okButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(GotoCellDialog);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(GotoCellDialog);
    } // setupUi

    void retranslateUi(QDialog *GotoCellDialog)
    {
        GotoCellDialog->setWindowTitle(QApplication::translate("GotoCellDialog", "Go to Cell", 0));
        label->setText(QApplication::translate("GotoCellDialog", "&Cell Location:", 0));
        okButton->setText(QApplication::translate("GotoCellDialog", "OK", 0));
        cancelButton->setText(QApplication::translate("GotoCellDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class GotoCellDialog: public Ui_GotoCellDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTFIR_H
