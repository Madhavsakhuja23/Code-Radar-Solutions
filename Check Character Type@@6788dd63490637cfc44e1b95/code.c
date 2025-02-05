#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if(c==65|| c==69|| c==73|| c==79 ||c==85 ||c==97 ||c==101 ||c==105 ||c==111 ||c==117){
        printf("Vowel");
    }
    else if((c>=65 && c<=90) || (c>=97 && c<=122)){
        printf("consonant");
    }
    else if(c>=48 && c<=57){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}