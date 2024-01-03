#include<iostream>
using namespace std;
int main()
{
     int arr[7]={22,50,38,70,56};
     int i=1,sum=0,n=7;
     while(i <= n)
     {
         sum = sum + arr[i];
         i++;
     }
    cout << "Sum of array is : " << sum ;


    return 0;
}
