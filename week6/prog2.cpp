#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool bfs(int v,vector<int> *graph)
{
    int color[v]={0};
    queue<int> q;
    int c=1;
    color[0]=c;
    q.push(0);

    while(!q.empty())
    {
        int i;
        int curr=q.front();
        q.pop();
        c=color[curr]*-1;
        if(graph[curr][curr])
            return false;
        for(i=0;i<v;i++)
        {          
            int x=graph[curr][i];
            if(x==0)
            continue;
            if(!color[i])
            {
                color[i]=c;
                q.push(i);
            }
            else if(color[i]!=c)
            return false;
        }
    }
    return true;
}

int main()
{
    int i,j,x;
    int v;
    cin>>v;

    vector<int> graph[v];
    for(i=0;i<v;i++)
    for(j=0;j<v;j++)
    {
        cin>>x;
        graph[i].push_back(x);
    }

    if(bfs(v,graph))
    cout<<"Yes Bipartite";
    else
    cout<<"Not Bipartite";
    return 0;
}