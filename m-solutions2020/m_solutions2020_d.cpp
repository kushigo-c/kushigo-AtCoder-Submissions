#include <iostream>
using namespace std;

int main() {
    long long N,current=1000;
    cin>>N;
    int A[N+1];
    for(int i=1;i<=N;i++)cin>>A[i];
    for(int i=1;i<=N-1;i++)
    {
        long long stock=0;
        if(A[i]<A[i+1])stock=current/A[i];
        current+=(A[i+1]-A[i])*stock;
    }
    cout<<current<<endl;
}

