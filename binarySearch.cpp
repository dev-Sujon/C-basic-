#include<iostream>
using namespace std;
int main()
{
   int arr[10]={6,8,12,17,20,22,15,28,30,35};
   int l=0,h=9,key,mid;
   cout << "Enter Key : ";
   cin >> key;
   while(l <= h)
   {
       mid = (l+h)/2;
       if(key == arr[mid])
       {
           cout << "Found at " << mid+1;
           return 0;
       }
       else if(key < arr[mid])
       {
           h= mid -1;

       }
       else{
        l = mid + 1;

       }
   }
    cout << "Not Found.";
    return 0;
}
