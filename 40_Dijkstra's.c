#include<stdio.h>
#include"mygraph.h"

void read_matrix(int a[][4],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
}

void display_matrix(int a[][4],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
    }
}


int main()
{
    int n,ch,x,y,w;
    printf("Enter no of vertices\n");
    scanf("%d",&n);
    int a[n][n],i,j,dist[n],pi[n];
    printf("Enter weights\n");
    //making all elements of matrix zero.
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=0;
    }//taking weights of connected edges.
    do{
        printf("\nEnter 1 to enter weight else 0\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("\nEnter two vertices bw which edge is connected\n");
            scanf("%d%d",&x,&y);
            printf("\nEnter weight\n");
            scanf("%d",&w);
            a[x][y]=w;
            a[y][x]=w;
        }
          else if(ch==0)
            break;
    }while(1);
    //printing matrix
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
    }
    initialize(disp,pi,n);
    //initialize
    /*
    dist[0]=0;
    pi[0]=-1;
    for(i=1;i<n;i++)
    {
        dist[i]=999999;
        pi[i]=-1;
    }
    */
    //Relaxation
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                relax(i,j,a[i][j],dist,pi);
            }
        }
    }
    
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",dist[i]);
    }
    printf("\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",pi[i]);
    }

}
//Relax
void relax(int u,int v,int w,int dist[],int pie[])
{
    if(dist[v]>(w+dist[u])){
        dist[v]=w+dist[u];
        pie[v]=u;
    }
}
