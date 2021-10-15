#pragma once

#include "HUD.h"
#include "De.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HUD w;
	w.show();
	return a.exec();
}
