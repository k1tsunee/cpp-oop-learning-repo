#include"contactList.hpp"
#include<string>

using namespace std;

contactList::contactList(){
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

string contact::getName(){
    return name;
}

string contact::getPhone(){
    return phoneNumber;
}