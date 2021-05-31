#include <iostream>
using namespace std;

int main() {
    int x = 2;
    x = ++x + x++;
    cout << x;
}

/**
 * a. 4
 * b. 5
 * c. 6
 * d. 7
*/

/**
 * jawaban : d. 7
 * penjelasan : ++x (pre-increment) menambahkan x lebih dulu (x menjadi 3)
 * kemudian digunakan pada expression, sehinggan menjadi 3 + x++.
 * x++ (post-increment) sudah digunakan pada expression, kemudian ditambhkan,
 * sehingga menjadi 3 + 3 = 6. namun, setelah penjumlah, post-increment
 * menambahkan 1 pada x sehingga menjadi 7.
*/