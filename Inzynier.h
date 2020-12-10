#pragma once
#include "Pracownik.h"
#ifndef INZYNIER_H
#define INZYNIER_H
using namespace std;

class Inzynier : public Pracownik
{
public:
    Inzynier(int spec, string imie) : spec(spec), Pracownik(imie)
    {
        if (spec == 1) {
            gg = "skonczyl wydzial MEiL.";
        }
        else if (spec == 2) {
            gg = "skonczyl wydzial EiTI.";
        }
        else { gg = "skonczyl wydzial SiMR."; }
    };

    virtual void drukuj_osobe();
    virtual int getWynagrodzenie();
    virtual int get_wzrost_ceny_produktu();

protected:
    int spec;
    string imie;
    int stala = 11; // wzrost ceny produktu o 9 zl
    int wynagrodzenie = 8; //wynagrodzenie Inzyniera
    string gg;
};

#endif // !INZYNIER_H


