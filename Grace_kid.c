#include <stdio.h>

#define FD "Grace_kid.c"
#define CODE "#include <stdio.h>%c%c#define FD %c%s%c%c#define CODE %c%s%c%c#define MAIN(x) int main(void) { FILE* fd = fopen(FD, x); fprintf(fd, CODE, 10, 10, 34, FD, 34, 10, 34, CODE, 34, 10, 10, 34, x, 34, 10, 10); return 0; }%cMAIN(%c%s%c)%c/* COM */%c"
#define MAIN(x) int main(void) { FILE* fd = fopen(FD, x); fprintf(fd, CODE, 10, 10, 34, FD, 34, 10, 34, CODE, 34, 10, 10, 34, x, 34, 10, 10); return 0; }
MAIN("w")
/* COM */
