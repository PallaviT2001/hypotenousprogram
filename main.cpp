#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;
    int hypotenous;
    cout<<"enter 2 sides of a right angle triangle value"<<endl;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    hypotenous=sqrt((a*a)+(b*b));
    cout<<"hypotenous is"<<hypotenous<<endl;


}
