// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Wprowadź zmienną całkowitą dla a ";
    cin >> a;
    cout << "Wprowadź zmienną całkowitą dla b ";
    cin >> b;
    if (a == b) {
        cout << "Podane wartości są sobie równe.";
    }
    else if(a<b){
        cout << "Pierwsza liczba jest mniejsza od drugiej";
    }
    else {
        cout << "Druga liczba jest miejsza";
    }
}

