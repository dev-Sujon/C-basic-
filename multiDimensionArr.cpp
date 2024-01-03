#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{1,3,5,7},{2,4,6,8},{5,7,2,4}};
    cout<< "["<<arr[0][0] <<" "<< arr[0][1]<<" "<< arr[0][2]<<" "<< arr[0][3]<<"]"<<endl;
    cout<< "["<<arr[1][0] <<" "<< arr[1][1]<<" "<< arr[1][2]<<" "<< arr[1][3]<<"]"<<endl;
    cout<< "["<<arr[2][0] <<" "<< arr[2][1]<<" "<< arr[2][2]<<" "<< arr[2][3]<<"]"<<endl;

    int row,clm;
    for(row=0;row<3;++row){
        for(clm=0;clm<4;++clm){
            cout<<arr[row][clm] << "\t";
        }
        cout<<endl;
    }
    return 0;
}