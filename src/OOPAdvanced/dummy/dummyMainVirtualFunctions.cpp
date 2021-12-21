#include<iostream>

using namespace std;

class baseClass{
    public:
        virtual void message(){
            cout << "base class message\n";
        }
};

class sonClass : public baseClass{
    public:
        void message(){
            cout << "son class message\n";
        }
};

int main(){
    sonClass sonObject;
    sonObject.message();

    baseClass *pointerObj = new sonClass;
    pointerObj->message();

    return 0;
}
