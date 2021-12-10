#include <iostream>
using namespace std;
#define N 20

int n;
char g[N][N]={'0'};
bool row[N],dl[N],udl[N]={false};

void output()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) cout << g[i][j];
        cout << endl;
    }
    cout << endl;
}

void dfs(int l,int s)
{
    if(l==n)
    {
        output();
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(row[i]==false && dl[l+i]==false && udl[n-l+i]==false)
        {
            g[l][i]='Q';
            row[i]=dl[l+i]=udl[n-l+i]=true;
            dfs(l+1,s+1);
            row[i]=dl[l+i]=udl[n-l+i]=false;
            g[l][i]='.';
        }
    }
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            g[i][j]='.';
    
    dfs(0,0);
    return 0;
}