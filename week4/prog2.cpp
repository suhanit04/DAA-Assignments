#include<iostream>
using namespace std;
void swap(int a[],int i,int j)
{
    int k=a[i];
    a[i]=a[j];
    a[j]=k;
}
int partition(int a[],int l,int r)
{
    int pi=a[r];
    int i=l-1;
    int j;
    for(j=l;j<r;j++)
    {
        if(a[j]<pi)
        {
            i++;
            swap(a,i,j);
        }
    }
    swap(a,i+1,j);
    return i+1;
}
void quick(int a[],int l,int r)
{
    if(l<r)
    {
        int p=partition(a,l,r);
        quick(a,l,p-1);
        quick(a,p+1,r);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i,l=0,r=n-1;
        for(i=0;i<n;i++)
        cin>>a[i];
        quick(a,l,r);
        for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
}