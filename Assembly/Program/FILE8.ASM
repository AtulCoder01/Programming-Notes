;Program to convert capital letter to small letter
dosseg
.model small
.data
.stack 100h
.code
main proc

mov ah, 1
int 21h
add al, 32
mov dl, al
mov ah, 2
int 21h

mov ah, 4ch
int 21h

main endp
end main
