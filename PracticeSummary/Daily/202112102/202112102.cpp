#include <iostream>
using namespace std;
#define N 9

int n;
int res[N+1]={0};
bool sta[N+1]={false};

void output()
{
    for(int i=0; i<n; i++) printf("%5d",res[i]);
    cout << endl;
}

void dfs(int s)
{
    if(s==n)
    {
        output();
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(sta[i]==false)
        {
            res[s]=i;
            sta[i]=true;
            dfs(s+1);
            sta[i]=false;
        }
    }
}

int main()
{
    cin >> n;
    dfs(0);
    return 0;
}