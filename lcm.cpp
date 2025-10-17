#include <iostream>
using namespace std;
int main(){int a,b;cin>>a>>b;int g=a;int h=b;while(h){int t=h;h=g%h;g=t;}cout<<(a*b)/g;return 0;}