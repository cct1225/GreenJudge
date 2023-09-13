#include<iostream>
using namespace std;
int main()
{
    int n,T[501],M[501][501],m,V[501],D[501],i,j,k;
    cin>>n;//共有幾個機場
    for(i=1;i<=n;i++)
    {
        cin>>T[i];//轉機費用
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)    M[i][j]=0;
            else    M[i][j]=1000000;
        }
    }
    cin>>m;//路線
    int a,b,l;
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>l;
        M[a][b]=l;
        M[b][a]=l;
    }
    //Dijkstra
    for(i=0;i<=n;i++)
    {
        V[i]=0;
        D[i]=1000000;
    }
    D[1]=0;
    while(1)
    {
        for(i=1,k=0;i<=n;i++)
        {
            if(V[i]==0&&D[i]<D[k])
            {
                k=i;
            }    
        }
        if(k==0)    break;
        V[k]=1;
        for(i=1;i<=n;i++)
        {
            if(D[k]+M[i][k]+T[i]<D[i])
            {
                D[i]=D[k]+M[i][k]+T[i];
            }
        }
    }

    if(D[n]==1000000)  cout<<"-1";
    else    cout<<D[n];
}