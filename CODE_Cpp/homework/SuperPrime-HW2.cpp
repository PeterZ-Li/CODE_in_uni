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
};
class SuperPrime {
private:
  std::vector<Nature> natures;
public:
  SuperPrime(int a, int b) {
    for(int i = a; i < b; i++) {
      Nature nat(i);
      natures.push_back(nat);
	}
  }
  ~SuperPrime() {
  }
  
  Nature max() {
  	std::vector<Nature>::iterate it = natures.begin();
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
  SuperPrime sp(100，999);
  Nature n = sp.max(); 
  n.show();  
  return 0;
} 
