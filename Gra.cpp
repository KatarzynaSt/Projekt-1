#pragma once
#include <iostream>
#include <istream>
#include <math.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
#include <time.h>
#include "Firma.h"
#include "Gra.h"

void Gra::granie()
{
	string i;
	Firma firm;
	while (firm.getWartosc_spolki() < 1000 && firm.getPrzychod() >= 0 && firm.getSumaRat() <= 3 * firm.getWartosc_spolki())
	{ 
		string k;
		if (firm.getWartosc_spolki() < 1000 && firm.getPrzychod() > 0)
		{
			cin >> k;
			if (k == "zatrInz")
			{
				firm.zatrudnij_inzyniera();
			}
			else if (k == "zatrMag")
			{
				firm.zatrudnij_magazyniera();
					}
			else if (k == "zatrRob")
			{
				firm.zatrudnij_robotnika();
			}
			else if (k == "zatrMark")
			{
				firm.zatrudnij_marketera();
			}
			else if (k == "bioreKredyt")
			{
				firm.wez_kredyt();
			}
			else if (k == "listPrac")
			{
				firm.wypisz_pracownikow();
			}
			else if (k == "koniecMies")
			{
				cout << "Zakonczony miesiac" << firm.get_numer_tury() << "." << endl;
				firm.koniec_miesiaca();
			}
			else
			{
				cout << "Nie ma takiej operacji mozliwej w grze, probuj dalej - wpisz poprawna komende." << endl;
			}
		}
	}

if (firm.getPrzychod() <0)
			{
				cout << "BANKRUT!!!! Koniec gry." << endl;
			}
		else if (firm.getSumaRat()> 3*firm.getWartosc_spolki())
			{
				cout << "BANKRUT!!!! Koniec gry." << endl;
			}
		else
			{
				cout << "Gra zakonczona sukcesem! Osiagnieto kapital 1000 zl!! Gratulacje! :) :) :)" << endl;
			}
}
