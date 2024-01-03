#include<iostream>
using namespace std;
int main()
{
    int foo[10] = {10,25,62,14,-3,4,30,100,89,51};
    int tree[10] = {15,19,87,654,784,795,859,868,875,958};
    int key,mid,low,high,i=0,n=10,max,min;
    max = 0;
    min = 0;
    cout << "Linear Search -->\n";
    cout << "Enter key for linear Search : \n";
    cin >> key;
    while(i<n)
    {
        if(foo[i] == key)
        {
            cout << "found at " << i;
            return 0;
        }

        i++;
    }
    cout << "Not found";
    cout << "Enter key for binary search : ";
    cin >> key;


    return 0;
}
