#include <iostream>

using namespace std;

struct data
{
	string first;
	string last;
	int age;
};

int main()
{
	data dataa;
	cout<<"Masukan Nama Depan : "; cin>>dataa.first;
	cout<<"Masukan Nama Belakang : "; cin>>dataa.last;
	cout<<"Masukan Umur : "; cin>>dataa.age;
	cout<< " "<<endl;
	cout<<"Halo "<<dataa.first<<" "<<dataa.last<<". Selamat umur kamu sekarang "<<dataa.age<<" tahun!.";
}
