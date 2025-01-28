#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> height;
    for(int i=0; i<n; i++)
    {
        int h;
        cin>>h;
        height.push_back(h);
    }
    int maxHeight=0,maxIndex=0;
    int minHeight=101,minIndex=n-1;

    for(int i=0; i<n; i++)
    {
        if(height[i]>maxHeight)
        {
            maxHeight=height[i];
            maxIndex=i;
        }
        if(height[i]<=minHeight)
        {
            minHeight=height[i];
            minIndex=i;
        }

    }

    if(maxIndex<minIndex)
    {
        cout<<maxIndex+(n-1)-minIndex<<endl;

    }
    else
    {
        cout<<maxIndex+(n-1)-minIndex-1<<endl;
    }



    return 0;
}
