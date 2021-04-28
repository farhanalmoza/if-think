#include<iostream>
using namespace std;

int main()
{
    char arr[] = "Darratuevol";
    for(int i = 10; i > 5; i--) {
        cout << arr[i];
    }
    return 0;
}

/*
Output: loveu
Penjelasan: string Darratuevol akan diubah
menjadi array dan dimasukkan ke dalam array
arr. Kemudian program mencetak elemen array
arr dari indeks 10 hingga indeks 6, atau
elemen ke-11 hingga elemen ke-7.
*/