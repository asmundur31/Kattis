#include<iostream>
#include<math.h>
using namespace std;
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int n;
  cin>>n;
  long long int a,b,c,d;
  long long int min,max;
  long long int stig=0;
  for(int i=0; i<n; i++){
    cin>>a>>b>>c>>d;
    if(a<b && a<c) min=a;
    else if(b<a && b<c) min=b;
    else if(c<a && c<b) min=c;
    else min=a;
    if(a>b && a>c) max=a;
    else if(b>a && b>c) max=b;
    else if(c>a && c>b) max=c;
    else max=a;
    for(int j=0; j<d; j++){
      if((min+1)*(min+1)-min*min+7<(max+1)*(max+1)-max*max){
        max+=1;
      }
      else min+=1;

      if(a<b && a<c) a=min;
      else if(b<a && b<c) b=min;
      else if(c<a && c<b) c=min;
      else a=min;
      if(a>b && a>c) a=max;
      else if(b>a && b>c) b=max;
      else if(c>a && c>b) c=max;
      else a=max;

      if(a<b && a<c) min=a;
      else if(b<a && b<c) min=b;
      else if(c<a && c<b) min=c;
      else min=a;
      if(a>b && a>c) max=a;
      else if(b>a && b>c) max=b;
      else if(c>a && c>b) max=c;
      else max=a;
    }
    cout<<max<<" "<<min<<"\n";
    stig=a*a+b*b+c*c+min*7;
    cout<<stig<<"\n";
  }
}
