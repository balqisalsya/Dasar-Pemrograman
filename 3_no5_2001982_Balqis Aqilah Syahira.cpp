#include <iostream>

using namespace std;

int main()
{
	int c,d,e;
	string a;
	char b;
    cout <<"==============PT RPL================"<<endl;
    cout<<"===========Gaji Karyawan============"<<endl;
	cout<<"Nama Karyawan             : ";
	cin>>a;
	cout<<"Golongan Karyawan (A/B/C) : ";
	cin>>b;
	cout<<"Jumlah Jam Kerja          : ";
	cin>>c;
	if(b=='A'||b=='a')
	{
		if(c>45)
		{
			e = c - 45;
			d = (e*30000)+(45*50000);
		}
		else
		{
			d = c*50000;
		}
	}else if(b== 'B'||b=='b')
	{
		if(c>45)
		{
			e = c - 45;
			d = (e*30000)+(45*60000);
		}
		else
		{
			d = c*60000;
		}
	}else
	{
		if(c>45)
		{
			e = c - 45;
			d = (e*30000)+(45*75000);
		}
		else
		{
			d = c*75000;
		}
	}
	cout<<"===================================="<<endl;
	cout<<"Nama Karyawan             : "<<a<<endl;
	cout<<"Total Gaji                : "<<d<<endl;
	cout<<"===================================="<<endl;
	return 0;
}
