#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,key;
        cin>>n;
        int i;
        vector<int> a;
        for(i=0;i<n;i++)
        {
            int c;
            cin>>c;
            a.push_back(c);
        }
        cin>>key;
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int t=0;
        while(l<r)
        {
            if(a[l]+a[r]==key)
            {
                cout<<a[l]<<" "<<a[r]<<",";
                t=1;
                r--;
            }
            else if(a[l]+a[r]<key)
            l++;
            else
            r--;
        }
        cout<<endl;
        if(!t)
        {
            cout<<"no such pair exist"<<endl;
        }
        
    }
}