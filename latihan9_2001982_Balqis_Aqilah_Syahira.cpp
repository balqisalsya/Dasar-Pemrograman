#include <iostream>


using namespace std;


void matriksi(int mat[][2], string a);
void operasi(int x[][2], int y[][2], string a, string b);

int main(){
    int a[2][2];
    int b[2][2];

    cout << "Masukan nilai matriks A : " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++ ){
            cout << "nilai matriks " << i << "," << j << " : "; cin >> a[i][j];
        }
    }

    cout << endl;

    cout << "Masukan nilai matriks B : " << endl;
    for(int k = 0; k < 2; k++){
        for(int l = 0; l < 2; l++ ){
            cout << "nilai matriks " << k << "," << l << " : "; cin >> b[k][l];
        }
    }

    cout << endl;
    matriksi(a, "A");
    cout << endl;
    matriksi(b, "B");
    cout << endl;

    cout << "Hasil perjumlahan matriks A dan B" << endl;
    // (matriks a, matriks b, nama keluaran matriks, oprator("-"" atau "+"") )
    operasi(a,b, "C", "+");

    cout << "Hasil pengurangan matriks A dan B" << endl;
    operasi(a,b, "D", "-");


}



void matriksi(int mat[][2], string a){
    cout << "Matriks " << a << endl;
    for(int i = 0; i < 2; i++ ){
        for(int j = 0; j < 2; j++ ){
            cout << "nilai " << a << " [" << i << "][" << j <<"] = " << mat[i][j] << endl;
        }
    }
}

void operasi(int x[][2], int y[][2], string a, string b){
    int c[2][2];
    for(int i = 0; i < 2; i++ ){
        for(int j = 0; j < 2; j++ ){
            if(b == "+"){
                c[i][j] = x[i][j] + y[i][j];
            }else if(b == "-"){
                c[i][j] = x[i][j] - y[i][j];
            }else{
                exit(0);
            }
        }
    }

    matriksi(c, a);
}
