#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t>0)
     {
        int n,k,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
          cin>>a[i];
        cin>>k;
        int flag=0;
        int s=sqrt(n);
        int m = s,beg=0;
       while(a[m]<=k&&m<n)
         {
            c++;
            beg=m;
            m=m+s;
         }
       for(int i=beg;i<m;i++)
        { 
            c++;
            if(a[i]==k)
             {
               cout<<"Present "<<c<<endl;
               flag=1;
               break;
             }
        }
    if(flag==0)
        cout<<"Not Present "<<c<<endl;
    t--;
}
return 0;
}
