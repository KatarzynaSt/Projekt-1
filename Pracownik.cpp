#include <iostream>
#include "Pracownik.h"
#include <istream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <time.h>
#pragma once

void Pracownik::drukuj_osobe()
{
    std::cout << this->imie << std::endl;
}

int Pracownik::getWynagrodzenie() {
    return 0;
}

int Pracownik::getStala() {
    return 0;
}

int Pracownik::get_teorWypr_produkty() {
    return 0;
}

int Pracownik::get_popyt() {
    return 0;
}

int Pracownik::get_PojemoscMagazynu() {
    return 0;
}

int Pracownik::get_wzrost_ceny_produktu() {
    return 0;
}