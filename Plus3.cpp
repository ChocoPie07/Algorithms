#include <iostream>
#include <ctime>

using namespace std;

class Animal
{
public:
    virtual void  voice() = 0;
    virtual ~Animal() {}
};

class Ram : public Animal
{
public:
    void voice() override
    {
        cout << "Бе-Бе-Бе" << endl;
    }
};
class Cow : public Animal
{
public:
    void voice() override
    {
        cout << "Му-Му-Му" << endl;
    }
};

class Horse : public Animal
{
public:
    void voice() override
    {
        cout << "Иго-го" << endl;
    }
};

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "RUSSIAN");
    Animal *massiv[] = { new Ram, new Cow, new Horse };

    int i;
    cout << "Если хотите услышать барана, нажмите 0. Если корову, нажмите 1. Если Лошадь, нажмите 2" << endl;
    cin >> i;

    massiv[i]->voice();

    return 0;
}