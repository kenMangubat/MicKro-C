int i;

void main() {

     TRISB= 0x00;
     PORTB= 0x00;
     
     while(1)
     
     for(i=9;i>=0;i--){

     PORTB=i;
     Delay_ms(1000);
     
     }
}