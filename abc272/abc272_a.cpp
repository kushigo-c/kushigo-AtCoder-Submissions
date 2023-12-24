#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int N,ans=0;
    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        ans+=a;
    }
    cout<<ans<<endl;
}
