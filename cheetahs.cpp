#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
  int N;
  cin>>N;
  vector<int> t(N);
  vector<int> v(N);
  int begin = INT_MIN;
  int indexMin = 0;
  for(int i=0; i<N; i++) {
    cin>>t[i]>>v[i];
    if(t[i]>begin) {
      begin = t[i];
      indexMin = i;
    }
  }
  double min = 0.0;
  double max = 0.0;
  int indexMax = 0;
  for(int i=0; i<N; i++) {
    if(v[i]*(double)begin-t[i]*v[i]>max){
      max = v[i]*(double)begin-t[i]*v[i];
      indexMax = i;
    }
  }
  double diff = abs(max-min);
  if(diff<=abs(max+v[indexMax]-min-v[indexMin])) {
    printf("%.3f\n", diff);
    return 0;
  } else {
    printf("Finna fyrsta skurðpunkt eftir byrjun sem sker min eða max línu.\n");
    // Ekki rétt aðferð :(
    // Finnum þegar max línan sker næst
    double maxNaest = begin;
    double maxMin = 1000000000000.0;
    // Finnum þegar min línan sker næst
    double minNaest = begin;
    double minMin = 1000000000000.0;
    for(int i=0; i<N; i++) {
      if((t[indexMax]*(double)v[indexMax]-t[i]*(double)v[i])/(v[indexMax]-v[i])<maxMin) {
        maxMin = (t[indexMax]*(double)v[indexMax]-t[i]*(double)v[i])/(v[indexMax]-v[i]);
      }
      if((t[indexMin]*(double)v[indexMin]-t[i]*(double)v[i])/(v[indexMin]-v[i])<minMin) {
        maxMin = (t[indexMin]*(double)v[indexMin]-t[i]*(double)v[i])/(v[indexMin]-v[i]);
      }
    }
    double x = begin;
    double svar;
    if(minMin<maxMin) { // min línan sker næst
      x = minMin;
      svar = v[indexMax]*x-t[indexMax]*(double)v[indexMax]-v[indexMin]*x+t[indexMin]*(double)v[indexMin];
    } else { // max línan sker næst
      x = maxMin;
      svar = v[indexMax]*x-t[indexMax]*(double)v[indexMax]-v[indexMin]*x+t[indexMin]*(double)v[indexMin];
    }
    printf("%.3f\n",svar);
  }
}