#include "executeContactList.hpp"
#include<iostream>
#include<string>
#include<list>

using namespace std;

void consoleClearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

executeContactList::executeContactList(){
    consoleClearScreen();
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
            consoleClearScreen();
            addContactScript();
        return true;

        case 'r':
        case 'R':
            consoleClearScreen();
            removeContactScript();
        return true;

        case 'l':
        case 'L':
            consoleClearScreen();
            listContactsScript();
        return true;

        case 's':
        case 'S':
            consoleClearScreen();
            searchContactScript();
        return true;

        case 'e':
        case 'E':
            consoleClearScreen();
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

    consoleClearScreen();

    if(addContact(name, phoneNumber)){
       cout << "Contact added successfully!\n";
    } else{
       cout << "Contact updated successfully!\n";
    }
}

void executeContactList::removeContactScript(){
    string nameToRemove = readData("Please, provide a name to exclusion: ");

    consoleClearScreen();

    if(removeContact(nameToRemove)){
        cout << "Contact removed successfully!\n";
    } else{
        cout << "Contact not found!\n";
    }
}

void executeContactList::listContactsScript(){
    consoleClearScreen();
    listContacts();
}

void executeContactList::searchContactScript(){
    string name = readData("Please input a name: ");

    list<contact> searchResult = searchContact(name);

    consoleClearScreen();

    if(searchResult.empty()){
       cout << "No contact found.\n";
        return;
    }

    list<contact>::iterator it = searchResult.begin();

    for(int i = 1; it != searchResult.end(); i++, it++){
       cout << i << "- Name: " << it->getName() << "\nPhone Number: " << it->getPhone() << "\n\n";
    }
}

std::string executeContactList::readData(std::string question){
    string readStr;

    cout << question;
    getline(std::cin, readStr);

    return readStr;
}
