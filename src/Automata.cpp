#include "\�����\����\3\include\Automata.h"


Automata::Automata()
{
    state = OFF;
    menu = { "���", "����", "�����", "������", "��� � �������" };
    prices = { 50, 70, 60, 30, 55 };
    cash = 0;
}
void Automata::on() {
    state = WAIT;
    cout << "������� �������" << endl;
}

void Automata::off() {
    state = OFF;
    cout << "������� ��������" << endl;
}
void Automata::coin(int amount) {
    if (state == ACCEPT || state == CHECK) {
        cash += amount;
        state = CHECK;
        cout << "������� " << amount << " ������. �����: " << cash << " ������." << endl;
    }
    else {
        state = CHECK;
        cout << "���������� ������� ������ � ������� ���������" << endl;
    }
}

void Automata::getMenu() {
    if (state == WAIT) {
        cout << "���� ��������:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << menu[i] << " - " << prices[i] << " ������" << endl;
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
            cout << "�������: " << menu[_choice] << "\n";
        }
        else {
            cout << "�������� �����\n";
        }
    }
}
void Automata::cancel()
{
    if (state == ACCEPT || state == CHECK)
    {
        state = WAIT;
        cash = 0;
        cout << "������\n";
    }
    else
    {
        cout << "���������� �������� ������� ����\n";
    }
}
void Automata::check()
{
    
    if (state == CHECK && cash >= _price)
    {
        state = COOK;
        if (cash > _price)
        {
            cout << "���� �����: " << cash - _price << endl;
            cash = _price;
        }
    }
    else {
       
        cout << "������������ �������\n";
    }


}
void Automata::finish()
{
    if (state == COOK)
    {
        state = WAIT;
        cout << "���� " << menu[_choice] << " ������\n";
    }
    else
    {
        cout << "�������� �����\n";
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
        cout << "�������� �����\n";
    }
}
Automata::STATES Automata::getState()
{
    cout << "������� ����: " << state << endl;
    return this->state;
}
