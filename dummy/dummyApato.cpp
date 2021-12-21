#include"dummyApato.hpp"
#include<iostream>

Apartamento::Apartamento(float n_area, int n_quartos, int n_comodos, int n_banheiros, 
                        int vagasGaragem, int andarAp, int numeroAp, Condominio &cond, bool tem_sacada) : Residencia(n_area, 
                        n_quartos, n_comodos, n_banheiros, vagasGaragem), andar(andarAp), numero(numeroAp), condominio(cond), 
                        sacada(tem_sacada){        
    condominio.adicionarApartamento(this);
    if(sacada){
        area += 3.0f;
    }
}

Apartamento::~Apartamento(){
    condominio.removerApartamento(this);
}

void Condominio::adicionarApartamento(Apartamento *ap){
    std::cout << "Apartamento adicionado!\n";
}

void Condominio::removerApartamento(Apartamento *ap){
    std::cout << "Apartamento removido!\n";
}