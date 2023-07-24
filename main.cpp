// Autor: Breno Camarô Arraes
// 17/07/2023
// Programa que lê o tamanho do lado de um quadrado e, então, imprime um quadrado vazado com asteriscos e espaços
// em branco. O programa deve trabalhar com quadrados de todos os tamanhos entre 1 e 20.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int tamanhoDoLado; // Tamanho do lado do quadrado
    int lado1 = 0, lado2 = 0, lado3 = 0, lado4 = 0; // Variáveis que serão subtraídas nos laços

    system( "cls" ); // Função que limpa o prompt, isto é, local onde a saída do programa será mostrada

    cout << "\n*---------------------------*" << endl;
    cout << "      JOGO DO QUADRADO"        << endl;
    cout << "*---------------------------*" << endl;

    cout << "\nInforme um valor inteiro entre 1 e 20: ";
    cin >> tamanhoDoLado;

    lado1 = tamanhoDoLado;
    lado2 = tamanhoDoLado;
    lado3 = tamanhoDoLado;
    lado4 = tamanhoDoLado;

    cout << "\n"; // Quebra linha
    
    if( tamanhoDoLado > 2 )
    {
        while( lado1 > 2 )
        {
            while( lado2 > 0 )
            {
                cout << "*";
                lado2--;
            }
            cout << "\n*";
            
            while( lado4 > 2 )
            {
                cout << " ";
                lado4--;
            }
            cout << "*";

            lado4 = tamanhoDoLado;
            lado1--;
        } 

        cout << "\n"; // Quebra de linha

        while( lado3 > 0 )
        {
        cout << "*";
        lado3--;
        }   
    }
    else
    {
        while( lado1 > 1 )
        {
            while( lado2 > 0 )
            {
                cout << "* ";
                lado2--;
            }
            cout << "\n*";

            while( lado4 > 1 )
            {
                cout << " ";
                lado4--;
            }
            cout << "*";

            lado4 = tamanhoDoLado;
            lado1--;
        }
    }
    return 0;
}