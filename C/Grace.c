#include <stdio.h>

#define FD "Grace_kid.c"
#define CODE "#include <stdio.h>%c%c#define FD %c%s%c%c#define CODE %c%s%c%c#define FT(x) int main(void) { fprintf(fopen(FD, x), CODE, 10, 10, 34, FD, 34, 10, 34, CODE, 34, 10, 10, 34, x, 34, 10, 10, 9, 10, 10); return 0; }%cFT(%c%s%c)%c/*%c%cCOM%c*/%c"
#define FT(x) int main(void) { fprintf(fopen(FD, x), CODE, 10, 10, 34, FD, 34, 10, 34, CODE, 34, 10, 10, 34, x, 34, 10, 10, 9, 10, 10); return 0; }
FT("w")
/*
	COM
*/
