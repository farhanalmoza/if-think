const rek = {
  sapa: "selamat",
  waktu: "pagi",
};

function a() {
  return this.sapa + " " + this.waktu + "!";
}

console.log(a.apply(rek));

/**
 * output : "selamat pagi!"
 * penjelasan : Method apply() didefinisikan untuk function object dan menerima object sebagai parameter pertama.
 * Object yang diteruskan ke apply() sebagai argumen ditetapkan ke "this" saat fungsi dipanggil.
 */
