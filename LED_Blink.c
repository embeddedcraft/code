// This is the example source code.
// Provided for learning for learners. 
// for more visit us ...
// http://embeddedcraft.org/
// For any query please feel free to contact us at ...
// embeddedcraft@gmail.com

#include<AT89X52.h>
void delay_ms(unsigned int ms); //delay function to generate delay of ms second
sbit LED = P1^0;
void main()
{
    // Infinity loop to continue LED Blink
	while(1)
    {
        // Glowing LED, P1.0 =0
		LED = 0; 
		//delay for one sec
        delay_ms(2000);
		//Switch off LED, P1.0=1
		LED = 1; 
		//delay for one sec
        delay_ms(2000);
    }
}
void delay_ms(unsigned int ms)
{
    unsigned int i,j;
    for(i=0;i<ms;i++)
        for(j=0;j<127;j++);
    
}
