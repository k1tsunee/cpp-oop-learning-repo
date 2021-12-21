#include<iostream>

using namespace std;

class Component{
    public:
        Component(){
            cout << "Component created!\n";
        }
};

class Aggregator{
    Component *c1;
    Component &c2;

    public:
        Aggregator(Component *_c1, Component &_c2):c1(_c1), c2(_c2){
            cout << "Aggregator created!\n";
        }
};

int main(){
    Component a;
    Component b;
    Aggregator obj(&a, b);

    return 0;
}
