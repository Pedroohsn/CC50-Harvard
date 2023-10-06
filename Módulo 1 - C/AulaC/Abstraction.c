#include <stdio.h>

//Protótipo
void meow(int);

int main(void) {
    
        meow(3);
}
void meow(int n){
    for(int i = 0;i < n ;i++){
        printf("meow\n");
    }
}
