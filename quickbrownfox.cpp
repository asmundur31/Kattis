#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	getline(cin,s);
	for(int i=0; i<n; i++){
		getline(cin,s);
		string svar="";
		int count=0;
		vector<bool> komid(26, false);
		for(int j=0; j<s.length(); j++){
			if(s[j]<65){
				continue;
			}
			else if(s[j]<97 && !komid[s[j]-'A']){
				komid[s[j]-'A']=true;
				count++;
			}
			else if(s[j]<97){
				continue;
			}
			else if(!komid[s[j]-'a']){
				komid[s[j]-'a']=true;
				count++;
			}
		}
		for(int j=0; j<26; j++){
			if(!komid[j]) svar+='a'+j;
		}
		if(count==26) cout<<"pangram\n";
		else cout<<"missing "<<svar<<"\n";
	}
}
