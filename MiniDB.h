#ifndef A3_40080413_MINIDB_H
#define A3_40080413_MINIDB_H

#include <iterator>
#include <list>
#include <cstring>
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::string;
using namespace std;

template <typename T>
class MiniDB {
private:
    T t1;
public:
    MiniDB(T);
    void print();

private:
    list<T> db_store;
//    list<T>::iterator current_position; // Declaring iterator to a list
//    MiniDB(); // default constructor

};

template<typename T>
MiniDB<T> ::MiniDB(T): t1(t1){ } // T’s copy ctor at work twice

template<typename T>
void MiniDB<T> ::print()
{
    cout << "t1: " << t1 << endl; // T must have operator<<
}
#endif //A3_40080413_MINIDB_H
