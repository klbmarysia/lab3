// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*int main()
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
*/
/*
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
    else{
        if (a < b) {
            cout << "Pierwsza liczba jest mniejsza od drugiej";
        }
        else {
            cout << "Druga liczba jest miejsza";
        }

    }
    
}
*/
//zd.3
/*int main() {
    double r;
    cout << "podaj wartosc r ";
    cin >> r;
    if (0.7 <= r && r <= 1) {
        cout << "bardzo silna korelacja dodatnia";
    }
    else if (r >= 0.5) {
        cout << "silna korelacja dodoatnia";
    }
    else if (r >= 0.3) {
        cout << "umiarkowana korelacja dodatnia";
    }
    else if (r >= 0.2) {
        cout << "słaba korelacja dodatnia";
    }
    else if(r>=0) {
        cout << "brak korelacji";
    }
}
*/

//zd.4
int main() {
    double b, a;
    char znak;
    cout << "podaj liczbe ";
    cin >> a;
    cout << "podaj znak";
    cin >> znak;
    cout << "podaj liczbe ";
    cin >> b;
    if (znak == '/' && b == 0) {
        cout << "nie można dzielić przez zero!"
       
    }
    else if (znak == '/' && b != 0) {

    }


}