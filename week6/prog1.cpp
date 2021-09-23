#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dfs(int s,int d,int v,vector<int> *graph)
{   
    bool visited[v]={false};
    
    stack<int> st;
    st.push(s);

    while(!st.empty())
    {
        int i,x;
        int curr=st.top();
        st.pop();
        visited[curr]=true;
        for(i=0;i<v;i++)
        {

            int x=graph[curr][i];
            if(x==0)
            continue;
            if(!visited[i])
            {
                st.push(i);
                visited[i]=1;
                if(i==d)
                {
                    cout<<"yes path exists";
                    return;
                }
            }
        }
    }
    cout<<"no such path exists ";
}

int main()
{
    int j,i;
    int v,s,d,x;
    cin>>v;
 
    vector<int> graph[v];
    for(i=0;i<v;i++)
    for(j=0;j<v;j++)
    {
        cin>>x;
        graph[i].push_back(x);
    }

    cin>>s>>d;

    dfs(s-1,d-1,v,graph);
    return 0;
}