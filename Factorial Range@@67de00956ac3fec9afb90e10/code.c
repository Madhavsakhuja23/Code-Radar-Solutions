void factorialRange(int s, int e){
    if(s>e || s<0 || e<0){
        printf("Invalid range");
        return ;
    }
    for(int i=s;i<=e;i++){
        int f=1;
        for(int j=i;j>=1;j--){
            f=f*j;
        }
        printf("%d\n",f);
    }
}