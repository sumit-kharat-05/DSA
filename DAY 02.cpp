#include<iostream>
using namespace std;

int main()
{
// cout<<"SUMIT KHARAT"<<endl;

//Type Casting//

// char grade = 'A';
// int value = grade;
// cout<<value<<endl;

// double price = 100.99;
// int newprice = (int) price;
// cout<<newprice<<endl;

//Inputs In C++//

// int age;
// cout<<"Enter Your Age : ";
// cin>>age;
// cout<<"Your Age Is :" <<age <<endl;

//Arithmetic Operators In C++//

int a = 20, b = 10;

cout<< "sum = " << (a+b) << endl;
cout<< "difference = " << (a-b) << endl;
cout<< "product = " << (a*b) << endl;
cout<< "quotient = " << (a/b) << endl;
cout<< "modulo = " << (a%b) << endl;

//Relational Operators In C++//

cout<< (5 < 10) << endl;
cout<< (5 > 10) << endl;
cout<< (5 <= 10) << endl;
cout<< (5 >= 10) << endl;
cout<< (5 == 10) << endl;
cout<< (5 != 10) << endl;

//Logical Operators In C++//

cout<< !(5 > 2) << endl;
cout<< ((5 > 2) || (5 > 3)) << endl;
cout<< ((5 > 2) && (5 > 3)) << endl;

//DSA Day 02 Que 01 (Sum of Two Numbers)//

int num1, num2;
cout<<"Enter First Number :";
cin>>num1;

cout<<"Enter Second Number :";
cin>>num2;

int sum = num1 + num2;
cout<< "sum of two numbers is : "<<sum <<endl;




return 0;
}






