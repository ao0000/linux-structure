#include<stdio.h>
#include<unistd.h>

#define N 2000

int main(void){
    int i;

    for(i = 0; i < N; i++){
        printf("%d, ", i);
        fflush(stdout);
        usleep(5000);
    }
    return 0;
}
