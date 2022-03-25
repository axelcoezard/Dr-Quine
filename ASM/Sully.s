section .data
code: db "", 0
to_check: db "Sully_5.s", 0
to_compile: db "Sully_%d.s", 0
to_exec: db "Sully_%d", 0
compile: db "nasm -f macho64 %2$s && gcc -o %1$s %3$s && ./%1$s", 0

section .text
global _main
extern _sprintf
extern _dprintf
extern _system
extern _access

_main:
xor rcx, rcx
push rbp
mov rbp, rsp
mov rdi, to_check
mov rsi, 0x0
call _access
jae _main
