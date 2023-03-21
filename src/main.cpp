// Copyright 2023 UNN-IASR
#include "Automata.h"
int main() {
    setlocale(0, "Russian");
    Automata coffee = Automata();
    coffee.on();
    coffee.getMenu();
    coffee.choice(1);
    while (coffee.getState() != Automata::COOK) {
        coffee.coin(50);
        coffee.check();
    }
    coffee.cook();
    coffee.finish();
    int exit = 0;
    cin >> exit;
    return 0;
}

