#include <string>
#include <vector>
#include <iostream>

using namespace std;

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