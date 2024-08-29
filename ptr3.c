#include <stdio.h>

int main(){
    float a[10]={1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    float *ptr[10];

    for(int i=0; i<10; i++){
        ptr[i] = &a[i];
    }


    for(int i=0; i<10; i++){
        printf("%p\n", ptr[i]);
    }
    
    return 0;
}