#include <iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 1005;
int n;
string s;
bool parolime(int k)
{
    for(int i = k, j = n-1; i < j; i++,j--)
    {
        if(s[i] != s[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin>>s;
    n = s.length();
    int i;
    for( i = 1; i < n; ++i)
    {
        if(parolime(i))
        {
            break;
        }
    }
    cout<<s;
    for(int j = i-1; j >= 0; --j)
    {
        cout<<s[j];
    }
    cout<<endl;
    return 0;
}