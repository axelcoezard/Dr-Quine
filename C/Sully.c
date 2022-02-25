#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void)
{
char* code = "#include <stdio.h>%c#include <stdlib.h>%c%c#define N %d%c%cint main(void)%c{%cchar* code = %c%s%c;%cchar *fo, *fc, *compile, *execute;%casprintf(&fo, %cSully_%c%c%c, N - 1);%casprintf(&fc, %cSully_%c%c.c%c, N - 1);%casprintf(&compile, %cgcc -o %c%c %c%c%c, fo, fc);%casprintf(&execute, %c./%c%c%c, fo);%cFILE* fd = fopen(fc, %cw%c);%cfprintf(fd, code, 10, 10, 10, N - 1, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 37, 100, 34, 10, 34, 37, 100, 34, 10, 34, 37, 115, 37, 115, 34, 10, 34, 37, 115, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);%cfclose(fd);%csystem(compile);%cif (N > 1) system(execute);%creturn 0;%c}%c";
char *fo, *fc, *compile, *execute;
asprintf(&fo, "Sully_%d", N - 1);
asprintf(&fc, "Sully_%d.c", N - 1);
asprintf(&compile, "gcc -o %s %s", fo, fc);
asprintf(&execute, "./%s", fo);
FILE* fd = fopen(fc, "w");
fprintf(fd, code, 10, 10, 10, N - 1, 10, 10, 10, 10, 34, code, 34, 10, 10, 34, 37, 100, 34, 10, 34, 37, 100, 34, 10, 34, 37, 115, 37, 115, 34, 10, 34, 37, 115, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);
fclose(fd);
system(compile);
if (N > 1) system(execute);
return 0;
}


