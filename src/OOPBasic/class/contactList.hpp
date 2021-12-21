#ifndef CONTACTLIST_HPP_
#define CONTACTLIST_HPP_
#include<map>
#include<list>
#include<string>

class contact{
    std::string name, phoneNumber;

    public:
        contact(std::string n, std::string pn);

        std::string getName();
        std::string getPhone();
};

class contactList{
    std::map<std::string, std::string> contacts;

    public:
        contactList();
        bool addContact(std::string name, std::string phoneNumber);
        bool removeContact(std::string name);
        std::list<contact> searchContact(std::string name);
        void listContacts();
};

#endif
