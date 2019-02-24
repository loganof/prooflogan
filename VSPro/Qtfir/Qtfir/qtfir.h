#ifndef QTFIR_H
#define QTFIR_H

#include <QtWidgets/QDialog>
#include "ui_qtfir.h"

class Qtfir : public QDialog
{
	Q_OBJECT

public:
	Qtfir(QWidget *parent = 0);
	~Qtfir();

private:
	Ui::GotoCellDialog ui;
};

#endif // QTFIR_H
