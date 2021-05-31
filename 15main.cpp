#include "iostream";
using namespace std;

int main() {
    int x = 2;
    int y = 3;
    if(y = x)
        cout << (x ^ y);
}

/**
 * a. tidak ada output
 * b. 0
 * c. error
 * d. semua SALAH
*/

/**
 * jawaban : b. 0
 * penjelasan : hanya ada satu tanda sama dengan, yang berarti assignment, bukan perbandingan.
 * assignment mengembalikan false jika nilai yang dimasukkan adalah 0, selain itu maka hasilnya true.
 * sekarang x dan y bernilai 2 karena sudah dilakukan assignment pada statement if.
 * Simbol ^ merupakan operator XOR yang mengembalikan 0 jika bilangan yang dibandingkan sama.
*/