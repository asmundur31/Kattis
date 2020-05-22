#include<iostream>
using namespace std;

int main() {
  int s0=1,s1=0,r0=0,r1=0;
  cin>>s0>>s1>>r0>>r1;
  while(s0+s1+r0+r1!=0) {
    int s = max(s0,s1)*10+min(s0,s1);
    int r = max(r0,r1)*10+min(r0,r1);
    if(s0==s1) s=100*s0+s1*10;
    if(r0==r1) r=100*r0+r1*10;
    if((s0==2 && s1==1) || (s0==1 && s1==2)) s=1000;
    if((r0==2 && r1==1) || (r0==1 && r1==2)) r=1000;
    if(s>r) cout<<"Player 1 wins.\n";
    else if(s<r) cout<<"Player 2 wins.\n";
    else cout<<"Tie.\n";
    cin>>s0>>s1>>r0>>r1;
  }
}