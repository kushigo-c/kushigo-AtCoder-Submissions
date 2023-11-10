#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    vector<long> A(N);
    for(int i=0;i<N;i++)cin>>A[i];
    sort(A.begin(),A.end());
    A.push_back(9000000000000);
    long long res=0,r=0;
    for(int l=0;l<N;l++){
        while(A[r]<A[l]+M){
            r+=1;
        }
        res=r-l>res?r-l:res;
    }
    cout<<res<<endl;
}
