#include<iostream>
using namespace std;
int main(){
	int n,T;
	cin>>n>>T;
	int count=0;
	int t, sum=0;
	for(int i=0; i<n; i++){
		cin>>t;
		sum+=t;
		if(sum<=T) count++;
		else break;
	}
	cout<<count<<"\n";
}
