#include <stdio.h>
int main() {
    int n,i,p=0,ne=0,e=0,o=0;
    printf("Enter N: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=0) p++; else ne++;
        if(a[i]%2==0) e++; else o++;
    }
    printf("Positive=%d\nNegative=%d\nEven=%d\nOdd=%d",p,ne,e,o);
}
