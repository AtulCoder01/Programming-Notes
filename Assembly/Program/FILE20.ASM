;print character usig array
dosseg
.model small
.stack 100h
.data
        arr db 3 dup('a')
.code
main proc
        mov ax, @data
        mov ds, ax
        mov si, offset arr
        mov dx, [si]
        ;add dx, 48
        mov ah, 2
        int 21h

       inc si; add si,1
        mov dx, [si]
       ; add dx, 48
        mov ah, 2
        int 21h

       inc si; add si,1
        mov dx, [si]
        ;add dx, 48
        mov ah, 2
        int 21h

        mov ah, 4ch
        int 21h


main endp
end main
