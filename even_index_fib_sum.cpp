#include <iostream>
using namespace std;
int main(){int n;cin>>n;int a=0,b=1,s=a;for(int i=2;i<=n;i++){int c=a+b;a=b;b=c;if(i%2==0)s+=b;}cout<<s;return 0;}