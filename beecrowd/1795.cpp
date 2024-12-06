#include <iostream>
#include <cmath>
using namespace std;


long long sumLine(int n) {
  return pow(3, n);
}

int main() {

  int n;
  cin >> n;

  cout << sumLine(n) << endl;

  return 0;
}