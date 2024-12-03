#include <iostream>
using namespace std;
#include <string>

long long kFatorial(int n, int k) {
  long long kFatorial = 1;

  do {
    kFatorial *= n;
    n -= k;
  } while(n >= 1);

  return kFatorial;
}

int numberExclamations(string s) {
  int contador = 0;

  for(char c : s) {
    if (c == '!') {
      contador++;
    }
  }

  return contador;
}

int extractNumber(string s) {
  string numStr = "";
  for (char c : s) {
    if (isdigit(c)) {
      numStr += c;
    }
  }
  return stoi(numStr);
}

int main() {

  int n;
  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++) {
    
    string s;
    getline(cin, s);

    int k = numberExclamations(s);
    int num = extractNumber(s);

    cout << kFatorial(num, k) << endl;

  }

  return 0;
}