section .data
code: db "section .data%1$ccode: db %2$c%3$s%2$c, 0%1$csection .text%1$cextern _printf%1$cglobal _main%1$c; COM_2%1$c_main:%1$c; COM_1%1$cpush rbp%1$cmov rbp, rsp%1$clea rdi, [rel code]%1$cmov rsi, 0xA%1$cmov rdx, 0x22%1$clea rcx, [rel code]%1$ccall _printf%1$cleave%1$ccall _useless%1$c_useless:%1$cret%1$c", 0
section .text
extern _printf
global _main
; COM_2
_main:
; COM_1
push rbp
mov rbp, rsp
lea rdi, [rel code]
mov rsi, 0xA
mov rdx, 0x22
lea rcx, [rel code]
call _printf
leave
call _useless
_useless:
ret
