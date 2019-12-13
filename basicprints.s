.text

.macro success
    movq  $0, %rax
    ret
.endm

.include "asm_strlen.s"
####################################
## MODULE INFO #####################
    .globl    __printstr
    .type     __printstr, @function
    .globl    __scanstr
    .type     __scanstr, @function
####################################

__printstr:
    pushq   %rbp
    movq    %rsp, %rbp
    movq    %rdi, %rsi   # i dont know how to fix it, but argument is rdi
    call    __asm_strlen_local #the same as __strlen
    movq    %rax, %rdx
    movq    $1, %rax
    movq    $1, %rdi
    syscall 
    popq    %rbp
    ret
    
## .size printstr, . - printstr

__scanstr:
    pushq   %rbp
    movq    %rsp, %rbp

    popq    %rbp
    ret


.section .__small_std_lib_section_info
__VERSION__: 
    .string " 0.1b "
