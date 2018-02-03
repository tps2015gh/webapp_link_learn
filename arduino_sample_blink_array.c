/*
  Blink

 
  by Thitipong  (github/tps2015gh)
  since 2018-02-03
  modify 2018-02-04-00:16

*/
int led[]={2,4,6 };
int count =3 ;
int a1sec = 1000; 
//int i_min = 60 ;
//int i_3min = 60 * 3 ;  
int timer = a1sec ; 
int pin2 = 2 ;
int pin4 = 4 ; 
int pin6 = 6 ;
int pb  = LED_BUILTIN ; 
int pin4_sec_period = 30;  // 30 sec  
int pin6_sec_period = 60 * 5 ;  // 5 mins  
// the setup function runs once when you press reset or power the board
void setup() { 
  // initialize digital pin LED_BUILTIN as an output.
  for (int i = 0 ;i < count ; i++)
      {pinMode(led[i], OUTPUT); }
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int isec = 0; 
  int hi = 1 ; 
  String msg = "";
  int blink_type = 1 ;
  int blink_type4 = 1 ;  
  int blink_type6 = 1 ;
  //==============================
  test_led();
  //==============================
  while(true){
        if ( blink_type == 1 ){
          digitalWrite(pin2, HIGH);   // turn the LED on (HIGH is the voltage level)
          blink_type = 0 ;   // next loop 
        }else{
           digitalWrite(pin2, LOW);   // turn the LED on (HIGH is the voltage level)
           blink_type = 1 ;  // next loop 
        }
        isec +=1 ;
        //========================================================
        Serial.println("sec=" + String(isec) + " % " + String(pin4_sec_period) 
                            + " = " + String(isec % pin4_sec_period));
        Serial.println("sec=" + String(isec) + " % " + String(pin4_sec_period) 
                            + " = " + String(isec % pin4_sec_period));
        //========================================================
        delay(timer);
        Serial.println("after delay " + String(timer) + " msec ");
        //======================================================== 
        if(isec % pin4_sec_period == 0 ){
          Serial.println("process pin4 " );
          if ( blink_type4 == 1 ){
            digitalWrite(pin4, HIGH);   // turn the LED on (HIGH is the voltage level)
            blink_type4 = 0 ;   // next loop 
          }else{
             digitalWrite(pin4, LOW);   // turn the LED on (HIGH is the voltage level)
             blink_type4 = 1 ;  // next loop 
          }           
        }
        //======================================================== 
        if(isec % pin6_sec_period == 0 ){
          Serial.println("process pin6 " );
          if ( blink_type6 == 1 ){
            digitalWrite(pin6, HIGH);   // turn the LED on (HIGH is the voltage level)
            blink_type6 = 0 ;   // next loop 
          }else{
             digitalWrite(pin6, LOW);   // turn the LED on (HIGH is the voltage level)
             blink_type6 = 1 ;  // next loop 
          }           
        }
  }//while 
}// loop

void test_led(){
    for(int i = 0 ; i < count ; i ++){
      digitalWrite(led[i], HIGH ) ; 
      delay(a1sec/2);
    }
    for(int i = 0 ; i < count ; i ++){
      digitalWrite(led[i], LOW ) ; 
      delay(a1sec/2);
    }
}
