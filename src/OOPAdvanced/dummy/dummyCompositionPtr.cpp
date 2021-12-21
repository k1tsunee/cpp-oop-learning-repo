#include<iostream>

using namespace std;

class Component{
    public:
        Component(){
            cout << "Component created!\n";
        }
};

class Composer{
    Component *c1;
    Component *c2;

    public:
        Composer() : c1(new Component), c2(new Component){
            cout << "Composer created!\n";
        }

        ~Composer(){
            delete c1;
            delete c2;
        }
};

int main(){
    Composer c;

    return 0;
}
