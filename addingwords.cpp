#include<iostream>
#include<map>
#include<string>
#include<sstream>
using namespace std;
int main(){
  string s,t;
  map<string,int> fall;
  map<int,string> andhverfa;
  string ny;
  int gildi;
  bool minus;
  bool loglegt;
  int sum;
  string allt;
  while(getline(cin,s)){
    allt=s.substr(5);
    stringstream ss(s);
    ss>>t;
    if(t.compare("clear")==0){
      fall.clear();
      andhverfa.clear();
    }
    else if(t.compare("def")==0){
      ss>>ny>>gildi;
      if(fall.find(ny)!=fall.end()) andhverfa.erase(fall[ny]);
      fall[ny]=gildi;
      andhverfa[gildi]=ny;
    }
    else if(t.compare("calc")==0){
      minus=false;
      loglegt=true;
      sum=0;
      ss>>ny;
      while(ny.compare("=")!=0){
        if(ny.compare("+")==0){
          minus=false;
        }
        else if(ny.compare("-")==0){
          minus=true;
        }
        else if(fall.find(ny)==fall.end()){
          loglegt=false;
          break;
        }
        else{
          if(minus) sum-=fall[ny];
          else sum+=fall[ny];
        }
        ss>>ny;
      }
      if(loglegt && andhverfa.find(sum)!=andhverfa.end()) cout<<allt<<" "<<andhverfa[sum]<<"\n";
      else cout<<allt<<" unknown\n";
    }
  }
}
