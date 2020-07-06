#ifndef A3_40080413_LINEMANAGER_H
#define A3_40080413_LINEMANAGER_H

#include "Menu.h"
#include "MiniDB.h"
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

class LineManager {
private:

public:
    MiniDB<string> db_store{ nullptr };
    Menu menu;
    LineManager();
    void run();

};


#endif //A3_40080413_LINEMANAGER_H
