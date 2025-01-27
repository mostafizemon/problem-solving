#include<iostream>
using namespace std;
int main()
{

    int n;
    int x,y,z;
    int sum_of_x=0,sum_of_y=0,sum_of_z=0;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>> x >>y >>z;
        sum_of_x +=x;
        sum_of_y +=+y;
        sum_of_z +=z;
    }
    if(sum_of_x==0 && sum_of_y==0 && sum_of_z==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}
