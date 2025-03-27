void factorialRange(int s, int e){
    for(int i=s,i<=e;i++){
        if(i<0){
            i=-i;
        }
        int f=1
        for(int j=s;j<=1;j--){
            f=f*j;
        }
        printf("%d\n",f);
    }
}