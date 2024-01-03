#include<iostream>
using namespace std;
int main()
{
    
    int A[]= {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    float Arr[]={1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5};

    char charArray[]={ 'M','y',' ','n','a','m','e',' ','i','s',' ','s','u','j','o','n','.' };

    cout << "Array in integer value" << endl;
    for(auto x:A)
    {
        cout << x << endl;
    }

    cout << "Array in floating value" << endl;
    for(float y:Arr){
     cout << y << endl;   
    }

   cout << "Array in character  value" << endl;
   for(auto c:charArray)
    {
        cout << c ;
    }

    return 0;
}