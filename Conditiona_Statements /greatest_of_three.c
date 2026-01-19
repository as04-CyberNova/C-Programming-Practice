#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter x,y,z: ");
    scanf("%d%d%d", &x, &y, &z);
    if(x>y)
      printf("Greater is: %d\n",x);
    else if(y>z)
      printf("Greater is: %d\n",y);
    else if(z>x)
      printf("Greater is: %d\n",z);
    return 0;
}
