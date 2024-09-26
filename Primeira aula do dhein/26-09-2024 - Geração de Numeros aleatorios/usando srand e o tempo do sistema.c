#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int r;
    srand((unsigned)time (NULL));
    for(int i = 0; i < 20; i++){
        r =rand()%11 + 20;
        printf("%d\n", r);
    }

}
