void main() {

   unsigned char led;

   TRISB = 0x00;
   PORTB = 0x00;

   while(1) {

      led = 0x01;

      while(led != 0x00) {

         PORTB = led;
         Delay_ms(200);

         led = led << 1;
      }
   }
}
