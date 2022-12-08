#include <iostream>
#include <vector>
#include <string>
#include "Midia.h"
#include "Dvd.h"
#include "Cd.h"
#include "funcoes.h"
#include "menu.h"

using namespace std;

int main() 
{
    vector<Cd*> cds;
    vector<Dvd*> dvds;

    string excluir_cd;
    string excluir_dvd;

    string artista;
    int ano;
    string titulocd;
    string titulodvd;
    string genero;



    int opcao;

    do
    {
        Menu();

        cin >> opcao;

        switch(opcao)
        {
            case 1: 
                CadastrarCd(cds);
                break;

            case 2:
                CadastrarDvd(dvds);
                break;

            case 3:
                MidiasCadastradas(cds, dvds);
                break;

            case 4: 
                cout << "Digite o Titulo do Cd que Voce Deseja Excluir:" << endl;
                cin.ignore();
                getline(cin, excluir_cd);
                ExcluirCd(excluir_cd, cds);
                break;

            case 5:
                cout << "Digite o Titulo do Dvd que Voce Deseja Excluir:" << endl; 
                cin.ignore();
                getline(cin, excluir_dvd);
                ExcluirDvd(excluir_dvd, dvds);
                break;

            case 6:
                cout << "Digite o Titulo do Cd Para Editar:" << endl;
                cin.ignore();
                getline(cin, titulocd);

                cout << "Digite o Nome do Artista Para Editar:" << endl;
                getline(cin, artista);

                EditarCd(artista, titulocd, cds);
                break;
                

            case 7:
                cout << "Digite o Titulo do Dvd Para Editar:" << endl;
                cin.ignore();
                getline(cin, titulodvd);

                cout << "Digite o Nome do Artista Para Editar:" << endl;
                getline(cin, artista);

                EditarDvd(artista, titulodvd, dvds);
                break;

            case 8:
                cout << "Mostrar Cds" << endl;
                cout << "Digite o Nome do Artista:" << endl;
                cin.ignore();
                getline(cin, artista);
                ExibirCds(artista, cds);
                break;

            case 9:
                cout << "Mostrar Dvds" << endl;
                cout << "Digite o Nome do Artista:" << endl;
                cin.ignore();
                getline(cin, artista);
                ExibirDvds(artista, dvds);
                break;

            case 10:
                cout << "Exibir Midias:" << endl;
                cout << "Digite o Nome do Artista:" << endl;
                cin.ignore();
                getline(cin, artista);
                ExibirMidiasAutoria(artista, cds, dvds);
                break;

            case 11:
                cout << "Exibir Midias do Ano:" << endl;
                cout << "Digite o Ano:" << endl;
                cin >> ano;
                ExibirTodasMidias(ano, dvds, cds);
                break;

            case 12:
                cout << "Faixas em Comum Entre um Cd e um Dvd:" << endl;
                cout << "Digite o Nome do Artista:" << endl;
                cin.ignore();
                getline(cin, artista);
                
                cout << "Digite o Titulo do Cd" << endl;
                getline(cin, titulocd);

                cout << "Digite o Titulo do Dvd:" << endl;
                getline(cin, titulodvd);
                
                ExibirFaixas(titulocd, titulodvd, artista, cds, dvds);
                break;

            case 13:
                cout << "Exibir Midias de um Determinado Genero" << endl;
                cout << "Digite o Genero das Midias:" << endl;
                cin.ignore();
                getline(cin, genero);
                ExibirMidiasGenero(genero, cds, dvds);
                break;

            case 14:
                cout << "Exibir Keywords" << endl;
                ExibirKeyWords(cds, dvds);
                break;

            case 15:
                break;
        }
    } while (opcao != 15);
    
     
    
    return 0;
}