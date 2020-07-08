
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

; add your code here  

mov ax,0h
mov bx,1h
mov cx,5h

ll:
 add ax,bx
 inc bx
 inc bx
 loop ll
 

ret




