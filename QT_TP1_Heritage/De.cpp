#pragma once

#include "De.h"

De::De(QWidget *parent)
{
	dd();
	resetScore();
	ui.scoreTotal_text->setText("Score : " + QString::number(this->ddc));

	ui.De->setVisible(0);
	ui.Dehisto->setVisible(0);
}

// - Lancement du dé
void De::dd()
{

	int i;

	i = rand() % 6 + 1;
	ui.Score_De_text->setText(QString::number(i));

	addToScore(i);
}

// - Ajout de la valeur du dé dans le score total
void De::addToScore(int x) {
	this->ddc = this->ddc + x;
	ui.scoreTotal_text->setText("Score : " + QString::number(this->ddc));
}

// - Réinitialisation du score total
void De::resetScore() {
	this->ddc = 0;
	ui.scoreTotal_text->setText("Score : " + QString::number(this->ddc));

}
/*
De De::operator++(int v)
{
	dd();
	return(*this);
}*/