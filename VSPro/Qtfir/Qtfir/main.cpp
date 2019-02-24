#include <QApplication>
#include <QDialog>
#include "ui_qtfir.h"
#include "GoToCellDialog.h"

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	GoToCellDialog *dialog = new GoToCellDialog();
	dialog->show();
	return app.exec();
}
