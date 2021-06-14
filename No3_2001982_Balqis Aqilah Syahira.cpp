#include <iostream>
using namespace std;

int b,c,d,e,f,g,h,z,i;
string a;


int main ()
{
cout <<"Nama = ";
cin >>a;
cout<<endl;
cout <<"Waktu Awal = ";
cin >>b>>c>>d;
e=(b*3600)+(c*60)+d;
cout <<"Waktu Selesai = ";
cin >>i>>f>>g;
h=(i*3600)+(f*60)+g;
cout <<" "<<endl;
z=h-e;
cout <<"Lama waktu pembicaraan "<<a<< " di telepon adalah "<<z<<" detik";

return 0;


}
