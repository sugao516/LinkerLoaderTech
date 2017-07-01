	.globl	syscall
syscall:
	push   %rbp
	mov    %rsp,%rbp
	push   %rdi
	push   %rsi
	push   %rdx
	push   %rcx
    mov %rdi, %rax #  ; use the write syscall
    mov %rsi, %rdi #  ; write to stdout
    mov %rdx, %rsi #; use string "Hello World"
    mov %rcx, %rdx # ; write 12 characters
	syscall
	pop    %rcx
	pop    %rdx
	pop    %rsi
	pop    %rdi
	pop    %rbp
	ret
