#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    float b,d,e;
    string a,c;
    cout << "Input Nama 1 = ";
    cin >>a;
    cout << "Umur = ";
    cin >>b;
    cout << "Input Nama 2 = ";
    cin >>c;
    cout << "Umur = ";
    cin >>d;
    cout << " "<<endl;

    if (b>d)
    cout << "Maka selisih umur "<<a<<" dan "<<c<<" adalah "<<b-d<<" tahun"<<endl;
    else if (b<d)
    cout << "Maka selisih umur "<<a<<" dan "<<c<<" adalah "<<d-b<<" tahun"<<endl;

    return 0;
}
