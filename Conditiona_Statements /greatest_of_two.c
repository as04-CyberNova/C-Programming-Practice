#include <stdio.h>
int main(){
    int x, y;
    printf("Enter x and y: ");
    scanf("%d%d",&x, &y);
    if(x>y)
        printf("The greater number is: %d\n",x);
    else if(x<y)
        printf("The greater number is: %d\n",y);
    else
        printf("Both of them are equal: %d\n",x);
    return 0;
}
