#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int> cubes;
    int a;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        cubes.push_back(a);
    }

    sort(cubes.begin(), cubes.end());
    for(int i=0; i<cubes.size(); i++)
    {

        cout<<cubes[i]<<" ";
    }
    return 0;
}
