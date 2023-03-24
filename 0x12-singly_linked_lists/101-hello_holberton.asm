SECTION .data
format db "%s", 10, 0
message db "Hello, Holberton", 0

SECTION .text
extern printf
global main

main:
	push rbp
	mov rdi, format
	mov rsi, message
	mov rax, 0
	call printf

	pop rbp

	mov rax, 0
	ret
