#include <stdio.h>

int n;
int k;
int A[100000];
int a;

int p (int m){
    int i;
    a = 0;
    for(i = 0; i<n; i++){
        a = a + (A[i]/ m);
    }
    return a >= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  int max = A[0];
  for (i = 0; i < n ; i++) {
    if (max < A[i]) {
       max = A[i];
    }
  }
      lb = 0;
      ub = max +1;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        if(p(m)){
            lb = m;
        }
        else{
            ub = m;
        }
    }
  printf("%d\n",lb);
  return 0;
}
