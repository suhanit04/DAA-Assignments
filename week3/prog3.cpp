#include <iostream>

using namespace std;

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
        int temp=0,j,index;
        int comparison=0,swaps=0;
        for(int i=0;i<n-1;i++)
        {       
                  index=i;
            for( j=i+1;j<n;j++)
            {
                if(a[index]>a[j])
            
                index=j;
                comparison++;
            }
            temp=a[index];
            a[index]=a[i];
            a[i]=temp;
            swaps++;
            
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
        cout<<"comparison"<<comparison<<endl;
        cout<<"swaps"<<swaps<<endl;
       t--; 
    }
    return 0;
    
}