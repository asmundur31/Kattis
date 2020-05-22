#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
  map<char,string> map;
  map['a']="@";
  map['b']="8";
  map['c']="(";
  map['d']="|)";
  map['e']="3";
  map['f']="#";
  map['g']="6";
  map['h']="[-]";
  map['i']="|";
  map['j']="_|";
  map['k']="|<";
  map['l']="1";
  map['m']="[]\\/[]";
  map['n']="[]\\[]";
  map['o']="0";
  map['p']="|D";
  map['q']="(,)";
  map['r']="|Z";
  map['s']="$";
  map['t']="']['";
  map['u']="|_|";
  map['v']="\\/";
  map['w']="\\/\\/";
  map['x']="}{";
  map['y']="`/";
  map['z']="2";

  map['A']="@";
  map['B']="8";
  map['C']="(";
  map['D']="|)";
  map['E']="3";
  map['F']="#";
  map['G']="6";
  map['H']="[-]";
  map['I']="|";
  map['J']="_|";
  map['K']="|<";
  map['L']="1";
  map['M']="[]\\/[]";
  map['N']="[]\\[]";
  map['O']="0";
  map['P']="|D";
  map['Q']="(,)";
  map['R']="|Z";
  map['S']="$";
  map['T']="']['";
  map['U']="|_|";
  map['V']="\\/";
  map['W']="\\/\\/";
  map['X']="}{";
  map['Y']="`/";
  map['Z']="2";
  string s;
  getline(cin,s);
  for(int i=0; i<s.length(); i++){
    if(map.find(s[i])!=map.end()) cout<<map[s[i]];
    else cout<<s[i];
  }
  cout<<"\n";
}
