#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;


    int zero=0;
    int one=0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='1')
        {
            one++;
            zero=0;
        }
        else
        {
            zero++;
            one=0;
        }
        if(zero==7 || one==7)
        {
            cout<<"YES"<<endl;
            return 0;
        }


    }


    cout<<"NO"<<endl;







    return 0;
}
