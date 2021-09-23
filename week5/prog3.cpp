#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int j=0;
    i=0;
    vector<int> res;
    while(i<n && j<m)
    {
        if(a[i]==b[j])
        {
           
            //cout<<i<<" "<<j<<" "<<a[i]<<" "<<b[j]<<endl;
            res.push_back(a[i]);
             i++;
            j++;
        }
        else if(a[i]<b[j])
        i++;
        else
        j++;
    }
    if(res.size()==0)
    {
        cout<<"no common element";
    }
    else
    {
        for(i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
    }
}