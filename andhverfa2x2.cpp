#include<iostream>
#include<stdio.h>
int main(){
  int k=1;
  int fylki[2][2];
  while(scanf("%d %d\n %d %d",&fylki[0][0],&fylki[0][1],&fylki[1][0],&fylki[1][1])!=EOF){
    int det=fylki[0][0]*fylki[1][1]-fylki[1][0]*fylki[0][1];
    int fylkiut[2][2]={fylki[1][1]/det,-fylki[0][1]/det,-fylki[1][0]/det, fylki[0][0]/det};
    std::cout<<"Case "<<k<<":\n";
    std::cout<<fylkiut[0][0]<<" "<<fylkiut[0][1]<<"\n";
    std::cout<<fylkiut[1][0]<<" "<<fylkiut[1][1]<<"\n";
    k++;
  }
}
