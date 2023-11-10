#include <iostream>
#include <set>
#include <utility>
using namespace std;
int main()
{
   long long N,Q;
   cin>>N>>Q;

   set<pair<long long,long long>> follows;
   for(long long i{};i<Q;i++){
       long long type,A,B;
       cin>>type>>A>>B;
       if(type==1){
           follows.emplace(A,B);
       }
       else if(type==2){
           follows.erase({A,B});
       }
       else{
           cout<<(follows.count({A,B})&&follows.count({B,A})?"Yes":"No")<<endl;
       }
   }
}
