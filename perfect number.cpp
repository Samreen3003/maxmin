#include<iostream>
using namespace std;
bool isPerfect(long long int n)
{
long lng int sum=1;
for(long long inti=2;i*i<=n;i++)
{
   if(n%i==0)
   {
       if(i*i!=n)
            sum=sum+i+n/i;
        else
            sum=sum+i;
    }
}if(sum==n && n!=1)
    return true;
return false;
int main()
{
int z;
cout<<"enter:"<<z;
cin>>Z;
cout<<"all perfect numbers in\n";
for(int n=1;n<=z;n++)
     if(isPerfect(n))
          cout<<n<<"is a perfect number \n";
return 0;
}  
