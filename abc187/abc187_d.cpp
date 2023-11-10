#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   long long N;
   cin>>N;
   long long diff=0;
   vector<long long> x(N);
   for(long long i=0;i<N;i++){
        long long A,B;
        cin>>A>>B;
        diff-=A;
        x[i]=A+A+B;
   }
   sort(x.begin(),x.end());
   long long ans=0;
   while(diff<=0){
       diff+=x.back();
       x.pop_back();
       ans++;
   }
   cout<<ans<<endl;
}
