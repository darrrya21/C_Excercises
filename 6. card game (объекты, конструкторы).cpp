#include <iostream>
using namespace std; 

enum Suit {clubs, diamonds, hearts, spades}; 
const int jack = 11; 
const int queen = 12; 
const int king = 13; 
const int ace = 14;

class card
{
    private:
        int number; 
        Suit suit; 
        
    public: 
        card()
            {}
        
        card(int nm, Suit s): number(nm), suit(s)
            {}
        
        void display();
        bool IsEqual(card);
}; 

void card::display()
{
    if(number >= 2 && number <= 10)
    {
        cout << number << " ";
    }
    
    switch(number)
    {
        case jack: cout << "Валет "; break;
        case queen: cout << "Дама "; break;
        case king: cout << "Король "; break;
        case ace: cout << "Туз "; break;
    }
    
    switch(suit)
    {
        case clubs: cout << "треф" << endl; break;
        case diamonds: cout << "бубен" << endl; break;
        case hearts: cout << "червей" << endl; break;
        case spades: cout << "пик" << endl; break;
    }
}

bool card::IsEqual(card c1)
{
    return (number == c1.number && suit==c1.suit) ? true:false;
}

int main()
{
    card temp, chosen, prize; 
    int position;
    char ch;
    
    do
    {
        card c1(7, clubs); 
        cout << "Карта 1: ";
        c1.display(); 
        
        card c2(jack, hearts); 
        cout << "Карта 2: ";
        c2.display(); 
        
        card c3(ace, spades); 
        cout << "Карта 3: ";
        c3.display();
        
        prize = c3; 
        
        cout << "Меняем местами карты 1 и 3..." << endl;
        temp = c3; c3 = c1; c1 = temp;
        
        cout << "Меняем местами карты 2 и 3..." << endl;
        temp = c2; c2 = c3; c3 = temp;
        
        cout << "Меняем местами карты 1 и 2..." << endl;
        temp = c1; c1 = c2; c2 = temp;
        
        cout << "На какой позиции теперь: ";
        prize.display(); 
        
        cin >> position; 
        
        switch(position)
        {
            case 1: chosen=c1; break;
            case 2: chosen=c2; break;
            case 3: chosen=c3; break;
        }
        
        if(chosen.IsEqual(prize))
        {
            cout << "Вы выиграли!" << endl;
        }
        else
            {cout << "Вы проиграли.";}
        
        cout << "Повторить? (y/n)"; cin >> ch;
    }
    while(ch != 'n');
    
    
}


