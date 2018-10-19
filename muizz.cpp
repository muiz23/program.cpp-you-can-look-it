/* This Program for using operate system linux 
Name 		: Muhammad muizz
University 	: Muhammadiyah sidoarjo (Indonesian) 
Class		: Informatika A4 
*/

#include <iostream>

#include <stdlib.h>

using namespace std;

int main()
{
    float r, luas;
    int a, b, c, cek, pilih;
    char jawab;

    menu:
        system("cls");

    cout << "=====MENU===== \n";
    cout << "1. Menghitung luas lingkaran \n";
    cout << "2. Decrement \n";
    cout << "3. Menentukan nilai awal dan akhir \n";
    cout << "4. Menentukan bilangan prima \n";
    cout << "Pilih no : ";
    cin >> pilih;
    cout << "\n";
    if (pilih==1) {
        cout << "Masukkan nilai r : "; cin >> r;
        luas = 3.14*r*r;
        cout << "Hasilnya = " << luas;
    }

    if (pilih==2) {
        for ( a=100; a >= 60; a--) {
            cout << a << "\n";
        }
    }

    if (pilih==3) {
        cout << "Masukkan nilai awal = "; cin >> a;
        cout << "Masukkan nilai akhir = "; cin >> b;
        for ( int x=a; x <=b; x++) {
            if (x%5==0) {
                cout << x << " ";
            }
        }
    }

    if (pilih==4) {
        cout << "Masukkan bilangan prima : "; cin >> c;
        for ( a=2; a <= c; a++ ) {
            cek = 0;
            for ( b=2; b < a; b++ ) {
                if ( a%b==0 ) {
                    cek=1;
                }
            } if ( cek==0 ) {
                cout << a << " ";
            }
        }

    }
    cout << "\n";
    cout << "\n";
    cout << "Kembali ke menu awal ? Y ( Berarti Yes ) /N ( Berarti No) = "; cin >> jawab;
    if (jawab=='y' || jawab=='Y') {
        goto menu;
    }
    
    return 0;


}

