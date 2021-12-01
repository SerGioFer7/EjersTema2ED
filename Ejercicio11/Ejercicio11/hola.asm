section .data

msg 	db "Hola, soy Sergio Fernández", 0Ah

len 	equ 	$ - msg

section.text

global_start

_start:

	mov 	eax,04h
	mov 	ebx, 01h
	mov 	ecx, msg
	mov 	edx, len
	int 	80h
	mov 	eax, 01h
	mov 	ebx, 00h
	int 	80h
