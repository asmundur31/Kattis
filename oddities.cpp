#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a;
  for(int i=0; i<n; i++){
    cin>>a;
    if(abs(a)%2==0) printf("%d is even\n",a);
    else printf("%d is odd\n",a);
  }
}
