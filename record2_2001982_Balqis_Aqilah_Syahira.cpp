#include <iostream>

using namespace std;
struct Data
{
    string first;
    string last;
    int age;
};

int main()
{
    Data data[10];
    int n = 0, jumur = 0;
    float rata;
    cout << "Masukan banyak data yang diinginkan: ";
    cin >> n;
    while ((n > 10) || (n <= 0))
    {
        cout << "maksimal 10 data, masukan kembali banyak data : ";
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "nama depan : ";
        cin >> data[i].first;
        cout << "Nama Belakang : ";
        cin >> data[i].last;
        cout << "Umur : ";
        cin >> data[i].age;
        jumur = jumur + data[i].age;
    }

    rata = jumur / n;

    cout << "Rata-rata sejumlah " << n << " orang adalah " << rata << " tahun " << endl;
}
