#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    set<char> pangram;

    for(int i=0; i<n; i++)
    {
        pangram.insert(tolower(str[i]));

    }

    if(pangram.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}
