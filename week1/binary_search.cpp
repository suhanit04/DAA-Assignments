#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0)
{
int n,k,flag=0;
cin>>n;
int mid,beg=0,e=n-1;
int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
       int c=0;
      while(beg<=e)
      {
         c++;
         mid=(beg+e)/2;
         if(a[mid]==k)
         {
             cout<<"Present "<<c;
             flag=1;
             break;

         }
         else if(k<a[mid])
             e=mid-1;
        else
             beg=mid+1;
      }
     if(flag==0)
        {cout<<"Not Present ";
        cout<<c<<endl;}
        t--;
}
return 0;

}
