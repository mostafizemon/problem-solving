#include<iostream>
using namespace std;

int main()
{

    string str;
    cin>>str;
    int j=0;

    string output="hello";
    for(int i=0; i<str.size(); i++)
    {
        if(output[j]==str[i])
        {
            j++;
            if(j==5)
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }

    }
    cout<<"NO"<<endl;


    return 0;
}
