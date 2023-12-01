#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long N;
    cin>>N;
    long long ans=(1ll<<60);
    for(int i=0;i<=60;i++){
        long long a=N/(1ll<<i);
        long long b=i;
        long long c=N-a*(1ll<<i);
        ans=min(ans,a+b+c);
    }
    cout<<ans<<endl;
}
