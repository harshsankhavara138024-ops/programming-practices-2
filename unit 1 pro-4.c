#include <stdio.h>
int main() {
    int a[100], n, i, p=0, ne=0, e=0, o=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=0) p++; else ne++;
        if(a[i]%2==0) e++; else o++;
    }
    printf("Positive=%d Negative=%d Even=%d Odd=%d",p,ne,e,o);
    return 0;
}

