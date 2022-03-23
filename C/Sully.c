#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void){
int N = 5;
char* code = "#include <stdio.h>%c#include <unistd.h>%c#include <stdlib.h>%cint main(void){%cint N = %d;%cchar* code = %c%s%c;%cchar *fo, *fc, *fn, *compile, *execute;%casprintf(&fn, %cSully_%c%c.c%c, N);%cif (access(fn, F_OK) != -1) N--;%casprintf(&fo, %cSully_%c%c%c, N);%casprintf(&fc, %cSully_%c%c.c%c, N);%casprintf(&compile, %cgcc -o %c%c %c%c%c, fo, fc);%casprintf(&execute, %c./%c%c%c, fo);%cFILE* fd = fopen(fc, %cw%c);%cfprintf(fd, code, 10, 10, 10, 10, N, 10, 34, code, 34, 10, 10, 34, 37, 100, 34, 10, 10, 34, 37, 100, 34, 10, 34, 37, 100, 34, 10, 34, 37, 115, 37, 115, 34, 10, 34, 37, 115, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);%cfclose(fd);%csystem(compile);%cif (N > 0) system(execute);%creturn 0;}%c";
char *fo, *fc, *fn, *compile, *execute;
asprintf(&fn, "Sully_%d.c", N);
if (access(fn, F_OK) != -1) N--;
asprintf(&fo, "Sully_%d", N);
asprintf(&fc, "Sully_%d.c", N);
asprintf(&compile, "gcc -o %s %s", fo, fc);
asprintf(&execute, "./%s", fo);
FILE* fd = fopen(fc, "w");
fprintf(fd, code, 10, 10, 10, 10, N, 10, 34, code, 34, 10, 10, 34, 37, 100, 34, 10, 10, 34, 37, 100, 34, 10, 34, 37, 100, 34, 10, 34, 37, 115, 37, 115, 34, 10, 34, 37, 115, 34, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10);
fclose(fd);
system(compile);
if (N > 0) system(execute);
return 0;}


