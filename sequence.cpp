#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter number of testcases=";
    cin>>t;
    for(int h=0;h<t;h++){
       int n;
       cout<<"Enter the limit of array=";
       cin>>n;
       int a[n];
       int c=0;
       cout<<"Enter the elements of Array\n";
       for(int i=0;i<n;i++)
         cin>>a[i];
       for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
           for(int k=j+1;k<n;k++){
              if(a[i]+a[j]==a[k]){
                cout<<"Indices are="<<i+1<<","<<j+1<<","<<k+1<<endl;
                 c++;
                 break;

              }
            }
            if(c==1)
                break;
          }
          if(c==1)
            break;
       }
       if(c==0)
         cout<<"No sequence found";

    }
            return 0;
            }
