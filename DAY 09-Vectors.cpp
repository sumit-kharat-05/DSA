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

    vector<char> vec = {
        'S',
        'U',
        'M',
        'I',
        'T',
    };

    cout << "Size =" << vec.size() << endl;
    vec.push_back('K');
    cout << "Size =" << vec.size() << endl;
    vec.push_back('H');
    cout << "Size =" << vec.size() << endl;
    vec.push_back('A');
    cout << "Size =" << vec.size() << endl;
    vec.push_back('R');
    cout << "Size =" << vec.size() << endl;
    vec.push_back('A');
    cout << "Size =" << vec.size() << endl;
    vec.push_back('T');
    cout << "Size =" << vec.size() << endl;
    vec.pop_back();
    cout << "Size =" << vec.size() << endl;
    cout << "Capacity =" << vec.capacity() << endl;
     cout << "Empty =" << vec.empty() << endl;
     cout<< "Front Element ="<<vec.front()<<endl;
     cout<< "Back Element ="<<vec.back()<<endl;
     cout<< "Index Element ="<<vec.at(4)<<endl;
    for (char val : vec)
    {
        cout << val << endl;
    }

    return 0;
}