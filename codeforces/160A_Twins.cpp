#include<bits/stdc++.h>
using namespace std;

int main()
{

    int numOfCoin;
    int coin;
    cin>>numOfCoin;
    int sum = 0;

    vector<int> coins;

    for(int i=0; i<numOfCoin; i++)
    {
        cin>>coin;
        sum +=coin;
        coins.push_back(coin);
    }
    sum=sum/2;
    int sum2=0;
    sort(coins.rbegin(),coins.rend());

    for (int i = 0; i < numOfCoin; i++)
    {
        sum2+=coins[i];
        if(sum<sum2)
        {
            cout<<i+1<<endl;
            break;
        }




    }
    return 0;

}
