#include <stdio.h>

void other(void) {}

int main(void)
{
	char* code = "#include <stdio.h>%c%cvoid other(void) {}%c%cint main(void)%c{%c%cchar* code = %c%s%c;%c%cprintf(code, 10, 10, 10, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 10, 10, 9, 10, 10);%c%creturn 0;%c%c/*%c%c%cCOM 1%c%c*/%c}%c/*%c%cCOM 2%c*/%c";
	printf(code, 10, 10, 10, 10, 10, 10, 9, 34, code, 34, 10, 9, 10, 9, 10, 9, 10, 9, 9, 10, 9, 10, 10, 10, 9, 10, 10);
	return 0;
	/*
		COM 1
	*/
}
/*
	COM 2
*/
