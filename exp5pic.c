#include<p18f4550.h>
#include"vector_relocate.h"
void msdelay(unsigned int time);
void main(){
	unsigned int i,val;
	INTCON2bits.RBPU=0;
	ADCON1=0x0f;
	TRISD=0x00;
	TRISBbits.TRISB0=1;
	TRISBbits.TRISB1=1;
	TRISCbits.TRISC1=0;
	TRISCbits.TRISC2=0;
	PORTCbits.RC1=0;
	PORTCbits.RC2=0;
	while(1){
		if(PORTBbits.RB0==0){
			val=1;
		}
		if(PORTBbits.RB1==0){
			val=2;
		}
		if(val==1){
			PORTCbits.RC1=1;
			PORTCbits.RC2=1;
			PORTD=0x80;
			msdelay(100);
			for(i=0;i<8;i++){
				PORTD=PORTD>>1;
				msdelay(100);
			}
		}
		if(val==2){
			PORTCbits.RC1=0;
			PORTCbits.RC2=0;
			PORTD=0x01;
			msdelay(100);
			for(i=0;i<8;i++){
				PORTD=PORTD<<1;
				msdelay(100);
			}
		}
	}
}

void msdelay(unsigned int time){
unsigned int p,q;
for(p=0;p<time;p++){
	for(q=0;q<1275;q++);
	}
}