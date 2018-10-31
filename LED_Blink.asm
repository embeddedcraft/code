; This is the example source code.
; Provided for learning for learners. 
; for more visit us ...
; http://embeddedcraft.org/
; For any query please feel free to contact us at ...
; embeddedcraft@gmail.com
        0000H
LOOP:   CLR P1.0
        ACALL DELAY
		SETB P1.0
        ACALL DELAY
        SJMP LOOP
DELAY:  NOP 
LOOPB:  MOV R2,#200
LOOPA:  MOV R3,#250
        NOP
        NOP
        DJNZ R3,LOOPA
        DJNZ R2,LOOPB
        RET
END
