#include <stdio.h>

int faculty();

int main(void)
{
    int n, result;
    printf("please input your number: ");
    scanf("%d",&n);
    result=faculty(n);
    printf("result: %d\n",result);
    return 0;
}

int faculty(int n){
    if(n<1){
        return 1;
    } else {
        return n* faculty(n-1);
    }
}
