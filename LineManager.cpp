#include "LineManager.h"

LineManager::LineManager(){
    MiniDB<string> db_store{ nullptr };
    Menu menu;
}

void LineManager::run() {
//    if (db_store == empty) menu.partial_menu();
//    else menu.full_menu();

    string display = menu.partial_menu();
    cout << display << endl;

}