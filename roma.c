#include <math.h>
int roma(int ID,int n,int SC[2] , int *H)
{
  int  t=0,i,j,sum=0, sum2=0, ID_op;
  double pob, pob_r;

  if(n==0) return rand() & 1;
  if(ID){
    ID_op = 0;
  }else{
    ID_op = 1;
  }
  for(i=0;i<n;i++){
    sum += *(H+2*i+ID_op);
  }
  pob = sum/n;
  if(pob > 0.5){
    t = 1;
  }
  if(n > 100){
    sum = 0;
    for(i=n;i>n-100;i--){
      sum += *(H+2*i+ID_op);;
    }
    pob_r = sum/10.0;
    if(fabs(pob_r - pob) > 0.30){
      if(pob_r > 0.5){
        t = 1;
      }
    }
    sum = 0;
    for(i=n;i>n-10;i--){
      sum += *(H+2*i+ID_op);
    }
    for(i=n;i>n-5;i--){
      sum2 += *(H+2*i+ID);
    }
    if(sum == 0 && sum2 == 0){
      t = 1;
    }
  }
  return t;
}