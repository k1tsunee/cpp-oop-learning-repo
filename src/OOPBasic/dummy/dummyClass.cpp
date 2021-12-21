#include"dummyClass.hpp"
#include<iostream>

Residencia::Residencia(){
    std::cout << "Casa criada.\n";
}

Residencia::~Residencia(){
    std::cout << "Casa destruida.\n";
}

Residencia::Residencia(float n_area, int n_quartos, int n_comodos, int n_banheiros, int vagasGaragem)
    :area(n_area), comodos(n_comodos), quartos(n_quartos), banheiros(n_banheiros), vagas_garagem(vagasGaragem){
    std::cout << "Casa criada com sucesso!\n" << area << " metros quadrados\n" << comodos << " comodos\n"
              << quartos << " quartos\n" << banheiros << " banheiros\n" << vagasGaragem << " vagas na garagem.\n";
}

float Residencia::getArea(){
    return area;
}

int Residencia::countQuartos(){
    return quartos;
}

int Residencia::countComodos(){
    return comodos;
}

int Residencia::countVagasGaragem(){
    return vagas_garagem;
}

bool Residencia::verificarAreaCompativel(){
    float area_minima = 9.0f * quartos + 9.0f * (comodos - quartos - banheiros) + 3.0f * banheiros + 8.0f * vagas_garagem;

    return area >= area_minima;
}
