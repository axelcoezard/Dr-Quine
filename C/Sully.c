#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void)
{
char* code = "#include <stdio.h>%c#include <stdlib.h>%c%c#define N %d%c%cint main(void)%c{%cchar* code = %c%s%c;%cchar *fo, *fc, *compile, *execute;%casprintf(&fo, %cSully_%c%c%c, N - 1);%casprintf(&fc, %cSully_%c%c.c%c, N - 1);%casprintf(&compile, %cgcc -o %c%c %c%c%c, fo, fc);%casprintf(&execute, %c./%c%c%c, fo);%cfprintf(fopen(fc, %cw%c), code, 10, 10, 10, N - 1, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 37, 100, 34, 10, 34, 37, 100, 34, 10, 34, 37, 115, 37, 115, 34, 10, 34, 37, 115, 34, 10, 34, 34, 10, 10, 10, 10, 10);%csystem(compile);%cif (N > 0) system(execute);%creturn 0;%c}%c";
char *fo, *fc, *compile, *execute;
asprintf(&fo, "Sully_%d", N - 1);
asprintf(&fc, "Sully_%d.c", N - 1);
asprintf(&compile, "gcc -o %s %s", fo, fc);
asprintf(&execute, "./%s", fo);
fprintf(fopen(fc, "w"), code, 10, 10, 10, N - 1, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 37, 100, 34, 10, 34, 37, 100, 34, 10, 34, 37, 115, 37, 115, 34, 10, 34, 37, 115, 34, 10, 34, 34, 10, 10, 10, 10, 10);
system(compile);
if (N > 0) system(execute);
return 0;
}


