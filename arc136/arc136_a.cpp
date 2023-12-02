#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main()
{
    int N;
    cin>>N;
    string S;
    cin>>S;
    S=regex_replace(S,regex("A"),"BB");
    S=regex_replace(S,regex("BB"),"A");
    cout<<S<<endl;
}
