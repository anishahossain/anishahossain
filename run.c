#include <stdio.h>

int duplicate(char *name, int n){
    int dups = 0;
    char *pName = &name[0];
    while(pName < &name[n]){
        if(*pName == *(pName + 1)){
            dups = 1;
        }
        pName++;
    }
    return dups;
}

int main(){
    int n;
    printf("enter how many letters there are in  your name: ");
    scanf("%d", &n);
    char name[n];
    printf("Enter your name: ");
    for(int i = 0; i < n; i++){
        scanf("%c", &name[i]);

    }
    int is_there = duplicate(name, n);
    if(is_there){
        printf("there are duplicate letters in your name!");
    }
    else{
        printf("There are no duplicate letters in your name!");
    }




    return  0;
}