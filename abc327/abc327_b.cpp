#include<iostream>
using namespace std;
int main()
{
    long long B;
    cin>>B;
    for (int i=1; i <=15;i++)
    {
        long long pow=1;
        for(int j=0;j<i;j++)pow*=i;
        if (pow==B){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
