#include<iostream>
#include"./class/executeContactList.hpp"

using namespace std;

int main(){
    executeContactList contactListExecutor;

    while(contactListExecutor.eventLoop());

    return 0;
}
