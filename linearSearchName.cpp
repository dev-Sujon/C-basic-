#include<iostream>
using namespace std;
int main()
{
    string nameArr[10]={"Sabrina","Shakil","Asif","Hafsa","Koli","Iqra","Sunny","Momtaz","Yogi","Neloy"};
    int n=10,i=0,keyName;
    cout << "\nEnter name : ";
    cin >> keyName;
    while(i<n)
    {
        if(keyName == nameArr[i]);
        {

            cout << "Found";
            return 0;
        }
        i++;
    }
    cout << "Not found."
    return 0;
}
