#include <iostream>
using namespace std;
int main(){int a,b;cin>>a>>b;for(int i=a;i<=b;i++){int sq=i*i,s=0;while(sq){s+=sq%10;sq/=10;}if(s==i)cout<<i<<" ";}return 0;}