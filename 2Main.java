package com.example;

public class Main {

  public static void main(String[] args) {
   int x = 2021;
    
   if (true) {
        int y = 987;
        System.out.println(x+2*y);
   }
   
   System.out.println(x-y/5);
   
  }
}

/*Penjelasan :
Program di atas akan menghasilkan error karena pada baris ke-13, program tidak mengetahui apa itu variabel y. variabel y tidak diketahui karena berada di dalam if, sedangkan baris ke-13 ditulis diluar if.*/