int main() {
    int i = (i = 1, 5);
    printf("%d", i);
}

/**
 * Output : 5
 * penjelasan : operator koma pada pendeklarasian variabel i
 * menunjukkan bahwa nilai i akan berubah dari 1 sampai dengan 5.
 * akan tetapi, nilai yang dicetak merupakan nilai yang terakhir,
 * yaitu 5
*/