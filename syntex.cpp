#include<iostream>
using namespace std;
int main()
{
    int arr[10],n=10,key,i=0,k;
    cout << "Enter your number : ";
    while(i < n)
    {
        cin >> arr[i];
        i++;
    }
    cout << "\nEnter searching key : ";
    cin >> key;
    for(k=0; k < n ; k++)
    {
        if(key == arr[k])
        {
            cout << key <<" is found at : " << k+1;
            return 0;
        }

    }
    cout << key << " is not found.";

    return 0;
}
