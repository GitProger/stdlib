.text

.macro success
    movq  $0, %rax
    ret
.endm


__asm_strlen_local: ## result - %rax, argument - %rdi
    movq    %rdi, %rax
    WHILE_RDX_NE_0__0:
        cmpb    $0, (%rax)
        je      END_WHILE__0
        inc     %rax
        jmp     WHILE_RDX_NE_0__0
    END_WHILE__0:
    subq    %rdi, %rax
    ret


.globl    __printstr
.type     __printstr, @function
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

.section .__small_std_lib_section_info
__VERSION__: 
    .string " 0.1b "
