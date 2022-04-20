int LEDPins[ ]={2,3,4,5,6,7};

unsigned long letzterWechsel;

int zeitProLED = 200;

int aktuelleLED = 0;

void setup ( ) {
  for(int i = 0; i < 6;i++) {
    pinMode (LEDPins[i] , OUTPUT);
  }
}

void loop( ) {
  unsigned long aktuelleZeit = millis();

if(aktuelleZeit - letzterWechsel > zeitProLED) {
  digitalWrite(LEDPins[aktuelleLED],LOW);

  aktuelleLED = (aktuelleLED + 1) % 6;

  digitalWrite(LEDPins[aktuelleLED],HIGH);

  letzterWechsel = aktuelleZeit;
  
 }
}
