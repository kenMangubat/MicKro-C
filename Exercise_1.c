void main() {

   unsigned char i;

   TRISB = 0x00;

   while(1) {

      i = 0x00;


      while(i <= 0xFF) {
         PORTB = i;
         Delay_ms(200);

         if(i == 0xFF) break;
         i++;
      }


      while(i >= 0x00) {
         PORTB = i;
         Delay_ms(200);

         if(i == 0x00) break;
         i--;
      }
   }
}

