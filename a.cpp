#include<bits/stdc++.h>
#define int long long 
using namespace std;
void begin(){
    //Write your code here
    int s,x,y,z;
    cin>>s>>x>>y>>z;
    int rem=(s-(x+y));
    if(z<=rem)
    {
        cout<<0<<"\n";
        return;
    }
    else
    {
        rem+=max(x,y);
        if(rem>=z)
        {
            cout<<1<<"\n";
            return;
        }
        else{
            cout<<2<<"\n";
            return;
        }
    }


    return;
}
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        begin();
    }
    return 0;
}
