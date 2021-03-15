#include <cstdio>

inline int min(int a, int b) {
  return (a < b) ? a : b;
}

inline int max(int a, int b) {
  return (a > b) ? a : b;
}

int main() {
  int n;
  scanf("%d", &n);
  int _mn = 1000, _mx = 1; // guaranteed bounds
  int temp;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &temp);
    _mn = min(_mn, temp);
    _mx = max(_mx, temp);
  }
  printf("%d\n", (_mx - _mn) * 2);
  return 0;
}

