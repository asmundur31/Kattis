#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  double sum= 0;
  double x,y;
  for(int i=0; i<n; i++){
    cin>>x>>y;
    sum+=x*y;
  }
  printf("%.3f\n",sum);
}
