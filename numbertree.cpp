#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int H;
  cin>>H;
  char t = getchar();
  int count=pow(2,H+1)-1;
  int i=1;
  while(t!='\n'){
    t=getchar();
    if(t=='L'){
      count-=i;
      i=2*i;
    }
    else if(t=='R'){
      count-=i+1;
      i=2*i+1;
    }
  }
  cout<<count<<"\n";
}
