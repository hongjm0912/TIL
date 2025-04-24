#include <stdio.h>
int main (){
    char hello[10];
    scanf("%s", hello);
    for (int i = 0; i < 10; ++i){
        printf("%c", hello[i]);
    }
}