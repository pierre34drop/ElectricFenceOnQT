#include <iostream>
#include <QDebug>
#include <QString>

using namespace std;

void * operator new (size_t size)
{
    cout << "New operator overloading " << endl;
    void * p = malloc(size);
    return p;
}

void operator delete(void * p)
{
    cout << "Delete operator overloading " << endl;
    free(p);
}

void * operator new[] (size_t size)
{
    cout << "New operator overloading " << endl;
    void * p = malloc(size);
    return p;
}

void operator delete[] (void * p)
{
    cout << "Delete operator overloading " << endl;
    free(p);
}


class toto
{
public:
    toto()
    {
        for (int i=0; i< 10; i++)
        {
            array[i] = "eee";
        }
    }

    QString get(int i)
    {
        return array[i];
    }

    void set(int i)
    {
        array[i] = "zzzzzz";
    }

private:
    QString array[10];

};


int main()
{
    cout << "Hello World!" << endl;
    toto* titi = new toto;
    titi->set(45);
    QString lulu = titi->get(45);
    qDebug() << lulu;
    return 0;
}
