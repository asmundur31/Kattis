#include<iostream>
using namespace std;
int main(){
  int b,c,d,l;
  cin>>b>>c>>d>>l;
  bool tilLausn=false;
  for(int i=0; i<=l/b; i++){
    for(int j=0; j<=l/c; j++){
      for(int k=0; k<=l/d; k++){
        if(i*b+j*c+k*d==l){
          tilLausn=true;
          cout<<i<<" "<<j<<" "<<k<<"\n";
        }
      }
    }
  }
  if(!tilLausn) cout<<"impossible\n";
}
