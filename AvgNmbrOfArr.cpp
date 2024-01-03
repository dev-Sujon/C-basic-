#include<iostream>
using namespace std;
int main()
{
 int n,i=0;
 float arr[100],sum=0.0,avg;
 cout << "Enter the number of element : ";
 cin >> n;
 while(i<n){

     cout << i + 1 << ". Enter number : ";
     cin >> arr[i];
     sum += arr[i];
    i++;
 }
 avg = sum /n;
 cout << "Avarage : " << avg;

    return 0;
}
