#include <stdio.h>
int main() {
    char name[32];
    int m1, m2, m3, m4, m5, total, count;
    float per;
    count = 1;
    while(count <= 5) {
        printf("\nEnter student %d name: ", count);
        scanf("%s", name);
        printf("Enter the marks of five subjects: ");
        scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
        total = m1 + m2 + m3 + m4 + m5;
        per = (total / 500.0) * 100;
        printf("Name: %s\n", name);
        printf("Total marks: %d\n", total);
        printf("Total percentage: %.2f\n", per);
        if(per >= 75)
            printf("Division: First\n");
        else if(per >= 50)
            printf("Division: Second\n");
        else if(per >= 35)
            printf("Division: Third\n");
        else
            printf("Division: Fail\n");
        count++;
    }
    return 0;
}
