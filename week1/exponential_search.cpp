#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
     {
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
        cin>>k;
        int flag=0,c=0;
        if(a[0]==k){
          c++;
          cout<<"Present "<<c;
        }
        else
         c++;
        int i=1;
        while(i<n&& a[i]<=k)
        {
            c++;
            i=i*2;
        }
        int mid, beg=i/2, e=min(i,n-1);
        while(beg<=e)
      {
         mid=(beg+e)/2;
         if(a[mid]==k)
         {
             c++;
             cout<<"Present "<<c<<endl;
             flag=1;
             break;

         }
         else if(k<a[mid])
             {c++;
             e=mid-1;}
        else
             {c++;
             beg=mid+1;}
      }
     if(flag==0)
        {cout<<"Not Present ";
        cout<<c<<endl;}
        t--;
     }
return 0;

}