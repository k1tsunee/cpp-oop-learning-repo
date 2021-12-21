#include<iostream>

using namespace std;

class baseClass{
    public:
        void message(){
            cout << "base class message\n";
        }
};

class sonClass : public baseClass{
    public:
        void message(){
            cout << "son class message\n";
        }
};

class myClass{
    public:
        void method(int a){
            cout << "first version\n";
        }

        void method(int a, int b){
            cout << "second version\n";
        }
};

class Singleton{
    static Singleton *_instance;
    Singleton(){}

    public:
        static Singleton *instance(){
            if(_instance == NULL){
                _instance = new Singleton();

                return _instance;
            }
        }

    void teste(){
        cout << "teste\n";
    }
};

Singleton *Singleton::_instance = NULL;

int main(){
    Singleton *objectSin = Singleton::instance();
    myClass object;
    sonClass sonObject;

    sonObject.message();

    baseClass *pointer = new sonClass;

    pointer->message();

    object.method(10);
    object.method(10, 10);

    objectSin->teste();

    return 0;
}
