#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,5,15,24,20,82,60,15,20,18};
    int n=10,i=0,max,min;
    max = arr[i];
    min = arr[i];
    while(i < n){
         cout << arr[i];
         cout << " ";
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if( arr[i] < min)
        {

            min = arr[i];
        }
        i++;
    }
    cout << "\nmaximum number : " << max << "\n";
    cout << "\nMinimum number : " << min << "\n";











    return 0;
}
