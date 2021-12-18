# Notes

## Example of assembler instructions (`strlen`)

```bash
/*
   0x0000000000001149 <+0>:     endbr64 
   0x000000000000114d <+4>:     push   %rbp
   0x000000000000114e <+5>:     mov    %rsp,%rbp
   0x0000000000001151 <+8>:     mov    %rdi,-0x18(%rbp)
   0x0000000000001155 <+12>:    cmpq   $0x0,-0x18(%rbp)
   0x000000000000115a <+17>:    jne    0x1163 <myStrlen+26>
   0x000000000000115c <+19>:    mov    $0x0,%eax
   0x0000000000001161 <+24>:    jmp    0x1195 <myStrlen+76>
   0x0000000000001163 <+26>:    movq   $0x0,-0x8(%rbp)
   0x000000000000116b <+34>:    mov    -0x18(%rbp),%rax
   0x000000000000116f <+38>:    movzbl (%rax),%eax
   0x0000000000001172 <+41>:    mov    %al,-0x9(%rbp)
   0x0000000000001175 <+44>:    jmp    0x118b <myStrlen+66>
   0x0000000000001177 <+46>:    addq   $0x1,-0x8(%rbp)
   0x000000000000117c <+51>:    addq   $0x1,-0x18(%rbp)
   0x0000000000001181 <+56>:    mov    -0x18(%rbp),%rax
   0x0000000000001185 <+60>:    movzbl (%rax),%eax
   0x0000000000001188 <+63>:    mov    %al,-0x9(%rbp)
   0x000000000000118b <+66>:    cmpb   $0x0,-0x9(%rbp)
   0x000000000000118f <+70>:    jne    0x1177 <myStrlen+46>
   0x0000000000001191 <+72>:    mov    -0x8(%rbp),%rax
   0x0000000000001195 <+76>:    pop    %rbp
   0x0000000000001196 <+77>:    retq 
*/
```

## `strlen` of captnflm

```c
size_t myStrlen(const char *s) {
  if (!s) {
    return 0;
  } else {
    const char *t = s;
    
    while (*(t++));
    
    // The difference between memory addresses
    // is the length of the string
    return (t - 1) - s; // ptrdiff_t
  }
}
```