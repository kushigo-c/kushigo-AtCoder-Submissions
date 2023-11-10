#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    int N;
    cin>>N;
    string S;
    cin>>S;
    cout<<regex_replace(S,regex("na"),"nya")<<endl;
}
