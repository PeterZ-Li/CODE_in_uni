#include <iostream>
#include <vector>
class Nature {
private:
  int num;
public:
  Nature():num(0){
  }
  Nature(int n):num(n) {
  }
  Nature(const Nature &nat):num(nat.num){
  }
  ~Nature() {
  }
  bool isSuperPrime() const{
    
  }
  bool compare(Nature p){
    
  }
  void show(){

  }
};
class SuperPrime {
private:
  int LowLimit,HighLimit;
  std::vector<Nature> natures;
public:
  SuperPrime(int a, int b){
    a=LowLimit;
    b=HighLimit;
    for(int i = a; i < b; i++) {
      Nature nat(i);
      natures.push_back(nat);
	}
  }
  ~SuperPrime() {
  }
  
  Nature max() {
  	std::vector<Nature>::iterator it = natures.begin();
  	Nature max(0);
  	for(; it != natures.end(); it ++) {
  	  if(it->isSuperPrime()) {
  	  	if (max.compare(*it)) {
  	  	  max = *it;
		}
	  }
	}
  	return max;
  }
};
int main() {
  SuperPrime sp(100,999);
  Nature n = sp.max(); 
  n.show();  
  return 0;
} 
