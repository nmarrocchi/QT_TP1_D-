#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IHM.h"
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
	Ui::Form ui;

};
