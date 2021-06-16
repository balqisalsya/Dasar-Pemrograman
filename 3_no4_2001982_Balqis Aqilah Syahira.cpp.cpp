#include <iostream>

using namespace std;

int main ()
{
    int a;
    cout << "Input jumlah barang = ";
    cin >>a;
    if (a>=100)
    {
        cout<<"Maka total harga adalah "<<a*4000;
    }
    else if (a>150)
        {
    cout<<"Maka total harga adalah "<<a*2500;
    }
    else
        {
    cout<<"Maka total harga adalah "<<a*5000; }

}
