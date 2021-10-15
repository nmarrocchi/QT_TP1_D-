#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HUD.h"
#include <qmessagebox.h>

class HUD : public QMainWindow
{
	Q_OBJECT

public:
	HUD(QWidget *parent = Q_NULLPTR);

public slots:
	void setDehistoHUD();
	void setDeHUD();

private:
	Ui::QT_TP1Class ui; // - Widget
	//HUD operator++(int v); // - T T::operator++(int)
};