#include<stdio.h>
#define size 9
int adj_mat[size][size];
int vis [size];
struct queue1
{
    int a[size];
    int front,rear;
}q1;
void enqueue(int x)
{
    if(q1.front==-1)
    {
        q1.front++;
        q1.rear++;
        q1.a[q1.front]=x;
        return;
    }
    q1.rear++;
    q1.a[q1.rear]=x;
    return;
}

int dequeue()
{
    int t;
    t=q1.a[q1.front];
    q1.front++;
    return t;
}

void bfs(int s)
{
    int p;
    enqueue(s);
    vis[s]=1;
    p=dequeue();
    if(p!=0)
    printf("%d\t",p);
    
    while(p!=0)
    {
        for(int i=1;i<=size;i++)
        {
            if(adj_mat[p][i]==1&&vis[i]==0)
            {
                enqueue(i);
                vis[i]=1;
            }
        }
        p=dequeue();
        if(p!=0)
        printf("%d\t",p);
    }
}


void main()
{
    int node,edges,sp,ep,sv;
    
    q1.front=-1;
    q1.rear=-1;

    printf("hello bfs queue");
    printf("\nhow many nodes :");
    scanf("%d",&node);

    printf("\nhow many edges :");
    scanf("%d",&edges);

    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            adj_mat[i][j]=0;
        }
    }

    for(int i=0;i<size;i++)
    {
        vis[i]=0;
    }

    for(int i=1;i<=edges;i++)
    {
        printf("\nenter  the start point:");
        scanf("%d",&sp);

        printf("\nenter  the end point:");
        scanf("%d",&ep);

        adj_mat[sp][ep]=1;
        adj_mat[ep][sp]=1;

    }

    printf("\n Adjaceny Matrix");
    for(int i=1;i<=size;i++)
    {
        printf("\n");
        for(int j=1;j<=size;j++)
        {
            printf("%d\t",adj_mat[i][j]);
        }
    }

    printf("\nenter  the source vertex:");
    scanf("%d",&sv);
    bfs(sv);
}