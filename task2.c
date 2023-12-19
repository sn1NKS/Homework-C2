#include <stdio.h>

int main(void){
    int a, b, c;
    int sum, Composition;
    printf("Input numbers:\n");
    scanf("%d%d%d", &a,&b,&c); 
    sum = a + b + c;
    Composition = a * b * c;
printf("%d\n", sum);
printf("%d\n", Composition);
return 0;
}