;
; ToggleLED.asm
;
; Created: 3/28/2019 6:09:27 PM
; Author : angel
;

ldi r16, 0x00
out DDRA, r16
ldi r16, 0xFF
out DDRC, r16

; Replace with your application code
start:
	// IN is when we are reading -> PIN
	// OUT is when we are writing -> PORT

	in r17, PINA
	cpi r17, 0x00
	brne ledOn

ledOff:
	ldi r16, 0x00
	out PORTC, r16
	jmp start
	
ledOn:
	ldi r16, 0xff
	out PORTC, r16
	jmp start
end:
	jmp end
	