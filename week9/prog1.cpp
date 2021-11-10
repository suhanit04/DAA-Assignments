#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void floyd_warshall(vector<int>  *g,int v)
{
    vector<int> *d=g;
    int i,j,k;

    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            for(k=0;k<v;k++)
            {
                if(d[i][k]!=INT_MAX && d[k][j]!=INT_MAX)
                if(d[i][j]>d[i][k]+d[k][j])
                d[i][j]=d[i][k]+d[k][j];
            }
        }
    }

    cout<<endl<<"Shortest distance matrix :\n";
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(d[i][j]==INT_MAX)
            cout<<"inf ";
            else
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int v;
    cin>>v;

    vector<int> g[v];
    int i,j;

    for(i=0;i<v;i++)
    for(j=0;j<v;j++)
    {
        string x;
        cin>>x;
        if(x=="inf")
        g[i].push_back(INT_MAX);
        else
        g[i].push_back(stoi(x));
    }

    floyd_warshall(g,v);

    return 0;
}