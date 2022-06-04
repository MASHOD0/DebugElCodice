#include<stdio.h>

int algo(int m, int n){
    if (m > n)
        small = m;
    else  
        small = n;
    while((m%small=0 && n%small==0))
        small++;
    return small;
}
int main(){
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    printf("the number of prabhas and allu arjun fans are of %d and %d is %d", m, n, algo(m, n));
    return 0;
}