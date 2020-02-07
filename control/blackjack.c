#include "blackjack.h"
#include "control.h"
#include <stdlib.h>
#include <stdio.h>

int* cardtotal;
int* initialcard;
int first, total, deal;
int* dealcard;

int* initialcardpick(int* initialcard) {
    int cards[52] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52};
    
    int randomIndex = rand() % 52;
    first = cards[randomIndex];
     return first;
    
}

int* dealcardpick(int* dealcard, int first) {
    int cardsdeal[52] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52};
    
    int randomIndexdeal = rand() % 52;
   
    int randomValuedeal = cardsdeal[randomIndexdeal];
    if (randomValuedeal == initialcard) {
           randomIndexdeal--;
       }
    return deal;
}

int* totalcard(int* cardtotal, int* initialcard, int* dealcard) {
    total = initialcard[first] + dealcard[deal];
    return total;
}

