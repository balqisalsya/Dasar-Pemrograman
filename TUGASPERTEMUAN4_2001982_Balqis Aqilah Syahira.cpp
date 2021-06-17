#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int a,b,c,d,e,f,g,h,max,mid,min,i;
    float x1,x2;
    cout <<"1. Pengurutan Bilangan"<<endl;
    cout <<"2. Mencari Luas Segitiga"<<endl;
    cout <<"3. Akar Kuadrat"<<endl;
    cout <<"4. Ganjil Atau genap dari rata-rata"<<endl;
    cout << " "<<endl;
    while (d>=0) {
     cout <<"Pilih menu untuk menghitung proses (1-4) = ";
    cin>>d;
    if (d==1){
            cout<<" "<<endl;
        cout<<"Input bilangan pertama : ";
    cin>>a;
        cout<<"Input bilangan kedua   : ";
    cin>>b;
        cout<<"Input bilangan ketiga  : ";
    cin>>c;
    if (a>b) {
        if (a>c) {
            if (b>c) {
                max =a; mid=b; min=c;
            }else {
                max=a; mid=c; min=b;
                }
        }else {
            max=c; mid=a; min=b;
                    }
    } else{
        if (b>c) {
            if (a>c){
               max=b; mid=a; min=c;
            } else {
                max=b; mid=c; min=a;}
        }  else {
        max=c; mid=b; min=a;}
    }
cout<<"============================"<<endl;
cout<<"Urutan dari yang terkecil adalah "<<endl;
cout << min << "," << mid << "," << max << endl;
cout<<"============================"<<endl;
cout<<"Urutan dari yang terbesar adalah"<<endl;
cout << max << "," << mid << "," << min << endl;
        }
     if (d==2) {
            cout<<" "<<endl;
        cout<<"Input nilai alas   : ";
    cin>>a;
        cout<<"Input Nilai tinggi : ";
    cin>>b;
    cout<<" "<<endl;
    e = 0.5*a*b;
    cout <<" ";
    cout <<"Luas segitiga adalah = "<<e<<endl;
    }
    if (d==3) {
            cout<<" "<<endl;
        cout<<"Input nilai a : ";
    cin>>a;
        cout<<"Input Nilai b : ";
    cin>>b;
        cout<<"Input Nilai c : ";
    cin>>c;
    f=(b*b)-(4*a*c);

	if (f>0){
		x1 = (-b + sqrt(f)) / (2*a);
      	x2 = (-b - sqrt(f)) / (2*a);
	}else if (f==0){
		x1 = (-b + sqrt(f)) / (2*a);
      	x2 = x1;
	}else {
      	cout<<"\nAkar Imajiner"<<endl;
	 	exit(0);
	}
	cout<<" "<<endl;
	cout<<"Maka Nilai X1 = "<<x1<<endl;
    cout<<"           X2 = "<<x2<<endl;


    }
    if (d==4) {
            cout<<" "<<endl;
        cout<<"Input bilangan a : ";
    cin>>a;
        cout<<"Input bilangan b : ";
    cin>>b;
        cout<<"Input bilangan c : ";
    cin>>c;
    i=(a+b+c)/3;
    if (i%2==0) {
            cout<<" "<<endl;
    cout << "Rata ratanya adalah "<<i<<", "<<i<<" Adalah Bilangan Genap"<<endl; }
    else {
        cout<<" "<<endl;
    cout << "Rata ratanya adalah "<<i<<", "<<i<<" Adalah Bilangan Ganjil"<<endl; }
    }

        return 0;
    }


    }

