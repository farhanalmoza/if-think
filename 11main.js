const capital = {
    "Jakarta": "Indonesia",
    "London": "England",
    "Tokyo": "Japa"
}
    
capital["Surabaya"] = "Indonesia";
    
console.log(capital["Indonesia"]);

// Output = undefined
// penjelasan = pada object capital tidak terdapat key "Indonesia"
// sehingga hasilnya adalah undefined
    