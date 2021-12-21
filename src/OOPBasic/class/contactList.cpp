#include"contactList.hpp"
#include<iostream>
#include<string>
#include<map>

using namespace std;

contactList::contactList(){
}

contact::contact(std::string n, std::string pn): name(n), phoneNumber(pn){
}

bool contactList::addContact(string name, string phoneNumber){
    if(contacts.find(name) != contacts.end()){
        return false;
    }

    contacts[name] = phoneNumber;
    return true;
}

list<contact> contactList::searchContact(string nameToSearch){
   list<contact> result;

   map<string, string>::iterator it = contacts.begin();

    for(; it != contacts.end(); ++it){
       string name = it->first;
       string phoneNumber = it->second;
        
        if(name.find(nameToSearch) != string::npos){
            result.push_back(contact(name, phoneNumber));
        }
    }

    return result;
}

bool contactList::removeContact(std::string nameToRemove){
    map<string, string>::iterator it = contacts.find(nameToRemove);

    if(it != contacts.end()){
        contacts.erase(it);
        return true;
    } else{
        return false;
    }
}

void contactList::listContacts(){
    int n = 1;

    for(map<string, string>::iterator it = contacts.begin(); it != contacts.end(); it++){
        string name = it->first;
        string phoneNumber = it->second;
        cout << n << " - " << name << ": " << phoneNumber << endl;
        n++;
    }

    if(contacts.size() == 0){
        cout << "You have no contacts!\n";
        return;
    }

    cout << "You have " << contacts.size() << " contact(s)!" << endl;
}

string contact::getName(){
    return name;
}

string contact::getPhone(){
    return phoneNumber;
}