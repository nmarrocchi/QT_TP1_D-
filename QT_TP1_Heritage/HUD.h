#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IHM.h"
#include <qmessagebox.h>

#include "De.h"
#include "Dehisto.h"

class HUD : public QMainWindow
{
	Q_OBJECT

public:
	HUD(QWidget *parent = Q_NULLPTR);

public slots:
	void setDehistoHUD();
	void setDeHUD();

	void dd();

private:
	Ui::Form ui; // - Widget
	De De_C; // class De
	Dehisto Dehisto_C; // class Dehisto

	//HUD operator++(int v); // - T T::operator++(int)
};