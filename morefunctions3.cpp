#include<iostream>
using namespace std;
 int sum(int a, int b)
 {
    int c;
    c = a+b;


    a= 10;
    b = 11;

    c = a+b;

    return c;
 }

 int main()
 {
    int a,b;
     a= 3;
     b = 5;

     int c;

     cout<<a<<b<<endl;  //these values are before I calle sum

     c= sum(a,b);
     //int sum(inr a ,int b) //int a --->a, int b------->b
     cout<<c<<endl;
     cout<<a<<b<<endl;  //these values of a,bare after i calee the function"sum"
    

    return 0;
 }