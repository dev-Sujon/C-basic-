#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {31,20,14,22,6};
    int i= 0, sum = 0, n = 5;
    cout << "Array element is : ";
    while(i < n)
    {
        cout << arr[i] ;
        sum = sum + arr[i];
        i++;
    }
   cout <<"\nSum of the Array : " << sum << endl;
    return 0;
}
