/*========================================
             PWM DEMO

==========================================
Description:




Programmer:
  Yuzon, Maria Rebekah J.
  Manicang, Joshua G.

 Date:
  9 Sept 2026 
----------------------------------------*/
//GPIOs
const uint8_t LED = 32;

// PWM parameters
const int  FREQ = 5000;
const uint8_t RES = 8;
int bright = 0;
int t_delay = 100;
int fade = 5;

void setup() {
  ledcAttach(LED,FREQ,RES);

}

void loop() {
  ledcWrite(LED,bright);
  bright += fade;

  if(bright >= 255 || bright <= 0){
    fade = -fade;
  }
  delay(t_delay);
  }

