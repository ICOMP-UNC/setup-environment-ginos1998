#include<stdio.h>
#include "greetings.h"
#include "sum.h"
#include "substract.h"

int main(int argc, char *argv[]) {
    printf("Hello from main!\n");
    greetings();
    printf("[libdyn] sum(3, 2) = %d\n", sum(3, 2));
    printf("[libsta] substract(3, 2) = %d\n", substract(3, 2));
    return 0;
}