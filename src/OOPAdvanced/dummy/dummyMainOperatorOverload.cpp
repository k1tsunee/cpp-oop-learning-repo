#include<iostream>

using namespace std;

class Reta{
    float a;
    float b;

    public:
        Reta(float aa, float bb):a(aa), b(bb){}
    
    bool operator==(const Reta &r){
        return a == r.a && b == r.b;
    }

    float getA(){
        return a;
    }

    float getB(){
        return b;
    }
};

ostream& operator<<(ostream &out, Reta &r){
    out << "y = x*" << r.getA() << " + " << r.getB();

    return out;
}

int main(){
    Reta r1(10, 20);
    Reta r2(10, 20);

    if(r1 == r2){
        cout << "retas iguais!\n";
        cout << "reta r1: " << r1 << endl;
    }

    return 0;
}
