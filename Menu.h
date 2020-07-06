#ifndef A3_40080413_MENU_H
#define A3_40080413_MENU_H

#include <cstring>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using namespace std;
using std::vector;

class Menu {
private: // private data member representation
    string top_message = " ";
    string bottom_message = " ";
    vector<string> option_list{nullptr}; // http://www.cplusplus.com/reference/vector/vector/

public:
    void partial_full_menu();
    string partial_menu();
    string full_menu();

//    // the "Big Three" ---------------------------------------------------
//    Menu(const Menu & source); // copy constructor
//    Menu & operator=(const Menu & source); // copy assignment
//    virtual ~ Menu(); // destructor, don't leave objects on the heap without it!
//    // -------------------------------------------------------------------
//    explicit Menu(int size);
//
//    void set_top_message(const ElemType&); // Set top messages
//    Text get_top_message() const; // Set top messages
//    void set_bottom_message(const ElemType&); // Set bottom messages
//    Text get_bottom_message() const; // Get bottom messages
//    void clear_top_message();
//    void clear_bottom_message();
//    int getCapacity(); // return the current capacity of the option_list
//    int read_option_number(); // Displays menu and then reads and returns a valid option number
//    ElemType toString() const; // return a string representation
//    ElemType get(int k) const;
//
//    // Implementation of stack ADT ---------------------------------------
//    void push_back(ElemType e); // push_back a given element on the stack
//    ElemType pop_back();        // remove stack top element and return a copy
//    ElemType top() const;  // return the stack top element
//    void insert(int index, const ElemType& inserted_txt); // inserts option at position index
//    void remove(int index); // Removes an option from the list at given index
//
//    // public facilitator member functions
//    bool isEmpty() const; // Determines whether this menu’s option list is empty
//    bool isFull() const;
//    int size() const;
//
    void partial_menu(ostream& sout)const;  // writes option_list elements to a given output stream

};


#endif //A3_40080413_MENU_H
