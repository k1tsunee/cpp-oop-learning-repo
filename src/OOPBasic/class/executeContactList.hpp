#ifndef EXECUTECONTACTLIST_HPP_
#define EXECUTECONTACTLIST_HPP_
#include"contactList.hpp"

class executeContactList : public contactList{

    public:
        executeContactList();
        bool eventLoop();

    protected:
        void addContactScript();
        void removeContactScript();
        void searchContactScript();
        void listContactsScript();
        std::string readData(std::string question);
};

#endif
