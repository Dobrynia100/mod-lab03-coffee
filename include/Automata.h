#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Automata {
private:
    enum STATES {
        OFF,
        WAIT,
        ACCEPT,
        CHECK,
        COOK

    };
    int cash;
    vector<string> menu;
    vector<int> prices;
    STATES state;

public:
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