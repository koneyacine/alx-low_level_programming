section .data
    hello db "Hello, Holberton", 10, 0  ; The string to be printed with a newline character

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello  ; Load the address of the string into rdi
    call printf    ; Call the printf function to print the string
    pop rbp
    ret
