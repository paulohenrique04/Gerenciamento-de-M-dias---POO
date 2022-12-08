#include "Cd.h"
#include <iostream>

using namespace std;

// construtor que chama explicitamente o construtor da classe pai
/*Cd::Cd(string artist, string title, vector<string> tracks, int launch, string genre, vector<string> palavras_chave, int time, float vol, bool colet) :
Midia(artist, title, tracks, launch, genre, palavras_chave)
{
    setDuracao(time);
    setVolume(vol);
    setColetanea(colet);
}*/

// modifica a duração
void Cd::setDuracao(int time) {
    duracao = time;
}

// retorna a duração
int Cd::getDuracao() {
    return duracao;
}

// modifica o volume
void Cd::setVolume(float vol) {
    volume = vol;
}

// retorna o volume
float Cd::getVolume() {
    return volume;
}

// modifica coletênea 
void Cd::setColetanea(bool colet) {
    coletanea = colet;
}

// retorna coletânea 
bool Cd::getColetanea() {
    return coletanea;
}