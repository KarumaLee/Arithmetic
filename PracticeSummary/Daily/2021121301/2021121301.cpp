#include <iostream>
#include <cmath>
using namespace std;

int n;
int pic[2050][2050]={'x'};

void dfs(int x, int y, int s)
{
    if(s==1)
    {
        pic[x][y]='/';
        pic[x][y+1]='_';
        pic[x][y+2]='_';
        pic[x][y+3]='\\';
        pic[x-1][y+1]='/';
        pic[x-1][y+2]='\\';
    }
    else
    {
        dfs(x,y,s-1);
        dfs(x,y+(int)pow(2,s),s-1);
        dfs(x-(int)pow(2,s-1),y+(int)pow(2,s-1),s-1);
    }
}

int main()
{
    cin >> n;
    for(int i=0; i<2050; i++)
    {
        for(int j=0; j<2050; j++)
        {
            pic[i][j] = ' ';
        }
    }
    int len=(int)pow(2,n);
    dfs(len,1,n);
    for(int i=1; i<=len; i++)
    {
        for(int j=1; j<=2*len; j++)
        {
            printf("%c",pic[i][j]);
        }
        printf("\n");
    }
    return 0;
}