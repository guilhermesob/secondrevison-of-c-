
// Lecture : Default Values            OCSALY                          IDE : CLion


#include <stdio.h>

int outside;  // 0 by DEFAULT

int counter(){
    static int myCount; // 0
    return ++myCount; // RETURNS 1
}
int main() {
    int inside;
    inside++;
    outside++; // INCREMENT by +1

    int a {}; // 0
    // char DEFAULT VALUE = /0
    // bool DEFAULT VALUE = false
    // pointer DEFAULT VALUE = nullptr
    printf("INSIDE  : %d\n", inside);
    printf("OUTSIDE : %d\n", outside); // OUTPUT : 1
    printf("COUNT FUNCTION : %d",counter());

    return 0;
}

