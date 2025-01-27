#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,partitionValue;

    vector<int> even;
    vector<int> odd;

    cin>>n>>k;


    if(n%2==0)
    {
        partitionValue=n/2;
    }

    else
    {
        partitionValue=n/2+1;
    }


    if(k<=partitionValue)
    {
        cout<<(2*k)-1<<endl;
    }
    else
    {
        cout<<(k-partitionValue)*2<<endl;
    }





    return 0;
}
