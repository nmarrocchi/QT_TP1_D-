#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HUD.h"
#include <qmessagebox.h>

class De
{

public:
	De(QWidget *parent = Q_NULLPTR);

public slots:
	void dd();
	void addToScore(int x);
	void resetScore();

private:
	int ddc; // score du dé
	Ui::QT_TP1Class ui;

};
