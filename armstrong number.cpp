#include<iostream>
using namespace std;
int main()
{
int num,originalNum,remainder result=0;
cout<<"enter a three digit integer = ";
cin>>num;
originalNum=num;
while(originalNum!=0)
{
remainder=originalNum%10;
result+=remainder*remainder*remainder;
originalnum/=10;
}
if(result==num && num>1)
    cout<<num<<"is an armstrong number";
if(result!=num)
    cout<<num<<"is not a armstrong number";
else
    cout<<"invalid";
return 0;
}
