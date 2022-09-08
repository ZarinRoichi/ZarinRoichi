//true=1/false=1
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<(a == b)<<endl;
    cout<<(a != b)<<endl;
    cout<<(a > b)<<endl;
    cout<<(a < b)<<endl;
    cout<<(a>8 && b<6)<<endl;
    cout<<(a<8 || b>5)<<endl;
    return 0;
}
