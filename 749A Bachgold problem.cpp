#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        int ans=n/2;
        cout<<ans<<endl;
        for(int i=0;i<ans;i++)
        {
            cout<<2<<" ";
        }
    }
    else if(n==3)
    {
        cout<<1<<endl;
        cout<<3<<endl;
    }
    else{
        n=n-3;
        int ans=n/2;
        cout<<ans+1<<endl;
        for(int i=0;i<ans;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
}
