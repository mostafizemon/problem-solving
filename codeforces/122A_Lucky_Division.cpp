#include<bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin>>input;
    vector<int> lucky_number= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<lucky_number.size(); i++)
    {
        if(input%lucky_number[i]==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }

    }

    cout<<"NO"<<endl;

}
