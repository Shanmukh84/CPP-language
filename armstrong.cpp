#include <iostream>
#include <cmath>
using namespace std;
int main(){int n;cin>>n;int t=n,d=0;while(t){d++;t/=10;}t=n;int s=0;while(t){s+=pow(t%10,d);t/=10;}cout<<(s==n?"Armstrong":"Not Armstrong");return 0;}