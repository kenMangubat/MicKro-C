unsigned int i= 0;

void main() {

     TRISB= 0x00;
     
     while(1){
     
              PORTB=i++;
              Delay_ms(300);
     }

}