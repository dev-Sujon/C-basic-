#include<iostream>
using namespace std;
int main()
{
    int arr[7]={4,8,6,9,5,2,7};
    int i=0,n=7,max;
    max = arr[0];
    cout << "Array elements are : [ ";
    while(i<n)
    {
        cout << arr[i];
        if(arr[i]> max)
        {
            max = arr[i];
        }
        cout << " ";
        i++;
    }
    cout << "]\nMaximun number is: "<< max;

    return 0;
}
