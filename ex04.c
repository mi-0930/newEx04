#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a,b,total=0;
    char name[20];

       printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
    
    printf("Rolling dice...\n");
    srand(time(NULL));
    a=1+rand()%6;
    b=1+rand()%6;
    total=a+b;
    printf("Die 1: %d\n",a);
    printf("Die 2: %d\n",b);
    printf("Total value: %d",total);

    if(total>=7){
    printf("You won\n");
}else{
    printf("You lose\n");
}
    
    return 0;
}
