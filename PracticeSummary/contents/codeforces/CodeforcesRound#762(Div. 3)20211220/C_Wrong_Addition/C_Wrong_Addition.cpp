#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
typedef long long LL;

void solve()
{
    LL a,s;
    cin >> a >> s;
    vector<int> b;
    while(s!=0)
    {
        int aa = a%10;
        int ss = s%10;
        if(ss >= aa) b.push_back(ss-aa);
        else
        {
            s/=10;
            ss = ss + (s%10)*10;
            if(ss>aa && ss>=10 && ss<=19) b.push_back(ss-aa);
            else
            {
                cout << "-1" << endl;
                return;
            }
        }
        s/=10;
        a/=10;
    }
    if(a!=0) cout << "-1" << endl;
    else
    {
        while(b.back()==0) b.pop_back();
        for(int i=b.size()-1; i>=0; i--) cout << b[i];
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}