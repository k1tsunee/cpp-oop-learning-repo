#include<iostream>
#include"dummyApato.hpp"

using namespace std;

int main(){
    Condominio cond;

    Apartamento ap1(50.0f, 2, 4, 1, 1, 1, 101, cond, 1);
    //Apartamento ap2(80.0f, 2, 4, 2, 2, 1, 102, cond, 0);
    //Apartamento ap3(100.0f, 3, 6, 2, 4, 1, 103, cond, 1);

    cout << "Metragem = " << ap1.getArea() << endl;

    return 0;
}
