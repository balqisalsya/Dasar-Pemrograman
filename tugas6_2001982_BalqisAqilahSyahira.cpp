#include <iostream>

using namespace std;

int n;

 void faktorial () {
 int bil;
 long int hasil;

 hasil = 1;
 for (bil = n; bil >= 1; bil--)
 {
  hasil = hasil * bil;
 }
 cout << "n! = " << hasil << endl;

 }

 void bintang () {
int i,j;

for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
 }

 int main() {
     int z,a;
 cout <<"1. Faktorial "<<endl;
 cout <<"2. Bintang "<<endl;
 cout <<" "<<endl;
 while (z>=0) {
        cout <<"Pilih Menu (1-2) = ";
        cin >>z;
        if(z==1) {
                cout <<" "<<endl;
            cout <<"Faktorial "<<endl;
            cout <<"n = ";
            cin >>n;
             faktorial ();
             return 0;
        }
        else if (z==2) {
            cout <<" "<<endl;
            cout <<"Bintang "<<endl;
            cout <<"n = ";
            cin >>n;
            cout <<" "<<endl;
             bintang ();
             return 0;
        }

 }

 }


