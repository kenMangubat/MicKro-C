unsigned int i=0;

void main() {

     TRISB=0x00;
     PORTB=0x00;
     
     while(1){
     
              for(i=0;i<=9;i++){

                                PORTB=i;
                                Delay_ms(1000);
              
              }
     }
}