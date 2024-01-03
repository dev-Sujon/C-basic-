#include<iostream>
using namespace std;
int main()
{
    int numArr[5]={5,3,1,8,10};
    double douArr [5] = {5.26548,45.454545,2.1254,256.256652,2.3565};
    char charArr [5] = {'s','u','j','o','n',};
    string strArr[2]={"sujon", "Jakir"};
    float floatArr[5]={1.2f ,3.5f,45.99f,4.445f,45.5f};
    cout << "...........\\\Display over element over forEach : " << endl;

     cout << endl <<"array of integer number: " ;
     for(auto i:numArr)
     {
         cout << i ;
         cout << " ";
     }
     cout << endl;

    cout << endl <<"array of double number: " ;
    for(auto dub:douArr )
    {
        cout << dub;
        cout << " ";
    }
    cout << endl;

    cout << endl <<"array of floating number: " ;
    for(auto f:floatArr){
        cout << f;
        cout << " ";
    }
    cout << endl;

    cout << endl<< "array of character : ";
    for(auto character:charArr)
    {
        cout << character;
        cout << "";
    }
    cout << endl;
    cout << endl<< "array of character : ";
    for(auto str:strArr)
    {
        cout << str;

    }
    cout << endl;


  return 0;
}
