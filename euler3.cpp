#include <iostream>
#include <vector>
#include <cmath>

using std::cout;
using std::endl;
using std::vector;

int euler3(int n);

int main () {
  cout << "Result: " << euler3(13195) << endl;

  return 0;
}

int euler3(int n) {
  vector<int> v;

  int a = 0;

  for(int i = 2; i <= sqrt(n); ++i) {
    if(n%i == 0) {
      bool prime = true;
      for(int j = 2; j < i; ++j) {
	if(i%j == 0) {
	  prime = false;
	}
      }
      if(prime) {
	v.push_back(i);
      }
    }
  }
   
  for(vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
    if(*i > a) {
      a = *i;
    }
  }
   return a;
}
