#include<iostream>

using namespace std;

class AbstractClass{
    int atribute;

    public:
        virtual void method() = 0;
};

class Derivate : AbstractClass{
    public:
        void method(){
            cout << "test\n";
        }
};

int main(){
    Derivate obj;
    obj.method();
    //AbstractClass absObj;     - Inaccessible
    //VirtualAbstractClass vAbsObject;    -Object of abstract class is not allowed
    return 0;
}
