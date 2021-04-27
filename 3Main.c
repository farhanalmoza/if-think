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