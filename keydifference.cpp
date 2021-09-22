#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter test cases=";
    int T;cin>>T;
    for(int t=0;t<T;t++)
    {
    cout<<"Enter the limit of array=";
    int n;cin>>n;
    int a[n];
    cout<<"Enter array elements=";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter Key element=";
    int key;cin>>key;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]-a[j]==key || a[j]-a[i]==key)
                c++;
        }
    }
    cout<<c;
}
return 0;
}
