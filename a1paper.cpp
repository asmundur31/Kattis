#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
  int min;
  cin>>min;
  vector<int> fjoldi(min-1);
  vector<double> staerd(min-1);
  for(int i=0; i<min-1; i++){
    staerd[i]=pow(2,-3.0/4-i/2.0);
  }
  double sum=0;
  int minst=0;
  for(int i=0; i<min-1; i++){
    cin>>fjoldi[i];
    sum+=fjoldi[i]/pow(2,i);
    if(sum>=2){
      minst=i;
      fjoldi[i]-=(sum-2)*pow(2,i);
      break;
    }
  }
  if(sum<2){
    cout<<"impossible\n";
  }
  else{
    double samtals=0;
    for(int i=minst; i>=0; i--){
      samtals+=staerd[i]*(fjoldi[i]/2);
      if(i!=0) fjoldi[i-1]+=fjoldi[i]/2;
      fjoldi[i]=0;
    }
    cout<<setprecision(10)<<samtals<<"\n";
  }
}
