#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        char ch[n];
        for(i=0;i<n;i++)
        cin>>ch[i];
        int count[26]={0};
        for(i=0;i<n;i++)
        {
            int k=ch[i];
            count[ch[i]-97]++;
        }
        int max=count[0];
        char k=0+97;
         for(i=1;i<26;i++)
        {
            if(count[i]>max)
            {
                max=count[i];
                k=i+97;
            }
        }
        if(max>1)
        {
            cout<<k<<" "<<max<<endl;
        }
        else
        cout<<"no duplicates present"<<endl;
    }
}