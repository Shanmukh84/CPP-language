#include <iostream>
using namespace std;
int main(){int a,b;cin>>a>>b;while(b){int t=b;b=a%b;a=t;}cout<<a;return 0;}