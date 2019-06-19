#include <stdio.h>

int n;
int k;
int A[100000];

int P(int x){
    int i,j,sum;
    i=0;
    j=0;
    sum=0;
    for(i=0;i<n;i++){
        sum=sum+A[i];
        if(A[i]>x) return 0;
        else if(sum>x) {j=j+1,sum=A[i];}
        }
    return (long int) j<k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
    lb=0;
    ub=10000;
    while(ub-lb>1){
        int m=(lb+ub)/2;
        if(P(m)){
            ub=m;
        }
        else{
            lb=m;
        }
    }
    printf("%d\n",ub);
  return 0;
}
