#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,key,c=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>key;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(abs(a[i]-a[j])==key)
                 c++;
            }
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}