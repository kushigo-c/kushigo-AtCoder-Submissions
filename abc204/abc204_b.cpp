#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++) cin>>A[i];
    int ans=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]>10)ans+=A[i]-10;
    }
    cout<<ans<<endl;
}
