#include<stdio.h>

int main() {
    int r, x = 2;
    float y = 5;

    r = y%x;
    printf("%d", r); 
}

/**
 * jawaban : Compile Error (Tidak bisa dikompile)
 * penjelasa : Hal itu karena modulus tidak bisa 
 * melakukan operasi dengan tipe data selain int.
*/