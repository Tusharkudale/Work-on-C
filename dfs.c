#include<stdio.h>
void recdfs(int m[5][5],int n,int v)
{
    int w;
    static int visited[20]={0};
    visited[v]=1;
    printf("v%d",v+1);
    for(w=0;w<n;w++)
    {
        if((m[v][w]==-1)&&(visited[w]==0))
        recdfs(m,n,w);
    }
}
int main()
{
    int m[5][5]={{0,0,0,1,0},{0,0,1,0,1},{0,1,0,1,0},{0,0,0,0,1},{0,0,0,0,0}};
    printf("\nthe dfs traverse is:");
    recdfs(m,5,0);
}
