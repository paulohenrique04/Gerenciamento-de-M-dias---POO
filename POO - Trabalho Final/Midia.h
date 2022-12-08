#pragma once
#ifndef MIDIA_H
#define MIDIA_H
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Midia{
private:
    string artista;
    string titulo;
    vector<string> faixas;
    int lancamento;
    string genero;
    vector<string> keywords;
public:
    string getArtista();
    void setArtista(string);
    virtual string getTitulo();
    void setTitulo(string);
    vector<string> getFaixas();       
    void setFaixas(vector<string>);   
    int getLancamento(); 
    void setLancamento(int);
    string getGenero();
    void setGenero(string);
    vector<string> getKeywords();     
    void setKeywords(vector<string>); 

};

#endif