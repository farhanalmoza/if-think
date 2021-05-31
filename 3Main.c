#include<stdio.h>

char ganti(char prodi[20]) {
    prodi = "Informatika";
}

int main()
{
    char jurusan[20] = "Teknik Informatika";
    ganti(jurusan);
    printf(jurusan);
    return 0;
}

/**
 * Output : Teknik Informatika
 * Penjelasan : variabel jurusan nilainya diganti pada fungsi ganti().
 * Namun, fungsi ganti() tidak mengembalikan nilai apapun. Sehingga
 * nilai dari variabel jurusan yang dicetak tetap "Teknik Informatika".
*/