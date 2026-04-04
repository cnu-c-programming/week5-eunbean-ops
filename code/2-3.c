#include <stdio.h>

int main(){
    int a= 10, b= 20,c= 30, d= 40;
    int * arr[] = {&a, &b, &c, &d};
    int **pp= arr;

    int ** base= arr;

    printf("%d\n", (char *)pp- (char *)base);

    pp=pp+1;
    printf("%d\n", (char *)pp- (char *)base);

    pp=pp+1;
    printf("%d\n", (char *)pp- (char *)base);

    pp=pp+1;
    printf("%d\n", (char *)pp- (char *)base);

    return 0;

}
