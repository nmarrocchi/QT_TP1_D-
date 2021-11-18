#pragma once

#include "HUD.h"

HUD::HUD(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.De->setVisible(0);
	ui.Dehisto->setVisible(0);
}

// - Set Dehisto HUD Visible
void HUD::setDehistoHUD() {
	ui.De->setVisible(0);
	ui.Dehisto->setVisible(1);
}

// - Set De HUD Visible
void HUD::setDeHUD() {
	ui.De->setVisible(1);
	ui.Dehisto->setVisible(0);
}

void HUD::dd() {
	De_C.dd();
}

/*
HUD HUD::operator++(int v)
{
	return HUD();
}*/