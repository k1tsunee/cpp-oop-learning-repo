#include<iostream>

using namespace std;

class Example{
    public:
        const float pi = 3.14159;

        const Example &getRefConst(){
            return Example();
        }

        void receiveParamConst(const Example &obj){
            testConst();

        }
        void testConst() const{
            cout << "Test\n";
        }
};

int main(){
    Example obj;

    obj.receiveParamConst(obj);
    obj.getRefConst().testConst();

    return 0;
}
