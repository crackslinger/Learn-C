#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(void *a, void *b, size_t s) {
    void *tmp = malloc(s);
    memcpy(tmp, a, s);
    memcpy(a, b, s);
    memcpy(b, tmp, s);
    free(tmp);
}

int main() {
    int a = 20;
    int b = 25;
    size_t k = sizeof(int);
    
    swap(&a, &b, k);

    printf("Value of a and b after swaping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);


    char m[] = "LoL";
    char n[] = "WoW";
    size_t o = (sizeof(char))*4;

    swap(&m, &n, o);

    printf("Value of m and n after swaping\n");
    printf("a = %s\n", m);
    printf("b = %s\n", n);

    return 0;

}
