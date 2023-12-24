#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> odd,even;
    for(int i=0;i<N;i++){
        int a;cin>>a;
        if(a&1){
            odd.push_back(a);
        }
        else{
            even.push_back(a);
        }
    }
    sort(odd.rbegin(),odd.rend());
    sort(even.rbegin(),even.rend());
    int ans=-1;
    if(odd.size()>1)ans=max(ans,odd[0]+odd[1]);
    if(even.size()>1)ans=max(ans,even[0]+even[1]);
    cout<<ans<<endl;
}
