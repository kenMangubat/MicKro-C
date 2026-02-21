unsigned char count;
unsigned char tens;
unsigned char units;

void main() {

    TRISB = 0x00;   // PORTB as output
    PORTB = 0x00;

    while(1) {

        for(count = 0; count <= 99; count++) {

            tens = count / 10;
            units = count % 10;

            PORTB = (tens << 4) | units;

            Delay_ms(1000);   // 1 second delay
        }
    }
}
