#include<iostream>

using namespace std;

class Component{
    public:
        Component(){
            cout << "Component created!\n";
        }
};

class Composer{
    Component c1;
    Component c2;

    public:
        Composer(){
            cout << "Composer created!\n";
        }
};

int main(){
    Composer c;

    return 0;
}
