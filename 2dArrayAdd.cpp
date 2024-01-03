#include<iostream>
using namespace std;
int main()
{
   int i,j;
   int A[2][3] = {{2,6,9},{7,3,6}};
   int B[2][3] = {{6,3,4},{9,5,2}};
   int C[2][3];
   for(i=0; i<2; i++)
   {
       for(j=0; j<3; j++)
       {
           C[i][j]= A[i][j] + B[i][j];
       }
   }
   for(auto& x:C)
   {
       for(auto& y:x)
       {
           cout << y << " ";
       }
       cout << "\n";
   }

    return 0;
}
