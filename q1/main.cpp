#include <iostream>
#include "Relogio.h"

using namespace std;


int main(){
    int h, m, s;
    cout << "digite respectivamente a hora, o minuto e o segundo : "<<endl;
    cin>>h >> m >> s;

Relogio teste;
teste.setHorario(h,m,s);
teste.avancarHorario();

}
