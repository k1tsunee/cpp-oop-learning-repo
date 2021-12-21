#include "executeContactList.hpp"
#include<iostream>
#include<string>
#include<list>

using namespace std;

executeContactList::executeContactList(){
   cout << "Welcome to this contacs list!\n";
}

bool executeContactList::eventLoop(){
   cout << "Choose a command:\n"
              << "(A)dd\n(R)emove\n(L)ist\n(S)earch\n(E)xit\n";

    char op;

   cin >> op;
   cin.ignore();

    switch (op){
        case 'a':
        case 'A':
            addContactScript();
        return true;

        case 'r':
        case 'R':
            removeContactScript();
        return true;

        case 'l':
        case 'L':
            listContactsScript();
        return true;

        case 's':
        case 'S':
            searchContactScript();
        return true;

        case 'e':
        case 'E':
        return false;

        default:
           cout << "Unknown command!\n";
        break;
    }

    return false;
}

void executeContactList::addContactScript(){
   string name = readData("Please input a name: ");
   string phoneNumber = readData("Please input a phone number: ");

    if(!addContact(name, phoneNumber)){
       cout << "Contact added successfully!\n";
    } else{
       cout << "Contact updated successfully!\n";
    }
}

void executeContactList::removeContactScript(){

}

void executeContactList::listContactsScript(){

}

void executeContactList::searchContactScript(){
   string name = readData("Please input a name: ");

   list<contact> searchResult = searchContact(name);

    if(searchResult.empty()){
       cout << "No contact found.\n";
        return;
    }

   list<contact>::iterator it = searchResult.begin();

    for(int i = 1; it != searchResult.end(); i++, it++){
       cout << i << "- Name: " << it->getName() << " Phone Number:" << it->getPhone() <<endl;
    }
}

std::string executeContactList::readData(std::string question){
   string readStr;

   cout << question;
    getline(std::cin, readStr);

    return readStr;
}
