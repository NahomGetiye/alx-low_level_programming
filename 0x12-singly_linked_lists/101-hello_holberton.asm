section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
    global main

    extern printf

    main:
        ; Push the hello string and the format string onto the stack
        push qword hello
        push qword format

        ; Call printf with the format string and the address of the hello string
        mov rdi, rsp
        xor rax, rax
        call printf

        ; Clean up the stack and exit the program
        add rsp, 16
        xor eax, eax
        ret`
