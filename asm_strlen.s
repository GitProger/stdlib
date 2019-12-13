/**
 *   Not actual file in 0.0bets version
 *   Most of code is stack(cdecl, stdcall) orientated
 *   But most of asm-code is register(fastcall, pascal) orientated
 *   So this 'strlen' version need for compatibility with asm-code
 */

__asm_strlen_local: ## result - %rax, argument - %rdi
    movq    %rdi, %rax
    WHILE_RAX_NE_0__0:
        cmpb    $0, (%rax)
        je      END_WHILE__0
        inc     %rax
        jmp     WHILE_RAX_NE_0__0
    END_WHILE__0:
    subq    %rdi, %rax
    ret
