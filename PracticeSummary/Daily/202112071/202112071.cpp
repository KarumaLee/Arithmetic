#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,j;
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(i=0; i<str.length(); i++)
    {
        str[i] = (str[i]-'a'+n)%26+'a';
        // -'a' 将字符转换为字母序列，例如a的序列为0，b的序列为1
        // +n   将字母序列进行移动
        // %26  将移动后的序列取模，防止溢出
        // +'a' 将转换后的字母序列变回字符
    }
    cout << str << endl;
    return 0;
}