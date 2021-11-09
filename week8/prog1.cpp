#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(int u,int *parent)
{
    if(parent[u]<0)
    return u;

    return find(parent[u],parent);
}

void UnionByWeight(int u,int v,int *parent)
{
    int pu=find(u,parent);
    int pv=find(v,parent);
    if(pu!=pv)
    {
        if(pu<pv)
        {
            parent[pu]+=parent[pv];
            parent[pv]=pu;
        }
        else
        {
            parent[pv]+=parent[pu];
            parent[pu]=pv;
        }
    }
}

int kruskals(vector<int> *g,int v)
{
    int i,j;
    int cost=0;
    vector<vector<int>> dis;
    for(i=0;i<v;i++)
    for(j=i+1;j<v;j++)
    {
        if(g[i][j]==0)
        continue;
        dis.push_back({g[i][j],i,j});
    }

    sort(dis.begin(),dis.end());

    int parent[v];
    for(i=0;i<v;i++)
    {
        parent[i]=-1;
    }

    int e=dis.size();
    for(i=0;i<e;i++)
    {
        int s=dis[i][1];
        int d=dis[i][2];
        int c=dis[i][0];
        if(find(s,parent)!=find(d,parent))
        {
            UnionByWeight(s,d,parent);
            cost+=c;
        }
    }
    return cost;
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
        int x;
        cin>>x;
        g[i].push_back(x);
    }

    int cost=0;
    cost=kruskals(g,v);

    cout<<"Minimum Spanning Weight : "<<cost;

    return 0;
}