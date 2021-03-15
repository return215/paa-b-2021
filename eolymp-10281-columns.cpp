#include <cstdio>

inline int max(int a, int b) {
  return (a > b)? a : b;
}

int main() {
  int n;
  scanf("%d", &n);
  int maxn = n;
  int height;
  for (int i  = 0; i < n; ++i){
    scanf("%d", &height);
    maxn = max(maxn, height);
  }
  
  printf("%d\n", maxn);

  return 0;
}

