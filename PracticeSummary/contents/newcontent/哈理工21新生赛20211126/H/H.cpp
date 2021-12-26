#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int len;
    cin >> len;
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int maxx=0,minn=0;
    for(int i=0; i<n; i++)
    {
        minn = max(minn,min(a[i],len-a[i]));
        maxx=max(maxx,max(a[i],len - a[i]));
    }
    cout << minn << " " << maxx << endl;
	return 0;
}