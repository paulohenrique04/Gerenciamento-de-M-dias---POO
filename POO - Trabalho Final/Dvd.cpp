#include "Dvd.h"
#include <iostream>

// retorna aúdio
vector<string> Dvd::getFormatoAudio() {
    return formatoAudio;
}

// modifica áudio
void Dvd::setFormatoAudio(vector<string> formatAudio) {
    formatoAudio = formatAudio;
}

// retorna formato da tela
vector<string> Dvd::getFormatoTela() {
    return formatoTela;
}

// modifica formato da tela
void Dvd::setFormatoTela(vector<string> formatTel) {
    formatoTela = formatTel;
} 

// retorna legendas
vector<string> Dvd::getLegendas() {
    return legendas;
}

// modifica legendas
void Dvd::setLegendas(vector<string> leg) {
    legendas = leg;
}

