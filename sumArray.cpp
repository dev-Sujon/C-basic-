#include<iostream>
using namespace std;
int main()
{
    int arr[7]= {4,8,6,9,5,2,7};
    int n=7,sum = 0;
    cout << "Array element is : " << "[ " ;
     for(auto x:arr)
     {
         cout << x ;
         cout << " ";
         sum = sum + x;
     }
     cout << "]";
     cout << endl << "Sum of the array : " << sum ;
    return 0;
}
