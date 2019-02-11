#include <stdio.h>

int main(void)
{
    // inital values
    double cash = 0;
    double rate = 0.1;
    int time = 0;

    // User Input
    printf("Ammount of money: ");
    scanf("%lf",&cash);

    printf("Time of Investment: ");
    scanf("%d",&time);
    
    // Output for each year with specific ammount of cash
    for (int i = 1; i <= time; i++){
        cash = cash*(1+rate);
        printf("Year %i: %lf$\n",i,cash);
    }

}
