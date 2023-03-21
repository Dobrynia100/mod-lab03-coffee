// Copyright 2023 UNN-IASR
#ifndef INCLUDE_AUTOMATA_H_
#define INCLUDE_AUTOMATA_H_

#include <string>
#include <vector>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Automata {
 private:
    int cash;
    vector<string> menu;
    vector<int> prices;

 public:
    enum STATES {
        OFF,
        WAIT,
        ACCEPT,
        CHECK,
        COOK
    };
    STATES state;
    Automata();
    int _choice;
    int _price;
    void on();
    void off();
    void coin(int);
    void getMenu();
    STATES getState();
    void choice(int);
    void check();
    void cancel();
    void cook();
    void finish();
};
#endif // INCLUDE_AUTOMATA_H_
