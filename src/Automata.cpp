#include "\учеба\мипс\3\include\Automata.h"


Automata::Automata()
{
    state = OFF;
    menu = { "Чай", "Кофе", "Какао", "Молоко", "Чай с лимоном" };
    prices = { 50, 70, 60, 30, 55 };
    cash = 0;
}
void Automata::on() {
    state = WAIT;
    cout << "Автомат включен" << endl;
}

void Automata::off() {
    state = OFF;
    cout << "Автомат выключен" << endl;
}
void Automata::coin(int amount) {
    if (state == ACCEPT || state == CHECK) {
        cash += amount;
        state = CHECK;
        cout << "Внесено " << amount << " рублей. Всего: " << cash << " рублей." << endl;
    }
    else {
        state = CHECK;
        cout << "Невозможно принять деньги в текущем состоянии" << endl;
    }
}

void Automata::getMenu() {
    if (state == WAIT) {
        cout << "Меню напитков:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << menu[i] << " - " << prices[i] << " рублей" << endl;
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
            cout << "Выбрано: " << menu[_choice] << "\n";
        }
        else {
            cout << "Неверный выбор\n";
        }
    }
}
void Automata::cancel()
{
    if (state == ACCEPT || state == CHECK)
    {
        state = WAIT;
        cash = 0;
        cout << "Отмена\n";
    }
    else
    {
        cout << "Невозможно отменить текущий этап\n";
    }
}
void Automata::check()
{
    
    if (state == CHECK && cash >= _price)
    {
        state = COOK;
        if (cash > _price)
        {
            cout << "Ваша сдача: " << cash - _price << endl;
            cash = _price;
        }
    }
    else {
       
        cout << "Недостаточно средств\n";
    }


}
void Automata::finish()
{
    if (state == COOK)
    {
        state = WAIT;
        cout << "Ваше " << menu[_choice] << " готово\n";
    }
    else
    {
        cout << "Неверный выбор\n";
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
        cout << "Неверный выбор\n";
    }
}
Automata::STATES Automata::getState()
{
    cout << "Текущий этап: " << state << endl;
    return this->state;
}
