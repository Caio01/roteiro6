#include "Televisao.h"
#include <iostream>

using namespace std;

int Televisao::getCanal()
{
    return canal;
}

int Televisao::getVolume()
{
    return volume;
}

void Televisao::escolherCanal()
{
int op;
cout << "Escolha a opcao desejada: "<<endl<< "(1) para avancar o canal " <<endl<< "(2) para diminuir o canal "<<endl<< "(3) para escolher o canal " << endl;

cin >> op;

    switch (op){
    case 1:
        canal++;
        cout << "Canal: " << canal << endl;
        break;
    case 2:
        canal--;
        cout << "Canal: " << canal << endl;
        break;
    case 3:
        int x;
        cout << "Informe o canal desejado: " << endl;
        cin >> x;
        canal = x;
        cout << "Canal: " << canal << endl;
        break;
    }
}

void Televisao::aumentarVolume()
{
    volume++;
    if (volume > 100)
    {
        volume=100;

    }
cout << "Volume: " << volume << endl;
}

void Televisao::diminuirVolume()
{
    volume--;
    if (volume < 0)
    {
        volume=0;
    }
cout << "Volume: " << volume << endl;
}
