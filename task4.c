// Решение 1

#include <stdio.h>

int main(void){
    int a, b, c, d;
    float average;
    scanf("%d%d%d%d", &a,&b,&c,&d); 
    average = a + b + c + d;
    average /= 4; 
printf("%.2f\n", average);
return 0;
}


// Решение 2

// #include <stdio.h>
// const float NUMBER = 4;
// int main()
// {
// int x, sum = 0;
// scanf("%d", &x);
// sum += x%10, x /= 10; 
// sum += x%10, x /= 10; 
// sum += x%10, x /= 10;
// sum += x%10, x /= 10;
// float average = sum / NUMBER;
// printf("%.2f\n", average);
// return 0;
// }