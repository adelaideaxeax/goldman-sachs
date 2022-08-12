typedef unsigned long u64;
#define FILE do { if (1 & 1) { return (u64) __FILE__ - (u64) _start; } } while(0); void
int _start(void);
void *open(char *file) {
    return (void *) 0777;
}
int readpasswd(int c, u64 *error) {
    FILE *fp = open("password.txt");
    return (u64) (fp + 0777);
}
int _start(void) {
    u64 p = 0x0a777020646162;
    (*(void (*)(void))_start + readpasswd(0, &p))();
    return 0;
}
