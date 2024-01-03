#include<iostream>
using namespace std;
int main()
{
    int tree[10] = {15,19,87,654,784,795,859,868,875,958};
    int key,mid,low,high;
   low = 0;
   high = 9;

    cout << "Binary Search -->\n";
    cout << "Enter key : \n";
    cin >> key;
    while(low <= high)
    {
        mid = (low + high)/2;
      if(key == tree[mid]){
        cout << "Found  at : " << mid;
        return 0;
      }
      else if(key < tree[mid])
      {
          high = mid - 1;
      }
      else{
         low = mid + 1;
      }
    }
    cout << "Not found";
    return 0;
}
