#include <stdio.h>
#include <string.h>

void sort_strings(char **arr, int size){
    char *tmp;
    for(int i = 0; i < size - 1; i++){
        // i번 반복할 때마다 가장 큰 문자열이 맨 뒤로 이동합니다.
        for(int j = 0; j < size - 1 - i; j++){
            // 핵심: 옆에 있는 j와 j+1을 비교합니다!
            if( strcmp(arr[j], arr[j+1]) > 0 ){ 
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int main(){
    char* words[]= {"apple", "ant", "banana","cherry"};
    int size =4;
    sort_strings(words, size);

    for(int i=0; i<size; i++){
        printf("%s\n", words[i]);
    }

    return 0;
}
