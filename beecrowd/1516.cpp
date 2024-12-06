#include <iostream>
using namespace std;


int main() {

  int n, m, a, b;

  char image[50][50];
  
  while (cin >> n >> m) {
    if (n == 0 && m == 0) {
      break;
    }
    for (int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cin >> image[i][j];
      }
    }

    cin >> a >> b;

    for (int i = 0; i < n; i++) {
      string s = "";
      for(int j = 0; j < m; j++) {
        for (int k = 0; k < b/m; k++) {
          s += image[i][j];
        }
      }
      for (int k = 0; k < a/n; k++) {
        cout << s << endl;
      }
    }
    cout << endl;
  }
  

  return 0;
}