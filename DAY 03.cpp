#include<iostream>
using namespace std;

int main()
{
//Conditional statements//

// int n = -2;

// if(n > 0)
// {
//     cout << "Positive Number" << endl;
// }
// else
// {
//     cout << "Negative number" << endl;
// }


// int age;
// cout << "Enter Your Age : ";
// cin >> age;

// if(age >= 18)
// {
//     cout << "You can Vote" << endl;
// }
// else
// {
//     cout << "You Cannot Vote" << endl;
// }



// int n;
// cout << "Entered A Number :";
// cin >> n;

// if(n%2 == 0)
// {
//     cout << "Even Number" << endl;
// }
// else
// {
//     cout << "Odd Number" << endl;           
// }

// int grade;
// cout << "Entered Your Grade :";
// cin >> grade;

// if(grade >=90)
// {
//     cout << "A" <<endl;
// }
// else if(grade >=80)
// {
//     cout << "B" <<endl;
// }
// else if(grade >=70)
// {
//     cout << "C" <<endl;
// }
// else if(grade >=60)
// {
//     cout << "D" <<endl;
// }
// else
// {
// cout << "Fail" <<endl; 
// }

// char ch;
// cout<< "Entered Character :";
// cin >> ch;

// if(ch >= 'a' && ch <= 'z')
// {
//     cout <<"Lowercase" << endl;
// }
// else
// {
//     cout << "Uppercase" << endl;
// }

//Ternary Operator//

// int n1 = -50;

// cout << (n1>=0 ? "positive" : "negative") << endl;

//While Loops//

// int count1 = 1;

// while(count1 <= 5)
// {
//     cout<< count1 << " "<<endl;
//     count1++;
// }

//For Loop//

// int n = 5;

// for (int i=1;i<=n;i++) 
// {
//    cout<< i <<" ";
   
// }
// cout << endl;

//DSA Day 03 Que No 01//

// int n = 10;
// int sum = 0;
// for(int i = 1;i<=n; i++)
// {
//     sum += i;
// }
// cout<<sum;

//DSA Day 03 Que No 02//

// int n = 50;
// int oddsum = 0;
// for(int i =0;i<=n; i++)
// {

//     if(i%2 != 0)
//     {
//         cout << i  <<" " ;
//         oddsum += i;
//     }
// }
// cout << "oddsum : "<< oddsum << endl;

//DSA Day 03 Que No 03//

int n = 2;
bool isprime = true;

for(int i=2;i<=n-1;i++)
{
    if(n%2 == 0)
    {
        isprime = false;
        break;
    }
}
if(isprime == (true))
{
    cout<<"Prime Number\n";
}
else
{
    cout<<"Non-Prime Number\n";
}

//Nested Loop//

// for(int i=1;i<=5;i++)
// {
//     int m = 5;
//     for(int i=1;i<=m;i++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
return 0;
}






