#include "Automata.h"


Automata::Automata()
{
    state = OFF;
    menu = { "×àé", "Êîôå", "Êàêàî", "Ìîëîêî", "×àé ñ ëèìîíîì" };
    prices = { 50, 70, 60, 30, 55 };
    cash = 0;
}
void Automata::on() {
    state = WAIT;
    cout << "Àâòîìàò âêëþ÷åí" << endl;
}

void Automata::off() {
    state = OFF;
    cout << "Àâòîìàò âûêëþ÷åí" << endl;
}
void Automata::coin(int amount) {
    if (state == ACCEPT || state == CHECK) {
        cash += amount;
        state = CHECK;
        cout << "Âíåñåíî " << amount << " ðóáëåé. Âñåãî: " << cash << " ðóáëåé." << endl;
    }
    else {
        state = CHECK;
        cout << "Íåâîçìîæíî ïðèíÿòü äåíüãè â òåêóùåì ñîñòîÿíèè" << endl;
    }
}

void Automata::getMenu() {
    if (state == WAIT) {
        cout << "Ìåíþ íàïèòêîâ:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << menu[i] << " - " << prices[i] << " ðóáëåé" << endl;
        }
        state = ACCEPT;

    }
   
}
void Automata::choice(int item)
{
    if (state == ACCEPT)
    {
        if (item >= 1 && item <= menu.size()) {
            _choice = item - 1;
            _price = prices[_choice];           
            cout << "Âûáðàíî: " << menu[_choice] << "\n";
        }
        else {
            cout << "Íåâåðíûé âûáîð\n";
        }
    }
}
void Automata::cancel()
{
    if (state == ACCEPT || state == CHECK)
    {
        state = WAIT;
        cash = 0;
        cout << "Îòìåíà\n";
    }
    else
    {
        cout << "Íåâîçìîæíî îòìåíèòü òåêóùèé ýòàï\n";
    }
}
void Automata::check()
{
    
    if (state == CHECK && cash >= _price)
    {
        state = COOK;
        if (cash > _price)
        {
            cout << "Âàøà ñäà÷à: " << cash - _price << endl;
            cash = _price;
        }
    }
    else {
       
        cout << "Íåäîñòàòî÷íî ñðåäñòâ\n";
    }


}
void Automata::finish()
{
    if (state == COOK)
    {
        state = WAIT;
        cout << "Âàøå " << menu[_choice] << " ãîòîâî\n";
    }
    else
    {
        cout << "Íåâåðíûé âûáîð\n";
    }
}
void Automata::cook()
{
    if (state == COOK)
    {
        cash -= _price;
        _choice = 0;
        _price = 0;
    }
    else
    {
        cout << "Íåâåðíûé âûáîð\n";
    }
}
Automata::STATES Automata::getState()
{
    cout << "Òåêóùèé ýòàï: " << state << endl;
    return this->state;
}
