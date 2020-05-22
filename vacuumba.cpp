#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  int skref;
  for(int i=0; i<T; i++){
    cin>>skref;
    double r,theta1,theta2=0;
    double sumX=0;
    double sumY=0;
    for(int j=0; j<skref; j++){
      cin>>theta1;
      cin>>r;
      if(j==0){
        sumX=-r*sin(theta1*M_PI/180);
        sumY=r*cos(theta1*M_PI/180);
      }
      else{
        sumX-=r*sin((theta1+theta2)*M_PI/180);
        sumY+=r*cos((theta1+theta2)*M_PI/180);
      }
      theta2+=theta1;
    }
    cout<<sumX<<" "<<sumY<<"\n";
  }
}
