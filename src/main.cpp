#include "\учеба\мипс\3\include\Automata.h"

int main()
{
    setlocale(0,"Russian");
    Automata coffee = Automata();
    coffee.on();
    coffee.getMenu();
    coffee.choice(1);
    coffee.coin(100);
    coffee.check();
    coffee.cook();
    coffee.finish();
    int exit = 0;
    cin >> exit;
    return 0;
}

