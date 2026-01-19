#include <stdio.h>
int main(){
    int yr;
    printf("\nEnter a year to check: ");
    scanf("%d",&yr);
    if(yr%100 == 0){
        if(yr%400 == 0)
            printf("Leap year found\n");
        else
            printf("Leap year not found\n");
    }
    else {
        if(yr%4 == 0)
            printf("Leap year found\n");
        else
            printf("Leap year not found\n");
    }
    return 0;
}
