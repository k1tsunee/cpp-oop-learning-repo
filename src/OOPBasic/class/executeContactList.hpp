#ifndef EXECUTECONTACTLIST_HPP_
#define EXECUTECONTACTLIST_HPP_
#include"contactList.hpp"

class executeContactList : public contactList{

    public:
        executeContactList();

        void addContactScript();
        void removeContactScript();
        void searchContactScript();
        void listContactsScript();
        bool eventLoop();

    protected:
        std::string readData(std::string question);
};

#endif
