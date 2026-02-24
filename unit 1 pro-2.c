#include <stdio.h>
int main() {
    int a[100], n, i, sum=0;
    float avg;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    avg = sum/(float)n;
    printf("Sum=%d Avg=%.2f",sum,avg);
    return 0;
}
