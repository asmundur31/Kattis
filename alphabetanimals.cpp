#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n;
  cin>>n;
  string ord;
  char fyrsti=s[s.length()-1];
  map<char,int> fjoldifyrsti;
  vector<string> moguleg;
  bool buinn=false;
  for(int i=0; i<n; i++){
    cin>>ord;
    if(ord[0]==fyrsti){
      moguleg.push_back(ord);
    }
    if(fjoldifyrsti.find(ord[0])!=fjoldifyrsti.end()){
      fjoldifyrsti[ord[0]]++;
    }
    else{
      fjoldifyrsti[ord[0]]=1;
    }
  }

  if(moguleg.empty()){
    cout<<"?\n";
    buinn=true;
  }
  else{
    for(int i=0; i<moguleg.size(); i++){
      if(fjoldifyrsti.find(moguleg[i][moguleg[i].length()-1])==fjoldifyrsti.end()){
        cout<<moguleg[i]<<"!\n";
        buinn=true;
        break;
      }
      else if(fjoldifyrsti[moguleg[i][moguleg[i].length()-1]] == 1 && moguleg[i][0] == moguleg[i][moguleg[i].length()-1]){
        cout<<moguleg[i]<<"!\n";
        buinn=true;
        break;
      }
    }
    if(!buinn){
      cout<<moguleg[0]<<"\n";
    }
  }
}
