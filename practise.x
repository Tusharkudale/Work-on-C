#include<stdio.h>
void recdfs(int m[5][5],int v,int n)
{
    int w;
    static int visited[20]={0};
    visited[w]=1;
    printf("v%d",v+1)
    for(w=0;w<n;w++)
    {
    if((m[v][w]==-1)&&(visited[w]==0))
    recdfs(m,n,v)
    }
}
int main()
{
    int m[5][5]={{0,1,0,1,0},{0,1,0,0,0},{0,1,1,1,0},{0,1,1,1,1},{0,0,0,0,0},};
    printf("\n the dfs traverse is:");
    recds(m,5,0);
}