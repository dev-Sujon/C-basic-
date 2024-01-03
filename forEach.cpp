#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {20,30,10,5,64,20,33,596,2,90};
    cout << endl <<"array element is : " ;
    for(auto &y:arr )
    {
        cout <<  2+y;
        cout << " " ;
    }
    cout << endl;
    return 0;
}
