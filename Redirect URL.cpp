///solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,j,sz,m;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        cin>>s;
        sz=s.size();
        cout<<"Case "<<j<<": ";
        if(s[4]=='s')
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"https";
            for(i=4;i<sz;i++)cout<<s[i];

            cout<<endl;
        }

    }

    return 0;
}
