#include<iostream>
#include<math.h>
using namespace std;
#define INF 2000000000
int bs(int* a, int n, int t){
  int r=0,s=n;
  while(r<s)
  if(a[(r+s)/2]<t) r=(r+s)/2+1;
  else s=(r+s)/2;
  return r;
}
int lis(int* a, int n){
  int i,j;
  int b[n+2];
  for(i=0; i<n+2; i++){
    b[i]=INF;
  }
  b[0]=-INF;
  for(i=0; i<n; i++){
    j=bs(b, n+1, a[i]);
    if(b[j-1]<a[i] && a[i]<b[j]) b[j]=a[i];
  }
  for(i=0; b[i]!=INF; i++);
  return i-1;
}
int main(){
  int n;
  cin>>n;
  int a[2*n];
  for(int i=0; i<n; i++){
    cin>>a[n+i];
  }
  for(int i=0; i<n; i++){
    a[i]=a[2*n-1-i];
  }
  cout<<lis(a,2*n)<<"\n";
}
