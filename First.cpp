#include<iostream>
using namespace std;
int main()
{
    int i,n,s=0;
    int avg1, avg2;
    cout<<"Input the value of n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    cout<<"sum of first 5 natural number="<<s<<endl; 
    avg1=s/n;
    avg2=s%n;
    cout<<"avg quotient="<<avg1<<endl;
    cout<<"avg remainder"<<avg2;
   
    return 0;
}
