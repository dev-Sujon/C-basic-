#include<iostream>
using namespace std;
int main()
{
   int A[2][3]={2,2,2,2,2,2};
   int B[2][3]={1,1,1,1,1,1};
   int add[2][3];

   for(int i=0; i<2;i++)
   {
       for(int j=0;j<3;j++)
       {
           add[i][j] = A[i][j]+B[i][j];
       }
   }
   for(int i=0; i<2; i++)
   {
       for(int j=0; j<3;j++)
       {
           cout << add[i][j] <<" ";
       }
       cout << "\n";
   }

    return 0;
}
