#include <stdio.h>

int n;
int k;
int A[100000];
int b = 0;


int p(int m){
    int i, a, j;
    a = 0;
    j = 1;
    for(i = 0; i < n; i++){
        if(A[i] > m) return 0;
        if(a + A[i] <= m) a += A[i];
        else {
            j++;
            a = A[i];
        }
    }
    return j <= k;
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
