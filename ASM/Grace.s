%define FILENAME "Grace_kid.s"
%define CODE "%%define FILENAME %2$cGrace_kid.s%2$c%1$c%%define CODE %2$c%3$s%2$c%1$c%%define MAIN _main:%1$csection .data%1$ccode: db CODE, 0%1$cfile: db FILENAME, 0%1$cmode: db %2$cw%2$c, 0%1$csection .text%1$cextern _fopen%1$cextern _fprintf%1$cglobal _main%1$cMAIN%1$cpush rbp%1$cmov rbp, rsp%1$cmov rdi, file%1$cmov rsi, mode%1$ccall _fopen%1$clea rsi, [rel code]%1$cmov rdi, rax%1$cmov rdx, 0xA%1$cmov rcx, 0x22%1$clea r8, [rel code]%1$ccall _fprintf%1$cleave%1$cret%1$c"
%define MAIN _main:
section .data
code: db CODE, 0
file: db FILENAME, 0
mode: db "w", 0
section .text
extern _fopen
extern _fprintf
global _main
MAIN
push rbp
mov rbp, rsp
mov rdi, file
mov rsi, mode
call _fopen
lea rsi, [rel code]
mov rdi, rax
mov rdx, 0xA
mov rcx, 0x22
lea r8, [rel code]
call _fprintf
leave
ret
