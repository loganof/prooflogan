#include "GoToCellDialog.h"
#include <QtGui>


GoToCellDialog::GoToCellDialog(QWidget *parent):QDialog(parent)
{
	setupUi(this);
	QRegExp regExp("[A-Za=z][1-9]{0, 2}");
	lineEdit->setValidator(new QRegExpValidator(regExp, this));
	connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(refect()));
}


GoToCellDialog::~GoToCellDialog(void)
{
}


void GoToCellDialog::on_lineEdit_textChanged()
{
	okButton->setEnabled(lineEdit->hasAcceptableInput());
}