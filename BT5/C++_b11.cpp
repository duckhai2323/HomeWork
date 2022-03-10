#include<iostream>
#include<vector>
#include<string>
int main(){
  std:: vector<char> s;
   long long a;
  std::cin>>a;
  while(a>=1){
      if(a%2==0) s.push_back('0');
      else s.push_back('1');
      a=a/2;
  }
  for(int i=s.size()-1;i>=0;i--){
      std::cout<<s[i];
  }
  return 0;
}