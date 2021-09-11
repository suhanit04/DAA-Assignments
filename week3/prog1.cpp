#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,j;
        cin>>n;
        int a[n];
        int value=0,temp1=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        int comparison=0,shift=0;
        for(int i=1;i<n;i++)
        {
            j=i;
            value=a[i];
            
            while(j>0&&a[j-1]>value){
                
        
             a[j]=a[j-1];
             shift++;
             comparison++;
            
            j--;
            }
            a[j]=value;
            shift++;
            
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
        cout<<"comparison"<<comparison<<endl;
        cout<<"shift"<<shift<<endl;
       t--; 
    }
    return 0;
    
}