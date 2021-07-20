#include<iostream>
using namespace std;
int  main()
{
    int i,n,k,c=0,flag=0;
    cout<<"enter size of array: ";
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
     cin>>A[i];
    cout<<"Enter key element: ";
    cin>>k;
    for(i=0;i<n;i++)
     {
         c++;
         if(A[i]==k)
         {
         cout<<"Element found at index:"<<i<<endl;
         flag=1;
         cout<<"No. of Comparison:"<<c<<endl;
         break;
         }
     }
         if(flag==0)
         cout<<"Element not found"<<endl;

     }