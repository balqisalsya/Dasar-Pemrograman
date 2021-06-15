#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int a,b,c,max,mid,min;

    cout<<"Mengurutkan bilangan "<<endl;
    cout<<"============================"<<endl;
    cout<<"bilangan pertama: " ; cin>>a;
    cout<<"bilangan kedua  : " ; cin>>b;
    cout<<"bilangan ketiga : " ; cin>>c;
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
getch();
}
