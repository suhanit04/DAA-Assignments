#include<iostream>
using namespace std;
void sum(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int start=0;
        int last=n-1;
        while(start<last)
        {
            if(a[start]+a[last]==a[i])
            {

                cout<<start+1<<","<<last+1<<","<<i+1<<endl;
                return;
            }
            else if(a[i]>a[start]+a[last])
                start++;
            else
                last--;
        }
    }
    cout<<"No Sequence Found"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sum(a,n);
        t--;
    }
    return 0;
}