#include<iostream>
using namespace std;
int main()
{
    int arr[7]={4,-1,-10,0,2,3,6};
    int i=0,n=7,min;
    min = arr[0];
    cout << "Array element is : [ ";
    while(i < n)
    {
        cout << arr[i];
        cout << " ";
        if(arr[i] < min)
        {
            min = arr[i];
        }
        i++;
    }
    cout << "]\nMinimum number is :" << min ;
    return 0;
}
