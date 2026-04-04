#include <stdio.h>

int main(){
    int arr[5]= {10, 20, 30, 40, 50};
    int size = 5;
    int index;

    scanf("%d", &index);
    
    if( index>4){
        printf("%s","Error!");
    }else{
        printf("%d", arr[index]);
    }
}
