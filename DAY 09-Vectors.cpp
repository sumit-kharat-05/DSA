// Vector//
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3};
//     cout << vec[0];

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     {
//     vector<int> vec(5, 5);
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     cout << vec[3] << endl;
//     cout << vec[4] << endl;
   
//     vector<int>vect(vec);
    
//     for(int x:vect)
//     {
//         cout<<x<<" ";
//     }
//     cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector<char> vec = {'S','U','M','I','T'};
    
    cout<<"Size"<<vec.size()<<endl;
    for(char val : vec)
    {
        cout<< val <<endl;
    }
   
    return 0;
}