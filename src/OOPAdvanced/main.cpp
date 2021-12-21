#include<iostream>
#include"./class/test.hpp"

using namespace std;

int main(){
    test testObj;
    cout << "Testing...\n";

    testObj.circleTest();
    testObj.ellipseTest();
    testObj.rectTest();
    testObj.squareTest();

    return 0;
}
