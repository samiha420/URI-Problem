#include<stdio.h>
int main()
{
    int a,b,i,sum = 0;

    scanf("%d %d",&a,&b);

    if(a==b){
        sum = 0;
        printf("%d\n",sum);
     }

    if(a>b){

    for(i = b+1 ; i<a ; i++){

    if(i%2!=0)
        sum = sum+i;
    }
    printf("%d\n",sum);
}
    if(a<b){

    for(i = a+1 ; i<b ; i++){

    if(i%2!=0)
        sum = sum+i;
    }
    printf("%d\n",sum);
}
    return 0;
}
