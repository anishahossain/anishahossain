#include <stdio.h>

int b = 12, c= 9;
void f();

int main(void){
    int b = 7;
    c++;
    f();
    printf("%d %d ", b,c);
    return 0;
}

void f(){
    b++;
    printf("%d %d ", b, c);
}