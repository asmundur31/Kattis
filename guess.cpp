#include<iostream>
int main(){
  int gisk=500;
  std::cout<<gisk<<std::endl;
  int min=0;
  int max=1000;
  std::string hjalp;
  while(true){
    std::cin>>hjalp;
    if(hjalp=="higher"){
      min=gisk+1;
      gisk=(max+min)/2;
    }
    else if(hjalp=="lower"){
      max=gisk;
      gisk=(max+min)/2;
    }
    else{
      break;
    }
    std::cout<<gisk<<std::endl;
  }
  return 0;
}
