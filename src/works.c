#include <stdio.h>

int n;
int k;
int A[100000];
int a;
int b = 0;


int p (int m){
    int i;
    int j;
    int h = 0;
    for (i = 0; h <= n; i++){
    	a = 0;
    	for(j = h; a <= m && j < n; j++){
    		a = a + A[j];
    	}
    	h = j +1;
    }
    return i < k;
}

int main(){
  int i, j,lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  for(j = 0; j < n; j++){
    b  = b + A[j];
  }
  int max = A[0];
  for (i = 0; i < n ; i++) {
	 if (max < A[i]) {
	     max = A[i];
	  }
   }
  lb = max-1;
  ub = b;
    while(ub - lb > 1){
        int m = (lb + ub) / 2;
        if(p(m)){
            ub = m;
        }
        else{
            lb = m;
        }
   }
  printf("%d",ub);
  return 0;
}
