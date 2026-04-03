#include <stdio.h>
void double_element(int * arr ,int n){
    //배열의 포인터는 첫번째 element를 가르킨다.
   
    for(int i=0 ; i<n; i++){
        int * pi= (arr+i);
        *pi= (*pi)*2;
    }
}
int main(){
    int arr[5];
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    double_element(arr,5);// 배열은 &안붙여도 된다.
    for(int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
    
}
