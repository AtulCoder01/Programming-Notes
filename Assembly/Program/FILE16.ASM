;print A to Z by using loop
dosseg
.model small
.stack 100h
.data
.code
main proc

mov cx, 26
mov dl, 65
L1:
mov ah, 2
int 21h
inc dl
mov bl,dl

mov dl, 10
mov ah, 2
int 21h

mov dx,bx

loop L1
mov ah, 4ch
int 21h
main endp
end main
