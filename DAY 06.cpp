#include<iostream>
using namespace std;


//Decimal To Binary Convertion
int decToBinary(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem  = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
//Binary To Decimal Convertion
int binToDeci(int binNum)
{
    int ans=0,pow=1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    cout<<binToDeci(1010);
    
    return 0;
}