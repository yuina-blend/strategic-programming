extern int SCT[2][2];
int assign2(int ID,int n,int SC[2] , int *H)
{
  int p,q,r,s,i,max, sct[4];
  p = SCT[1][0];
  q = SCT[0][0];
  r = SCT[0][1];
  s = SCT[1][1];

  sct[0] = p;
  sct[1] = q;
  sct[2] = r;
  sct[3] = s;

  max = sct[0];
  for(i=1;i<4;i++){
    if(sct[i] > max){
      max = sct[i];
    }
  }

  if(max==p){
    if(p==s){
      if(q>r){
        return 0;
      }else{
        return 1;
      }
    }else{
      return 1;
    }
  }else if(max==s){
    return 0;
  }else if(max==q){
    if(s>=p){
      return 0;
    }else{
      return 1;
    }
  }else{
    if(s>p){
      return 0;
    }else{
      return 1;
    }
  }
}