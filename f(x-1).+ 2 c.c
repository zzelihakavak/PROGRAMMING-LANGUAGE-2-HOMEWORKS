#include <stdio.h>
int f(int x){
    if (x <= 0)
    return 0;
    else
    return f(x - 1) + 2;}
void main(){
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    printf("%d", f(n));}
       
    
    
