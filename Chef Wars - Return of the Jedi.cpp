#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x ,y;
        cin>>x>>y;
        while(true)
        {
            x=x-y;
            y=y/2;
            if(x<=0)
            {
                cout<<"1"<<endl;
                break;
            }

            else if(y==0)
            {
                cout<<"0"<<endl;
                break;
            }
        }
    }
    return 0;
}
