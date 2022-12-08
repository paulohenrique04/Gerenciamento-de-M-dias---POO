#pragma once
#ifndef DVD_H
#define DVD_H
#include <iostream>
#include <vector>
#include "Midia.h"

using namespace std;

class Dvd : public Midia{
private:
    vector<string> formatoAudio;
    vector<string> formatoTela;
    vector<string> legendas;
public:
    vector<string> getFormatoAudio();
    void setFormatoAudio(vector<string>);
    vector<string> getFormatoTela();
    void setFormatoTela(vector<string>);
    vector<string> getLegendas();
    void setLegendas(vector<string>);
};


#endif