#include<iostream>
using namespace std;
int main()
{
    //taking input 2d array from keyboard
    int row,clm,x,z;
    cout<<"row : ";
    cin>>row;
    cout<<"column : ";
    cin>>clm;
    int arr[row][clm];
   // rwo = x and cloumn = z;
    
    for(x=0;x<row;++x){
        cout<<"Row:"<<x+1<<endl;
        for(z=0;z<clm;++z){
            cout<<"column:"<<z+1<<":";
            cin>>arr[x][z];
        }
    }
    cout<<"matrix form : "<<endl;
        for(x=0;x<row;++x){
        for(z=0;z<clm;++z){
            cout<<arr[x][z] << "  ";
        }
        cout<<endl;
        }
    return 0;
}