#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <iterator>
#include "Midia.h"
#include "Cd.h"
#include "Dvd.h"

using namespace std;

// Cadastrar Cd's
void CadastrarCd(vector<Cd*>& _artists)
{
    cout << "Quantos Cds voce deseja cadastrar?" << endl;
    int qtd;
    cin >> qtd;
    
    for(int i = 0; i < qtd; i++)
    {   
    
        /*
            TEMOS QUE CRIAR OS OBJETOS Cd
            QUANDO ACESSAMOS A POSIÇÃO _artists[i] DO VETOR
            ESTAMOS ACESSANDO UM PONTEIRO QUE NÃO FOI INICIALIZADO
            E ISSO CAUSA UM ERRO DE SEGMENTAÇÃO
            PARA ISSO DEVEMOS CRIAR OS OBJETOS Cd ANTES DE CHAMAR A FUNÇÃO

            UMA ALTERNATIVA SERIA DEPOIS QUE PERGUNTAR QUANTOS Cd's SERÃO CADASTRADOS
            CRIAR ESSES OBJETOS DENTRO DO FOR
        */
        /*
            CRIAMOS UM OBJETO Cd E ADICIONAMOS NO VETOR
            FAZEMOS ISSO ANTES DE ACESSAR A POSIÇÃO _artists[i]
        */
        _artists.push_back(new Cd());

        /*
            USAR O cin.ignore() PARA LIMPAR O BUFFER DO TECLADO
            CASO CONTRARIO, O getline() NAO FUNCIONA
        */

        // limpando o buffer do teclado
        cin.ignore();

        int index = _artists.size() - 1;

        cout << "Nome do artista: " << endl;
        string _nome;
        getline(cin, _nome);
        _artists[index]->setArtista(_nome);

        cout << "Titulo do disco: " << endl;
        string title;
        getline(cin, title);
        _artists[index]->setTitulo(title);

        cout << "Quantas faixas esse disco possui?" << endl; 
        int qtd_faixas;
        cin >> qtd_faixas;
        vector<string> faixas;
        string leitura;

        for(int j = 0; j <= qtd_faixas; j++) {
            getline(cin, leitura);
            faixas.push_back(leitura);
        }
        _artists[index]->setFaixas(faixas);

        cout << "Ano de lancamento do disco: " << endl;
        int ano;
        cin >> ano;
        _artists[index]->setLancamento(ano);

        // limpando o buffer do teclado
        cin.ignore();

        cout << "Genero musical do disco: " << endl;
        string genre;
        getline(cin, genre);
        _artists[index]->setGenero(genre);

        cout << "Quantas palavras-chaves voce quer inserir?" << endl;
        int qtd_palavras;
        cin >> qtd_palavras;
        vector<string> palavras;
        string leitura_palavras;

        for(int k = 0; k <= qtd_palavras; k++) {
            getline(cin, leitura_palavras);
            palavras.push_back(leitura_palavras);
        }
        _artists[index]->setKeywords(palavras);

        cout << "Tempo de duracao do disco" << endl;
        int tempo;
        cin >> tempo;
        _artists[index]->setDuracao(tempo);

        cout << "Volume do disco" << endl;
        float volume;
        cin >> volume;
        _artists[index]->setVolume(volume);

        cout << "Eh uma coletanea?" << endl;
        cout << "1 - sim" << endl;
        cout << "0 - nao" << endl;
        bool colet;
        cin >> colet;
        _artists[index]->setColetanea(colet);

        /*
        cout << "\n-------TESTES-------" << endl;

        cout << "Artista: " << _artists[i]->getArtista() << endl;
        cout << "Titulo: " << _artists[i]->getTitulo() << endl;
        vector<string> faixa = _artists[i]->getFaixas();

        for(int j = 0; j < (int)faixa.size(); j++) {
            cout << "\tfaixa " << j << ": " << faixa[j] << endl;
        }
        cout << "Lancamento: " << _artists[i]->getLancamento() << endl;
        cout << "Genero: " << _artists[i]->getGenero() << endl;
        vector<string> palavra = _artists[i]->getKeywords();

        for(int k = 0; k < (int)palavra.size(); k++) {
            cout << "\tpalavra " << k << ": " << palavra[k] << endl;
        }
        cout << "Duracao: " << _artists[i]->getDuracao() << endl;
        cout << "Volume: " << _artists[i]->getVolume() << endl;
        cout << "Coletanea: " << _artists[i]->getColetanea() << endl;
        */
    }
        
}

void CadastrarDvd(vector<Dvd*>& _artists)
{
    cout << "Quantos Dvds deseja cadastrar?" << endl;
    int qtd_discos;
    cin >> qtd_discos;

    for(int i = 0; i < qtd_discos; i++) 
    {

        _artists.push_back(new Dvd());

        cin.ignore();

        int index = _artists.size() - 1;

        cout << "Nome do artista: " << endl;
        string name;
        getline(cin, name);
        _artists[index]->setArtista(name);

        cout << "Titulo do disco: " << endl;
        string title;
        getline(cin, title);
        _artists[index]->setTitulo(title);

        cout << "Quantas faixas esse disco possui?" << endl;
        int qtd_faixas;
        cin >> qtd_faixas;
        vector<string> faixas;
        string leitura_faixas;

        for(int j = 0; j <= qtd_faixas; j++) {
            getline(cin, leitura_faixas);
            faixas.push_back(leitura_faixas);
        }
        _artists[index]->setFaixas(faixas);

        cout << "Ano de lancamento do disco: " << endl;
        int ano_lancamento;
        cin >> ano_lancamento;
        _artists[index]->setLancamento(ano_lancamento);

        cin.ignore();

        cout << "Genero musical do disco: " << endl;
        string genre;
        getline(cin, genre);
        _artists[index]->setGenero(genre);

        cout << "Quantas palavras-chaves você quer inserir?" << endl;
        int qtd_palavras;
        cin >> qtd_palavras;
        vector<string> palavras;
        string leitura_palavras;

        for(int k = 0; k <= qtd_palavras; k++) {
            getline(cin, leitura_palavras);
            palavras.push_back(leitura_palavras);
        }
        _artists[index]->setKeywords(palavras);

        cout << "Insira os formatos de audio das faixas do disco: " << endl;
        string formato;
        vector<string> format_audio;

        for(int n = 0; n < qtd_faixas; n++) {
            getline(cin, formato);
            format_audio.push_back(formato);
        }
        _artists[index]->setFormatoAudio(format_audio);

        cout << "Insira os formatos de tela das faixas do disco: " << endl;
        string formato_tela;
        vector<string> format_tela;

        for(int l = 0; l < qtd_faixas; l++) {
            getline(cin, formato_tela);
            format_tela.push_back(formato_tela);
        }
        _artists[index]->setFormatoTela(format_tela);

        cout << "Insira legendas: " << endl;
        string legendas;
        vector<string> leg;

        for(int m = 0; m < qtd_faixas; m++) {
            getline(cin, legendas);
            leg.push_back(legendas);
        }
        _artists[index]->setLegendas(leg);
    }
    
}

void ExcluirCd(string titulo, vector<Cd*> &_artists) 
{
    auto it = _artists.begin();
    for(int i = 0; i < (int)_artists.size(); i++)
    {
        if(_artists[i]->getTitulo() == titulo)
        {
            _artists.erase(it + i);
            cout << "Cd deletado" << endl;
        }
    }
}


void ExcluirDvd(string titulo, vector<Dvd*> &_artists) 
{
    auto it = _artists.begin();
    for(int i = 0; i < (int)_artists.size(); i++)
    {
        if(_artists[i]->getTitulo() == titulo)
        {
            _artists.erase(it + i);
            cout << "Dvd deletado" << endl;
        }
    }
}


void ExibirCds(string name, vector<Cd*> &artistas)
{
    vector<Cd*> aux;
    for(int i = 0; i < (int)artistas.size(); i++)
    {
        if(artistas[i]->getArtista() == name)
        {
            aux.push_back(artistas[i]);
        }
    }

    
    for(int i = 0; i < (int)aux.size() - 1; i++) {
        for(int j = 0; j < (int)aux.size() - 1; j++) {
            if(aux[j]->getLancamento() > aux[j+1]->getLancamento())
            {
                Cd *ptr = aux[j];
                aux[j] = aux[j+1];
                aux[j+1] = ptr;
            }
        }
    }

    cout << "---- Cds do(a) " << name << " ----" << endl;
    for(int i = 0; i < (int)aux.size(); i++)
    {
        cout << aux[i]->getTitulo() << endl;
    }
}

void ExibirDvds(string name, vector<Dvd*> &artistas)
{
    vector<Dvd*> aux;
    for(int i = 0; i < (int)artistas.size(); i++)
    {
        if(artistas[i]->getArtista() == name)
        {
            aux.push_back(artistas[i]);
        }
    }

    
    for(int i = 0; i < (int)aux.size() - 1; i++) {
        for(int j = 0; j < (int)aux.size() - 1; j++) {
            if(aux[j]->getLancamento() > aux[j+1]->getLancamento())
            {
                Dvd *ptr = aux[j];
                aux[j] = aux[j+1];
                aux[j+1] = ptr;
            }
        }
    }

    cout << "---- Dvds do(a) " << name << " ----" << endl;
    for(int i = 0; i < (int)aux.size(); i++)
    {
        cout << aux[i]->getTitulo() << endl;
    }
}

void ExibirTodasMidias(int ano, vector<Dvd*> &dvd, vector<Cd*> &cd)
{

    vector<Midia*> auxiliar;

    for(int i = 0; i < (int)cd.size(); i++)
    {
        if(cd[i]->getLancamento() == ano)
        {
            auxiliar.push_back(cd[i]);
        }
    }

    for(int i = 0; i < (int)dvd.size(); i++)
    {
        if(dvd[i]->getLancamento() == ano)
        {
            auxiliar.push_back(dvd[i]);
        }
    }

    for(int i = 0; i < (int)auxiliar.size() - 1; i++) {
        for(int j = 0; j < (int)auxiliar.size() - 1; j++) {
            if(auxiliar[j]->getTitulo() > auxiliar[j+1]->getTitulo())
            {
                Midia *ptr = auxiliar[j];
                auxiliar[j] = auxiliar[j+1];
                auxiliar[j+1] = ptr;
            }
        }
    }

    cout << "---- Midias Lancadas no Ano de " << ano << " ----" << endl;
    for(int i = 0; i < (int)auxiliar.size(); i++)
    {
        cout << auxiliar[i]->getTitulo() << " do(a) " << auxiliar[i]->getArtista() << endl;
    }
    
}

void ExibirFaixas(string titulo_cd, string titulo_dvd, string artista, vector<Cd*> &cds, vector<Dvd*> &dvds)
{
    vector<string> faixas_cd;
    //auto it_cd = faixas_cd.begin();
    for(int i = 0; i < (int)cds.size(); i++)
    {
        if(cds[i]->getTitulo() == titulo_cd && cds[i]->getArtista() == artista)
        {
            faixas_cd = cds[i]->getFaixas();
        }
    }

    vector<string> faixas_dvd;
    //auto it_dvd = faixas_dvd.begin();
    for(int i = 0; i < (int)dvds.size(); i++)
    {
        if(dvds[i]->getTitulo() == titulo_dvd && dvds[i]->getArtista() == artista)
        {
            faixas_dvd = dvds[i]->getFaixas();
        }
    }

    cout << "Faixas em Comum: " << endl;
    for(int i = 0; i < (int)faixas_cd.size(); i++) {
        for(int j = 0; j < (int)faixas_dvd.size(); j++) {
            if(faixas_cd[i] == faixas_dvd[j])
            {
                cout  << faixas_cd[i] << endl;
                faixas_cd[i] = "***Excluído Faixa Cd***";
                faixas_dvd[j] = "***Excluído Faixa Dvd***";
            }
        }
    }

    cout << "Faixas Exclusivas do Cd:" << endl;
    for(int i = 0; i < (int)faixas_cd.size(); i++)
    {
        if(faixas_cd[i] != "***Excluído Faixa Cd***")
        {
            cout << faixas_cd[i] << endl;
        }
    }

    cout << "Faixas Exclusivas do Dvd:" << endl;
    for(int i = 0; i < (int)faixas_dvd.size(); i++)
    {
        if(faixas_dvd[i] != "***Excluído Faixa Dvd***")
        {
            cout << faixas_dvd[i] << endl;
        }
    }
}

void ExibirMidiasAutoria(string nome, vector<Cd*> &cds, vector<Dvd*> &dvds)
{
    // Exibir mídias do artista (primeiro exibir os cds)
    vector<Cd*> aux_cds;
    for(int i = 0; i < (int)cds.size(); i++)
    {
        if(cds[i]->getArtista() == nome)
        {
            aux_cds.push_back(cds[i]);
        }
    }

    
    for(int i = 0; i < (int)aux_cds.size() - 1; i++) {
        for(int j = 0; j < (int)aux_cds.size() - 1; j++) {
            if(aux_cds[j]->getLancamento() > aux_cds[j+1]->getLancamento())
            {
                Cd *ptr = aux_cds[j];
                aux_cds[j] = aux_cds[j+1];
                aux_cds[j+1] = ptr;
            }
        }
    }

    cout << "---- Cds do(a) " << nome << " ----" << endl;
    for(int i = 0; i < (int)aux_cds.size(); i++)
    {
        cout << aux_cds[i]->getTitulo() << " - ano de lancamento: " << aux_cds[i]->getLancamento() << endl;
    }

    // Exibir os dvds agora
    vector<Dvd*> aux_dvd;
    for(int i = 0; i < (int)dvds.size(); i++)
    {
        if(dvds[i]->getArtista() == nome)
        {
            aux_dvd.push_back(dvds[i]);
        }
    }

    
    for(int i = 0; i < (int)aux_dvd.size() - 1; i++) {
        for(int j = 0; j < (int)aux_dvd.size() - 1; j++) {
            if(aux_dvd[j]->getLancamento() > aux_dvd[j+1]->getLancamento())
            {
                Dvd *ptr = aux_dvd[j];
                aux_dvd[j] = aux_dvd[j+1];
                aux_dvd[j+1] = ptr;
            }
        }
    }

    cout << "---- Dvds do(a) " << nome << " ----" << endl;
    for(int i = 0; i < (int)aux_dvd.size(); i++)
    {
        cout << aux_dvd[i]->getTitulo() << " - ano de lancamento: " << aux_cds[i]->getLancamento() << endl;
    }

}

void ExibirMidiasGenero(string genero, vector<Cd*> &cds, vector<Dvd*> &dvds)
{
    // Exibir mídias do artista (primeiro exibir os cds)
    vector<Cd*> aux_cds;
    for(int i = 0; i < (int)cds.size(); i++)
    {
        if(cds[i]->getGenero() == genero)
        {
            aux_cds.push_back(cds[i]);
        }
    }

    
    for(int i = 0; i < (int)aux_cds.size() - 1; i++) {
        for(int j = 0; j < (int)aux_cds.size() - 1; j++) {
            if(aux_cds[j]->getTitulo() > aux_cds[j+1]->getTitulo())
            {
                Cd *ptr = aux_cds[j];
                aux_cds[j] = aux_cds[j+1];
                aux_cds[j+1] = ptr;
            }
        }
    }

    cout << endl;

    cout << "---- Cds do genero " << genero << " ----" << endl;
    for(int i = 0; i < (int)aux_cds.size(); i++)
    {
        cout << aux_cds[i]->getTitulo() << " - ano de lancamento: " << aux_cds[i]->getLancamento() << endl;
    }

    // Exibir os dvds agora
    vector<Dvd*> aux_dvd;
    for(int i = 0; i < (int)dvds.size(); i++)
    {
        if(dvds[i]->getGenero() == genero)
        {
            aux_dvd.push_back(dvds[i]);
        }
    }

    
    for(int i = 0; i < (int)aux_dvd.size() - 1; i++) {
        for(int j = 0; j < (int)aux_dvd.size() - 1; j++) {
            if(aux_dvd[j]->getTitulo() > aux_dvd[j+1]->getTitulo())
            {
                Dvd *ptr = aux_dvd[j];
                aux_dvd[j] = aux_dvd[j+1];
                aux_dvd[j+1] = ptr;
            }
        }
    }

    cout << "---- Dvds do genero " << genero << " ----" << endl;
    for(int i = 0; i < (int)aux_dvd.size(); i++)
    {
        cout << aux_dvd[i]->getTitulo() << " - ano de lancamento: " << aux_dvd[i]->getLancamento() << endl;
    }
}

void ExibirKeyWords(vector<Cd*> &cds, vector<Dvd*> &dvds)
{
    vector<string> auxiliar_cds;
    vector<string> auxiliar_dvds;
    vector<string> key_words;

    // Colocando todos os keywords do vector de cds em outro vector auxiliar
    for(int i = 0; i < (int)cds.size(); i++) {

        auxiliar_cds = cds[i]->getKeywords();

        for(int j = 0; j < (int)auxiliar_cds.size(); j++) {
            key_words.push_back(auxiliar_cds[j]);
        }
    }

    // Colocando todos os keywords do vector de dvds em outro vector auxiliar
    for(int i = 0; i < (int)dvds.size(); i++) {

        auxiliar_dvds = dvds[i]->getKeywords();

        for(int j = 0; j < (int)auxiliar_dvds.size(); j++) {
            key_words.push_back(auxiliar_dvds[j]);
        }
    }

    bool flag;
    for(int i = 0; i < (int)key_words.size(); i++)
    {
        flag = false;
        for(int j = 0; j < i; j++)
        {
            if(key_words[i] == key_words[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            cout << key_words[i] << endl;
        }
    }

}

void MidiasCadastradas(vector<Cd*> &cds, vector<Dvd*> &dvds)
{
    cout << "\n========================== Cds Cadastrados ======================================\n";
    for(int i = 0; i < (int)cds.size(); i++)
    {
        cout << "Artista: " << cds[i]->getArtista() << endl;
        cout << "Cd: " << cds[i]->getTitulo() << " lancado em " << cds[i]->getLancamento() << endl;
        cout << endl;
    }
    cout << "\n=================================================================================\n";

    cout << endl;

    cout << "\n========================== Dvds Cadastrados =====================================\n";
    for(int i = 0; i < (int)dvds.size(); i++)
    {
        cout << "Artista: " << dvds[i]->getArtista() << endl;
        cout << "Dvd: " << dvds[i]->getTitulo() << " lancado em " << dvds[i]->getLancamento() << endl;
        cout << endl;
    }
    cout << "\n=================================================================================\n";
}

void EditarCd(string artista, string _title, vector<Cd*> &cds)
{
    for(int i = 0; i < (int)cds.size(); i++)
    {
        if(cds[i]->getArtista() == artista && cds[i]->getTitulo() == _title)
        {
            cout << endl;

            cout << "Editando Disco" << endl;

            cout << endl;

            cout << "Nome do artista: " << endl;
            string _nome;
            getline(cin, _nome);
            cds[i]->setArtista(_nome);

            cout << "Titulo do disco: " << endl;
            string title;
            getline(cin, title);
            cds[i]->setTitulo(title);

            cout << "Quantas faixas esse disco possui?" << endl; 
            int qtd_faixas;
            cin >> qtd_faixas;
            vector<string> faixas;
            string leitura;

            for(int j = 0; j <= qtd_faixas; j++) {
                getline(cin, leitura);
                faixas.push_back(leitura);
            }
            cds[i]->setFaixas(faixas);

            cout << "Ano de lancamento do disco: " << endl;
            int ano;
            cin >> ano;
            cds[i]->setLancamento(ano);

            // limpando o buffer do teclado
            cin.ignore();

            cout << "Genero musical do disco: " << endl;
            string genre;
            getline(cin, genre);
            cds[i]->setGenero(genre);

            cout << "Quantas palavras-chaves voce quer inserir?" << endl;
            int qtd_palavras;
            cin >> qtd_palavras;
            vector<string> palavras;
            string leitura_palavras;

            for(int k = 0; k <= qtd_palavras; k++) {
                getline(cin, leitura_palavras);
                palavras.push_back(leitura_palavras);
            }
            cds[i]->setKeywords(palavras);

            cout << "Tempo de duracao do disco" << endl;
            int tempo;
            cin >> tempo;
            cds[i]->setDuracao(tempo);

            cout << "Volume do disco" << endl;
            float volume;
            cin >> volume;
            cds[i]->setVolume(volume);

            cout << "Eh uma coletanea?" << endl;
            cout << "1 - sim" << endl;
            cout << "0 - nao" << endl;
            bool colet;
            cin >> colet;
            cds[i]->setColetanea(colet);
        }
        else {
            cout << "** Cd Nao Encontrado **" << endl;
        }
    }
}

void EditarDvd(string artista, string _title, vector<Dvd*> &dvds)
{
    for(int i = 0; i < (int)dvds.size(); i++)
    {
        if(dvds[i]->getArtista() == artista && dvds[i]->getTitulo() == _title)
        {
            cout << "Nome do artista: " << endl;
            string name;
            getline(cin, name);
            dvds[i]->setArtista(name);

            cout << "Titulo do disco: " << endl;
            string title;
            getline(cin, title);
            dvds[i]->setTitulo(title);

            cout << "Quantas faixas esse disco possui?" << endl;
            int qtd_faixas;
            cin >> qtd_faixas;
            vector<string> faixas;
            string leitura_faixas;

            for(int j = 0; j <= qtd_faixas; j++) {
                getline(cin, leitura_faixas);
                faixas.push_back(leitura_faixas);
            }
            dvds[i]->setFaixas(faixas);

            cout << "Ano de lancamento do disco: " << endl;
            int ano_lancamento;
            cin >> ano_lancamento;
            dvds[i]->setLancamento(ano_lancamento);

            cin.ignore();

            cout << "Genero musical do disco: " << endl;
            string genre;
            getline(cin, genre);
            dvds[i]->setGenero(genre);

            cout << "Quantas palavras-chaves você quer inserir?" << endl;
            int qtd_palavras;
            cin >> qtd_palavras;
            vector<string> palavras;
            string leitura_palavras;

            for(int k = 0; k <= qtd_palavras; k++) {
                getline(cin, leitura_palavras);
                palavras.push_back(leitura_palavras);
            }
            dvds[i]->setKeywords(palavras);

            cout << "Insira os formatos de audio das faixas do disco: " << endl;
            string formato;
            vector<string> format_audio;

            for(int n = 0; n < qtd_faixas; n++) {
                getline(cin, formato);
                format_audio.push_back(formato);
            }
            dvds[i]->setFormatoAudio(format_audio);

            cout << "Insira os formatos de tela das faixas do disco: " << endl;
            string formato_tela;
            vector<string> format_tela;

            for(int l = 0; l < qtd_faixas; l++) {
                getline(cin, formato_tela);
                format_tela.push_back(formato_tela);
            }
            dvds[i]->setFormatoTela(format_tela);

            cout << "Insira legendas: " << endl;
            string legendas;
            vector<string> leg;

            for(int m = 0; m < qtd_faixas; m++) {
                getline(cin, legendas);
                leg.push_back(legendas);
            }
            dvds[i]->setLegendas(leg);
        }
    }
}