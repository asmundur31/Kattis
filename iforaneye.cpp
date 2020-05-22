#include<iostream>
int main(){
  int n;
  std::cin>>n;
  std::string lina;
  std::getline(std::cin, lina);
  for(int i=0; i<n; i++){
    std::getline(std::cin, lina);
    lina+="...";
    for(int j=0; j<lina.length()-3; j++){
      if(lina.substr(j,4)=="Four"){
        lina.replace(j,4,"4");
      }
      else if(lina.substr(j,4)=="four"){
        lina.replace(j,4,"4");
      }
      else if(lina.substr(j,3)=="For"){
        lina.replace(j,3,"4");
      }
      else if(lina.substr(j,3)=="for"){
        lina.replace(j,3,"4");
      }
      else if(lina.substr(j,2)=="At"){
        lina.replace(j,2,"@");
      }
      else if(lina.substr(j,2)=="at"){
        lina.replace(j,2,"@");
      }
      else if(lina.substr(j,3)=="And"){
        lina.replace(j,3,"&");
      }
      else if(lina.substr(j,3)=="and"){
        lina.replace(j,3,"&");
      }
      else if(lina.substr(j,3)=="One"){
        lina.replace(j,3,"1");
      }
      else if(lina.substr(j,3)=="one"){
        lina.replace(j,3,"1");
      }
      else if(lina.substr(j,3)=="Won"){
        lina.replace(j,3,"1");
      }
      else if(lina.substr(j,3)=="won"){
        lina.replace(j,3,"1");
      }
      else if(lina.substr(j,3)=="Too"){
        lina.replace(j,3,"2");
      }
      else if(lina.substr(j,3)=="too"){
        lina.replace(j,3,"2");
      }
      else if(lina.substr(j,2)=="To"){
        lina.replace(j,2,"2");
      }
      else if(lina.substr(j,2)=="to"){
        lina.replace(j,2,"2");
      }
      else if(lina.substr(j,3)=="Two"){
        lina.replace(j,3,"2");
      }
      else if(lina.substr(j,3)=="two"){
        lina.replace(j,3,"2");
      }
      else if(lina.substr(j,3)=="Bea"){
        lina.replace(j,3,"B");
      }
      else if(lina.substr(j,3)=="bea"){
        lina.replace(j,3,"b");
      }
      else if(lina.substr(j,3)=="Bee"){
        lina.replace(j,3,"B");
      }
      else if(lina.substr(j,3)=="bee"){
        lina.replace(j,3,"b");
      }
      else if(lina.substr(j,2)=="Be"){
        lina.replace(j,2,"B");
      }
      else if(lina.substr(j,2)=="be"){
        lina.replace(j,2,"b");
      }
      else if(lina.substr(j,3)=="Sea"){
        lina.replace(j,3,"C");
      }
      else if(lina.substr(j,3)=="sea"){
        lina.replace(j,3,"c");
      }
      else if(lina.substr(j,3)=="See"){
        lina.replace(j,3,"C");
      }
      else if(lina.substr(j,3)=="see"){
        lina.replace(j,3,"c");
      }
      else if(lina.substr(j,3)=="Eye"){
        lina.replace(j,3,"I");
      }
      else if(lina.substr(j,3)=="eye"){
        lina.replace(j,3,"i");
      }
      else if(lina.substr(j,2)=="Oh"){
        lina.replace(j,2,"O");
      }
      else if(lina.substr(j,2)=="oh"){
        lina.replace(j,2,"o");
      }
      else if(lina.substr(j,3)=="Owe"){
        lina.replace(j,3,"O");
      }
      else if(lina.substr(j,3)=="owe"){
        lina.replace(j,3,"o");
      }
      else if(lina.substr(j,3)=="Are"){
        lina.replace(j,3,"R");
      }
      else if(lina.substr(j,3)=="are"){
        lina.replace(j,3,"r");
      }
      else if(lina.substr(j,3)=="You"){
        lina.replace(j,3,"U");
      }
      else if(lina.substr(j,3)=="you"){
        lina.replace(j,3,"u");
      }
      else if(lina.substr(j,3)=="Why"){
        lina.replace(j,3,"Y");
      }
      else if(lina.substr(j,3)=="why"){
        lina.replace(j,3,"y");
      }
    }
    lina.erase(lina.length()-3,3);
    std::cout<<lina<<"\n";
  }
}
