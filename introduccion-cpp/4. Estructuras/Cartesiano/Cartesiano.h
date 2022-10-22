#ifndef CARTESIANO_H
#define CARTESIANO_H

struct numcar{
    float x, y;
    char ch;
};


class Cartesiano
{
    public:
        Cartesiano();
        void registrar(numcar pares);
        int cuadrante3();
        void situadosY();
        void lista();
    private:
        int maxi;
        numcar Cartano[30];
};

#endif // CARTESIANO_H
