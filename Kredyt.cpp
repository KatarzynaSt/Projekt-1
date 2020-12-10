#pragma once
#include "Kredyt.h"
#include <iostream>
#include <istream>
#include <math.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>
#include <time.h>

	double Kredyt::getRata()
	{
		return this->rata;
	}

	int Kredyt::getMiesiace()
	{
		return this->miesiace;
	}

	void Kredyt::splac_rate()
	{
		pozostale_raty--;
		std::cout << "Pozostalo " << pozostale_raty << " rat do splacenia." << std::endl;
	}
	bool Kredyt::splacony()
	{
		if (pozostale_raty == 0)
		{
			return true;
		}
		else {
			return false;
		}
	}

	int Kredyt::get_pozostale_raty()
	{
		return this->pozostale_raty;
	}