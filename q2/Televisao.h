#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{

private:
    int canal = 7;
    int volume = 10;

public:
    void escolherCanal();
    void aumentarVolume();
    void diminuirVolume();
    int getCanal();
    int getVolume();

};

#endif // TELEVISAO_H
