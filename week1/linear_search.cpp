#include<iostream>
using namespace std;
int  main()
{

    cout<<"Enter the number of test cases"<<endl;
    int t;
    cin>>t;
    while(t>0)
    {
    int i,n,k,c=0,flag=0;
    cout<<"enter size of array: "<<endl;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
     cin>>A[i];
    cout<<"Enter key element: "<<endl;
    cin>>k;
    for(i=0;i<n;i++)
     {
         c++;
         if(A[i]==k)
         {
         cout<<"Present ";
         cout<<c<<endl;
         flag=1;
         }
     }
         if(flag==0){
         cout<<"Not Present ";;
         cout<<c;
         }
         t--;
    }
}
