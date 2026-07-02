// #include<iostream>
// using namespace std;

// int main()
// {

// int marks[5] = {100,85,96,87,90};
//     int size=5;

//     for(int i=0; i<size; i++)
//     {
//         cout<<marks[i]<<endl;
//     }

    // Que1:- Find Smallest And Largest Number in Array//
//     int nums[]={5,15,22,1,-15,-24};
//     int size=6;
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if(nums[i]<smallest)
//         {
//             smallest = nums[i];
//         }
//         if(nums[i]>largest)
//         {
//             largest = nums[i];
//         }
//     }
//     cout<<"Smallest: "<<smallest<<endl;
//     cout<<"Largest:"<<largest<<endl;



//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
   
    // Que2:- Find Smallest And Largest Number in Array with Index Not Value//
//     int nums[]={5,15,22,1,-15,-24};
//     int size=6;
//     int smallestIndex = INT_MAX;
//     int largestIndex = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if(nums[i]<smallestIndex)
//         {
//             smallestIndex = i;
//         }
//         if(nums[i]>largestIndex)
//         {
//             largestIndex = i;
//         }
//     }
//     cout<<"SmallestIndex: "<<smallestIndex<<endl;
//     cout<<"LargestIndex:"<<largestIndex<<endl;
    
//     return 0;
// }



// #include<iostream>
// using namespace std;


// Que3:- LinearSearch In Array (Part 1)//
// int linearSearch(int arr[], int sz,int target)
// {
//     for(int i=0;i<sz;i++)
//     {
//         if(arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
    // Que3:- LinearSearch In Array (Part 2)//
//     int arr[] = {4,2,7,8,1,2,5};
//     int sz=7;
//     int target = 8;

//     cout<<linearSearch(arr,sz,target)<<endl;

//      return 0;
// }



#include<iostream>
using namespace std;


//Que4:- Swapping Two Numbers In Array (Part 1)//
void reverseArray(int arr[], int sz)
{
    int start = 0 , end = sz-1;

    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{

  //Que4:- Swapping Two Numbers In Array (Part 2)//
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;

    reverseArray(arr,sz);

    for(int i=0; i<sz; i++)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
    return 0;
}