#include <stdio.h>
#define START 700
#define FINISH 1100

int n = START;
int is_prime(int n);
void Goldbach();

int main ()
{
    for(;n < FINISH; n+=2){
        Goldbach();
    }



}

int is_prime (int n){
    for (int k = 2; k < n; k++) { //PROCESSING USING FOR AND WHILE LOOP
        if (n % k == 0) {
            return 0;
        }
    }
    return 1;
}

void Goldbach(){
    for (int i = 2; i < n; i++){
        if (is_prime(i)&& is_prime (n-i)){
            printf("\n%d = %d + %d", n, i, n-i);
            break;
        }
    }
}




    