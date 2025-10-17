#include <iostream>
#include <cmath>
using namespace std;
int main(){for(int n=1;n<=1000;n++){int t=n,d=0;while(t){d++;t/=10;}t=n;int s=0;while(t){s+=pow(t%10,d);t/=10;}if(s==n)cout<<n<<" ";}return 0;}