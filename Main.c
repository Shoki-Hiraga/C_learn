#include <stdio.h>
int main(void)

// {
// 	int score;
// 	printf("点数を入力して下さい:");
// 	scanf("%d",&score);
//     	if (score > 100) {
// 	    printf("入力値が大きい\n");
//  	    score = 100;
// 	    }
// 	printf("点数は %d 点です。\n",score);
// 	return 0;
// }



// {
//     int a;
//     scanf("%d", &a);
//     if (a > 10 || a < 10) printf("aは10以外の数値");
//     if (a == 10) printf("aは10である");
// }



// {
//     int a;
//     scanf("%d", &a);
//     if (a == 10) printf("入力値は10です\n");
//     if (a >= 10) printf("入力値は10以上\n");
//     if (a <= 10) printf("入力値は10以下\n");
// }



// {
//     int a = 5;
//     if (a > 5) printf("aが5より大きいと出力\n");
//     printf("if条件抜けたあとか、そもそもパスされた\n");
//     return 0;
// }
    
    

// {
//     int suuti;
//     scanf("%d", &suuti);
//     if (suuti-10) printf("入力値は10ではない");
//     return 0;
// }



// {
//     int price;
//     // double discountMargin;
//         printf("定価を入力してください：");
//         scanf("%d", &price);

//     printf("1割引きは%d円\n", (int)(price * 0.9));
//     printf("3割引きは%d円\n", (int)(price * 0.7));
//     printf("5割引きは%d円\n", (int)(price * 0.5));
//     printf("8割引きは%d円\n", (int)(price * 0.2));    
// }
/*
定価を入力すると、1割引、3割引、5割引、8割引の値段を、
一覧表示するプログラムを作成せよ。
なお、結果の金額は整数値での表示が望ましいが、実数でもかまわない。
*/



// {
//     int min, max, sum;
//     printf("最小値と最大値を , で区切って入力\n");
//     scanf("%d , %d", &min, &max);//%dを,で区切ると入力で,区切りの入力が出来る
//     sum = (min + max)*(max-min+1) / 2;
//     printf("%d～%dの合計のシグマ計算は、%dです。\n", min, max, sum);

// }

// {
//     int data1, data2;
//     // double data3;



// 	scanf("%d%d", &data1,&data2);	/* 入力部分 */
// 	printf("%d,%d\n",data1,data2);
    
//     // scanf("%d, %d, %lf", &data1, &data2, &data3);
//     // scanf("%d", &data1);
//     // printf("%d1回目, %d2回目, %d3回目\n", data1, data2, data3);

//     printf("a%db%dc", 123, 456);
//     return 0;
// }



// {
//     int drinkA, drinkB, buy, pay, change;
//     double tax;
    
//     drinkA = 198;
//     drinkB = 138;
//     tax = 1.05;
//     buy = (int)(drinkA + (drinkB * 2)) * tax;
//     pay = 1000;
//     change = pay -buy;
//     printf("%d円\n", change);    
// }
/*
1本198円の清涼飲料水1本と、1本138円の牛乳2本を購入し、
千円札で払った場合のお釣りを求めよ。
ただし、5%の消費税を追加し、お釣りの額は整数とする。
なお、消費税を四捨五入するかどうかは自由とする。
*/



// {
// 	int x,y;
// 	x = 10;
// 	y = x * (10 + 20);
// 	printf("%5d\n",y);
// 	printf("%d",12345);
// 	return 0;
// }



// {
//     double pi = 3.14159;//全体が6桁
//     printf("%3.1f \n", pi);//全体を3桁で表現して、小数部分(小数点以降)を1桁で表現
//     printf("%6.2f \n", pi);//全体を6桁で表現して、小数部分(小数点以降)を2桁で表現
//     printf("%9.3f \n", pi);//全体を9桁で表現して、小数部分(小数点以降)を3桁で表現
//     printf("%d", 123456);
// }



// {
//     int a = 10000, b = 5000, c = 1000;
//     printf("Aは %5d です。\n", a);
//     printf("Bは %05d です。\n", b);
//     printf("Cは %5d です。\n", c);    
// }



// {
//     double a, b;
//     a = 10;
//     b = 20;
//     printf("%d\n", (int)(a + b));
     // double型をint型に強制変換する
    // %fも%dに書き換えて実数(浮動小数点)で表示
//     return 0;
// }



// {
//     int value = 10;
//     printf("%d", value);
//     return 0;
// }



// {
//     int value;
//     value = 10;
//     value += 20;
//     printf("%d", value);
//     return 0;
// }



// {
//     printf("%d円\n", 100);
//     // printf("円\n");
//     printf("%d\n", 1 + 2);
//     printf("%d円です。後ろから実行される", 800);
//     return 0;
// }



// {
//     printf("Intel\t  corei7\t  ハイエンド\n");
//     printf("AMD\t  Rayzen\t  ハイエンド\n");
// }



// {
// printf("hello\n");
// printf("wolrd\n");
// printf("\n");
// printf("windows\tmicrosoft\n");
// printf("mac\tapple\n");
// return 0;
// }
