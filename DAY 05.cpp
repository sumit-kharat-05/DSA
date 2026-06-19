#include<iostream>
using namespace std;

// int sum(int a,int b)
// {
//     int s = a+b;
//     return s;
// }

// int minofTwo(int a,int b)
// {
//     if (a < b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

//DAY 05 Que 01//

// int sumN(int n)
// {
//     int sum = 0;

//     for (int i=1;i<=n;i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

// int sum(int a , int b)
// {
//     return a+b;
// }

//DAY 05 Que 02//

int sumofDigits(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;
        digSum += lastDig;
    }
    return digSum;
}
int main()
{

// cout<< sum(25,25) <<endl;
// cout<<"Min ="<<minofTwo(88,65) <<endl;

// cout<<sumN(5)<<endl;
// cout<<sumN(10)<<endl;

// int x=25;
// int y=25;

// cout<<sum(x,y)<<endl;

cout<<"Sum ="<<sumofDigits(12345)<<endl;
return 0;
}






