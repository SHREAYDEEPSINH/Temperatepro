
#include <stdio.h>

int main()
{
    // qus 1 
    char i='a';
    char end='z';
    do{
        printf("%c\n",i);
        i+=4;
    }
    while(i<=end);
    
    return 0;

    // qus 2
     int i;
   int num;
   int k;
   int sum;
   
   printf("enter number :");
   scanf("%d",&num);
   printf("enter k velue :");
   scanf("%d",&k);
   
   for(i=1;i<num;i++){
       if(i%k==0){
           sum=sum+i;
       }
   }
   printf("%d",sum);

    return 0;
}
