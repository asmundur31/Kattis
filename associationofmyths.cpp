#include<iostream>
#include<math.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  double a,b,c,t1,t2,t3,t4,n,k,r,s,l;
  cin>>a>>b>>c;
  cin>>t1>>t2>>t3>>t4;
  cin>>n>>k>>r>>s>>l;
  double ut = l*l/(acos(-1)*M_E)+1/(l+1);
  printf("%.2f\n",ut);
}
