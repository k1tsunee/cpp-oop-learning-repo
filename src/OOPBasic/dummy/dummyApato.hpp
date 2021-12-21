#ifndef DUMMYAPATO_HPP_
#define DUMMYAPATO_HPP_
#include "dummyClass.hpp"
#include<map>

class Apartamento;

class Condominio{  
    std::map<int, std::map<int, Apartamento*> > apartamentos;

    public:
    void adicionarApartamento(Apartamento *ap);
    void removerApartamento(Apartamento *ap);
};

class Apartamento : public Residencia{
    int andar;
    int numero;
    Condominio &condominio;
    bool sacada;

    public:
        Apartamento(float n_area, int n_quartos, int n_comodos, int n_banheiros, int vagasGaragem, 
                    int andarAp, int numeroAp, Condominio &condominio, bool tem_sacada);
        ~Apartamento();
};

#endif