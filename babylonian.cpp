#include<iostream>
#include<cmath>
int main(){
  int T;
  std::cin>>T;
  std::string tala;
  long int summa[8]={0,0,0,0,0,0,0,0};
  for(int i=0; i<T; i++){
    int count=0;
    std::cin>>tala;
    summa[count]=stoi(tala.substr(0,tala.find(",")));
    tala.erase(0,tala.find(",")+1);
    while(tala.length()>0){
      std::string s=tala.substr(0,1);
      if(s.compare(",")==0 || s.compare("")==0){
        summa[count]=0;
      }
      else{
        summa[count]=stoi(tala.substr(0,tala.find(",")));
      }
      count++;
      tala.erase(0,tala.find(",")+1);
    }
    long int dec=0;
    for(int j=0; j<count+1; j++){
      dec+=summa[j]*pow(60,count-j);
    }
    printf("%ld\n",dec);
  }
}
