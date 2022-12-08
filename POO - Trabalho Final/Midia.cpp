#include "Midia.h"
#include <iostream>

using namespace std;

// retorna o nome do artista
string Midia::getArtista() {    
    return artista;
}

// modifica artista

void Midia::setArtista(string artist) {       
    artista = artist;
}

// retorna titulo
string Midia::getTitulo() {      
    return titulo;
}


// modifica titulo
void Midia::setTitulo(string title) {         
    titulo = title;
}

// retorna faixas
vector<string> Midia::getFaixas() { 
    return faixas;
}

// modifica faixas
void Midia::setFaixas(vector<string> faixa) { 
    faixas = faixa;
}

// retorna lançamento 
int Midia::getLancamento() {     
    return lancamento;
}

// modifica lançamento
void Midia::setLancamento(int launch) {   
    lancamento = launch;
}

// retorna gênero
string Midia::getGenero() {      
    return genero;
}

// modifica gênero
void Midia::setGenero(string genre) {        
    genero = genre;
}

// retorna palavras-chave
vector<string> Midia::getKeywords() { 
    return keywords;
}

// modifica palavras-chave
void Midia::setKeywords(vector<string> palavra_chave) { 
    keywords = palavra_chave;
}
