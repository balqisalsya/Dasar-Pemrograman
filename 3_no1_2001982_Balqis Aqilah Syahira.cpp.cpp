#include <iostream>

using namespace std;

int main ()
{
    int b,c;
    string a;
    cout << "Nama = ";
    cin >>a;
    cout << "Umur = ";
    cin >>b;
    c = 17-b;
    if (b>=17) {
    cout <<"Selamat "<<a<<" kamu boleh menonton film ini"; }
    else {
    cout <<"Mohon maaf "<<a<<" kamu masih terlalu kecil. Tunggu "<<c<<" Tahun lagi ya!"<<endl; }
}
