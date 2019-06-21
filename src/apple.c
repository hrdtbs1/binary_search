#include <stdio.h>

int n;
int k;
int A[100000];

int P(int x){
    int i,y;
    y=0;
    for(i=0;i<n;i++){
        y+=(A[i]+x-1)/x;
    }
    return y<=k;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb=0;
  ub=1000000001;
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
