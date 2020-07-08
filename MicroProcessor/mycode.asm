
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

; add your code here  

code segment
    assume cs:code,ds:code
    mov bx,1234h
    mov cx,5678h
    sub bx,cx   
    mov al,13h
    mov dh,01h
    mov al,dh
    hlt
    code ends
end

ret




