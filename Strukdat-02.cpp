/*
NAMA PROGRAM : PRE-TEST 2
NAMA    : Anne Audistya Fernanda
NPM     : 140810180059
KELAS   : A
TANGGAL : 5 Maret 2019
*/

#include <iostream>

using namespace std;

void input (int (&arr)[100], int& n)
{
    cout << "Masukkan Panjang Data : ";
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
};

void moveZeroToEnd (int arr[], int n)
{
    int hitung = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[hitung++] = arr[i];
    while (hitung < n)
        arr[hitung++] = 0;
};

void output (int arr[], int n)
{
    moveZeroToEnd(arr, n);
    cout << "Hasil : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
};

int main()
{
    int arr[100];
    int n = sizeof(arr) / sizeof(arr[100]);
    moveZeroToEnd(arr, n);
    input(arr, n);
    output (arr, n);
}

