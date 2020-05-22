#include<iostream>
int main(){
  int n;
  std::cin>>n;
  int stiga=0, stigh=0;
  std::string lid;
  int stig;
  std::string time;
  int timi[2]={0,0};
  int alid[2]={0,0};
  int hlid[2]={0,0};
  int geyma1=0,geyma0=0;
  int jafnt[2]={0,0};
  for(int i=0; i<n; i++){
    std::cin>>lid;
    std::cin>>stig;
    std::cin>>time;

    timi[0]=stoi(time.substr(0,time.find(":")))-geyma0;
    geyma0=stoi(time.substr(0,time.find(":")));
    time.erase(0,time.find(":")+1);
    timi[1]=stoi(time)-geyma1;
    geyma1=stoi(time);
    if(timi[1]<0){
      timi[0]--;
      timi[1]=timi[1]+60;
    }

    if(stigh<stiga){
      alid[0]+=timi[0];
      alid[1]+=timi[1];
    }
    else if(stigh>stiga){
      hlid[0]+=timi[0];
      hlid[1]+=timi[1];
    }
    else {
      jafnt[0]+=timi[0];
      jafnt[1]+=timi[1];
    }

    if(lid=="H") stigh+=stig;
    else stiga+=stig;
  }
  if(stigh<stiga){
    alid[0]+=31-geyma0;
    alid[1]+=60-geyma1;
  }
  else if(stigh>stiga){
    hlid[0]+=31-geyma0;
    hlid[1]+=60-geyma1;
  }
  if(alid[1]<0){
    alid[0]--;
    alid[1]=alid[1]+60;
  }
  if(hlid[1]<0){
    hlid[0]--;
    hlid[1]=hlid[1]+60;
  }
  alid[0]+=alid[1]/60;
  alid[1]=alid[1]%60;
  hlid[0]+=hlid[1]/60;
  hlid[1]=hlid[1]%60;
  if(stigh<stiga && hlid[1]<10 && alid[1]<10){
    std::cout<<"A "<<hlid[0]<<":0"<<hlid[1]<<" "<<alid[0]<<":0"<<alid[1]<<"\n";
  }
  else if(stigh<stiga && hlid[1]<10){
    std::cout<<"A "<<hlid[0]<<":0"<<hlid[1]<<" "<<alid[0]<<":"<<alid[1]<<"\n";
  }
  else if(stigh<stiga && alid[1]<10){
    std::cout<<"A "<<hlid[0]<<":"<<hlid[1]<<" "<<alid[0]<<":0"<<alid[1]<<"\n";
  }
  else if(stigh>stiga && hlid[1]<10 && alid[1]<10){
    std::cout<<"H "<<hlid[0]<<":0"<<hlid[1]<<" "<<alid[0]<<":0"<<alid[1]<<"\n";
  }
  else if(stigh>stiga && hlid[1]<10){
    std::cout<<"H "<<hlid[0]<<":0"<<hlid[1]<<" "<<alid[0]<<":"<<alid[1]<<"\n";
  }
  else if(stigh>stiga && alid[1]<10){
    std::cout<<"H "<<hlid[0]<<":"<<hlid[1]<<" "<<alid[0]<<":0"<<alid[1]<<"\n";
  }
  else if(stigh<stiga){
    std::cout<<"A "<<hlid[0]<<":"<<hlid[1]<<" "<<alid[0]<<":"<<alid[1]<<"\n";
  }
  else{
    std::cout<<"H "<<hlid[0]<<":"<<hlid[1]<<" "<<alid[0]<<":"<<alid[1]<<"\n";
  }

}
