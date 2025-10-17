#include <iostream>
using namespace std;
int main(){int n,rev=0,t;cin>>n;t=n;while(t){rev=rev*10+t%10;t/=10;}cout<<(rev==n?"Palindrome":"Not Palindrome");return 0;}