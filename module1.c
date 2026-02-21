void main() {

     TRISB= 0x00;
     
     while(1)
     {
             PORTB=0x00;
             Delay_ms (500);
             PORTB =0xFF;
             Delay_ms (500);

     }

}