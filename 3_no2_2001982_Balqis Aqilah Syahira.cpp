#include <iostream>

using namespace std;

int main ()
{
    string a;
    int b,c,d,e;

    cout << "Nama = ";
    cin >>a;
    cout << "====================="<<endl;
    cout << "Nilai Tugas Anda = ";
    cin >>b;
    cout << "Nilai UTS Anda   = ";
    cin >>c;
    cout << "Nilai UAS Anda   = ";
    cin >>d;
    e=(b+c+d)/3;
    if (e>=60) {
    cout << "====================="<<endl;
    cout <<a<<" Anda mendapatkan nilai rata-rata "<<e<<" maka anda lulus. selamat ya!"<<endl; }
    else {
    cout << "====================="<<endl;
    cout <<a<<" Anda mendapatkan nilai rata-rata "<<e<<" maka anda tidak lulus. Tetap Semangat!"<<endl; }
}
