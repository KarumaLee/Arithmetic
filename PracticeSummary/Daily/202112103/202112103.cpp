#include <iostream>
#include <math.h>
using namespace std;
#define N 9

int n,k;
int cnt=0;
int num[N]={0};
int res[N]={0};
bool sta[N]={false};

bool isPrime(int x)
{
    int s=sqrt(double(x));
    for(int i=2;i<=s;i++){
        if(x%i==0)return false;
    }
    return true;
}

void output()
{
    int sum=0;
    for(int i=0; i<k; i++) sum+=res[i];
    if(isPrime(sum)==true) cnt++;
}

void dfs(int s,int first)
{
    if(s==k)
    {
        output();
        return;
    }
    for(int i=first; i<n; i++)
    {
        if(sta[i]==false)
        {
            res[s]=num[i];
            sta[i]=true;
            dfs(s+1,i+1);
            sta[i]=false;
        }
    }
}

int main()
{
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> num[i];
    dfs(0,0);
    cout << cnt << endl;
    return 0;
}