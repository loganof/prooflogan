#pragma once
#include "qdialog.h"
#include "ui_qtfir.h"

class GoToCellDialog :
	public QDialog, public Ui::GotoCellDialog
{
	Q_OBJECT
public:
	GoToCellDialog(QWidget *parent = 0);
	~GoToCellDialog(void);
private:
	void on_lineEdit_textChanged();
};

