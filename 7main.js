const bom = {
    tombol: function mulai(n, result) {
        result = typeof result !== "undefined" ? result : [];
        if (n === 0) {
            result.push("Duaar!");
            return result;
        }
        let str = n + " detik";
        result.push(str);
        return mulai(n - 1, result);
    },
};

console.log(bom.tombol(3));

/**
 * output : ["3 detik", "2 detik", "1 detik", "Duaar!"]
 * penjelasan : Object bom memiliki properti tombol yang mengarah ke fungsi bernama mulai().
 * Nilai object biasanya merupakan expression function, tetapi bisa juga diberi fungsi biasa.
 * Fungsi biasa berfungsi dengan baik dalam contoh ini untuk memungkinkan rekursi.
 */
