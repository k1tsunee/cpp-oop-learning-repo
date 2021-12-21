#include<iostream>

using namespace std;

class Interface1{
    public:
        virtual void method1() = 0;
};

class Interface2{
    public:
        virtual void method2() = 0;
};

class Derivate : public Interface1, public Interface2{
    public:
        void method1(){
            cout << "method1\n";
        }

        void method2(){
            cout << "method2\n";
        }
};

int main(){
    Derivate obj;
    Interface1 *ptr1 = &obj;
    Interface2 *ptr2 = &obj;

    ptr1->method1();
    ptr2->method2();

    return 0;
}
