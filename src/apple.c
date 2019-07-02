#include <stdio.h>

int n;
int k;
int A[100000];
int a;

int p (int m){
    int i;
    a = 0;
    for(i = 0; i<n; i++){
        a = a + (((A[i] - 1)/ m) + 1);
    }
    return a <= k;
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
    ub = max;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        if(p(m)){
            ub = m;
        }
        else{
            lb = m;
        }
    }
    printf("%d\n",ub);
  return 0;
}
