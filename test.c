#include <stdio.h>
#include <string.h>
int main(){
    char seq[] = "Let's test the following\n";
    char seq2[] = {'N', 'o', ' ', 's', 'e', 'g', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', ' ', 'f', 'a', 'u', 'l', 't', ' ', 'h', 'e', 'r', 'e', '!', '\n', '\0'};
    int zero = 0;
    printf("%s", seq);
    printf("%s", seq2);
    printf("%d", zero);

    return 0;
}