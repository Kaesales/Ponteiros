
#include <stdio.h>

int main(){
    int a;
    int b;
    
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    
    int *ptr1= &a;
    int *ptr2= &b;
    
    if(ptr1>ptr2){
        printf("endereço de memória de a: %p", ptr1);
    }else{
        printf("endereço de memória de b: %p", ptr2);
    }
    
    return 0;
}