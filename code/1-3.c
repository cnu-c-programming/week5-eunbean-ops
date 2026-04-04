#include <stdio.h>

void print_reverse(int *arr, int size){
int *p= arr+(size -1);
for(; p>=arr; p--){
    if( p== arr){
    printf("%d", *p);
    }else{
     printf("%d ", *p);   
    }
    
}
}

int main(){
    int nums[]= {1,2,3,4,5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}
