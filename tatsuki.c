int tatsuki(int ID, int n,int SC[2] , int *H) {
    int REVIEW_NUM = 10;
    float BORDER = 0.5;

    int i;
    int coop_num = 0;
    float coop_rate;

    if(n < REVIEW_NUM) return 0;

    for(i = n-1; i > n - REVIEW_NUM; i--) {
        if(*(H+i*2+ID^1) == 0) {
            coop_num++;
        }
    }
    coop_rate = coop_num / (float)REVIEW_NUM;

    return (coop_rate >= BORDER) ? 0 : 1;

}