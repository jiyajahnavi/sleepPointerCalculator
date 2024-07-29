#include <stdio.h>

int main() {
    
    int sleep,wakeUp,t;
    
    printf("Welcome to sleep pointer calculator\n");
    printf("A human body needs 7-9 pointers of sleep\n\n");
    sleep = printf("enter your average sleeping time in hrs(i.e. 23)\n");
    scanf("%d",&sleep);
    wakeUp = printf("enter your average waking up time in hrs(i.e. 6)\n");
    scanf("%d",&wakeUp);
    
    if(sleep >=13 & sleep <= 24)
    {
        t = 24 - sleep;
        t = t + wakeUp;
    }
    else 
    {
        t = wakeUp - sleep;
    }
    printf("your total sleeping hour is %d\n",t);
    
   
    for (int i = 7;i<20;i++)
    {
        if(i == sleep){
            printf("your sleep cycle is bad \n Please improve!!!\n");
            break;
        }
        
    }
    
    int a = 1, b = 1,c;
    if(sleep >= 20 & sleep <= 24 )
    {
        b = 24 - sleep;
        b = b * 2;
        a = (a * b) + wakeUp;
    }
    else if (sleep == 0)
    {
        a = wakeUp;
    }
    else if(sleep >=1 & sleep <= 6)
    {
        b = wakeUp - sleep;
        a = a * b;
    }
    
    
    if (a >= 7 & a <= 9)
    {
        printf("You have good sleep cycle\nyour sleep pointer is %d",a);
    }
    else if (a >= 4 & a <= 6)
    {
        printf("You should improve your sleep cycle\nyour sleep pointer is %d",a);
    }
    else if (a<4)
    {
        printf("You have bad sleep cycle\nyour sleep pointer is %d",a);
    }
    printf("\n\nthank you");
   
    return 0;
}