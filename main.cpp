#include<iostream>
using namespace std;
typedef struct pecahan
{

float pb;
float py;
};
int main (float argc, char *argv[])
{
    pecahan P1, P2;
    cout << "Mengubah Bilangan Pecahan Ke Bilangan Bulat"<< endl;
    cout << "Masukkan pembilang: ";
    cin >> P1.pb;
    cout << "Masukkan penyebut: ";
    cin >> P2.py;

    if ("/")
    {
        cout << "Hasilnya: "<< (P1.pb) / (P2.py) << endl;
    }
    return 0;
}
