void main() {

     TRISB=0x00;
     PORTB=0x00;

     while(1){

              PORTB=0x3F;
              Delay_ms(1000);
              PORTB=0x06;
              Delay_ms(1000);
     }
}