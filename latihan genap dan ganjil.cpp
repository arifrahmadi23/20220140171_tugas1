#include <iostream>
using namespace std;

int main()
{
    int bil;
    string status;
    cout << "Masukan Bilangan = ";
    cin >> bil;
    if (bil == 0)
        status = "nol";
    else if (bil % 2 == 0)
        status = "genap";
    else
        status = "ganjil";

    cout << "bilangannya = " << status;

}