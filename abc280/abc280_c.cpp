#include <iostream>
#include <string>
using namespace std;

int main() {
    string S,T;
    cin>>S>>T;
    for(long i=0;i<S.size();i++){
        if(S[i]!=T[i]){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<S.size()+1<<endl;
}
