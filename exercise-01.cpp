/*
NAMA PROGRAM : EXERCISE-01
NAMA    : Anne Audistya Fernanda
NPM     : 140810180059
KELAS   : A
TANGGAL : 5 Maret 2019
*/
#include <iostream>
#include <string.h>

using namespace std;

struct Orang
{
    int umur;
    char nama [30];
    char goldar [2];
    char jk [1];
};

int main()
{
    Orang orang;
    orang.umur = 10;
    strcpy (orang.nama, "Fahmi");
    strcpy (orang.goldar, "O");
    strcpy (orang.jk, "L");

    cout << "Umur : " << orang.umur << endl;
    cout << "Nama : " << orang.nama << endl;
    cout << "Golongan Darah : " << orang.goldar << endl;
    cout << "Jenis Kelamin : " << orang.jk << endl;
}
