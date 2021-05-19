function Builder() {
  this.self = function () {
    return this;
  };
}
let b = new Builder();
console.log(b.self() === b);

/**
 * output : true
 * penjelasan : Untuk constructor function, "this" mengacu pada objek yang dibuat oleh constructor function itu sendiri.
 * sehingga b.self() sama dengan b.
 */
