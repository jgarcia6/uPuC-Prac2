// To be defined in ASM as public procedures
extern void putchar(char data);
extern char getchar(void);

// To be defined in C
void gets(char *str);
void puts(char *str);
void itoa(unsigned int number, char* str, unsigned char base);
unsigned int atoi(char *str);

typedef struct bullsAndCowsTag{
    unsigned bulls:4;
    unsigned cows:4;
} bullsAndCowsType;

bullsAndCowsType evalBullsAndCows(char *secrete, char *guess);

#ifndef TEST_HARNESS
int main(void)
{
    // Port Prac1 to achieve same behavior
    return 0;
}
#endif // main()
