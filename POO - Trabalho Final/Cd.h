#pragma once
#ifndef CD_H
#define CD_H
#include <iostream>
#include "Midia.h"

class Cd : public Midia{
private:
    int duracao;
    float volume;
    bool coletanea;
public:
    //Cd(string, string, vector<string>, int, string, vector<string>, int, float, bool);
    void setDuracao(int);
    int getDuracao();
    void setVolume(float);
    float getVolume();
    void setColetanea(bool colet);
    bool getColetanea();
};

#endif