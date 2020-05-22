#include<iostream>
#include<vector>
#include<algorithm>
int main(){
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  int N;
  std::cin>>N;
  std::vector<std::pair<int,double> > fall;
  double x,fx;
  for(int i=0; i<N; i++){
    std::cin>>x>>fx;
    fall.push_back(std::make_pair(x,fx));
  }
  std::sort(fall.begin(), fall.end());
  double L;
  double max=0;
  for(int i=0; i<N-1; i++){
    if((fall[i].second-fall[i+1].second)*(fall[i].first-fall[i+1].first)<0){
      L=-(fall[i].second-fall[i+1].second)/(fall[i].first-fall[i+1].first);
    }
    else{
      L=(fall[i].second-fall[i+1].second)/(fall[i].first-fall[i+1].first);
    }
    if(L>max)max=L;
  }
  printf("%.8f\n",max);
}
