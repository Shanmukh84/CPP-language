#include <iostream>
using namespace std;
int main(){double a,b;char op;cin>>a>>op>>b;if(op=='+')cout<<a+b;else if(op=='-')cout<<a-b;else if(op=='*')cout<<a*b;else if(op=='/')cout<<a/b;return 0;}