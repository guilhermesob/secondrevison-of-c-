
// Lecture : Introduction to C++ - Enumerations
// OCSALY                 IDE : CLion

#include <iostream>

int main() {

    //enum suits {clubs,diamonds,hears,spades};
    enum  suits {clubs,diamonds,hears,spades};

    enum suitsChar : char {myClubs, myDiamonds, myHearts, mySpades};

    enum carBrands {BMW=100,MERCEDES=200,FIAT=300,VW=400, RENAULT = 9999};

    //suits card1 = diamonds;
    suits card2 = suits::spades;
    suits card = suits::diamonds;
    char c = card + 10;


}

