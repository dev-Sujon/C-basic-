#include<iostream>
using namespace std;
int main()
{
    int arr[10],n=10,i=0,key;
    cout << "Enter numbers : ";
    while(i < n)
    {
        cin >> arr[i];
        i++;
    }
    cout << "\nEnter seach key : ";
    cin >> key;
    for(int k=0; k < n; k++)
    {
        if(key == arr[k])
        {
            cout << key << " is found at : " << k+1;
            return 0;
        }
    }
    cout << key << " is not found.";
    return 0;
}
