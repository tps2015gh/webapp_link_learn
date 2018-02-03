/*
  Blink 3 LED , very simple , test variable using C array .

 
  by Thitipong  (github/tps2015gh)
  since 2018-02-03

*/
int led[]={LED_BUILTIN,2,4};
int count =3 ; 
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for (int i = 0 ;i < count ; i++)
  pinMode(led[i], OUTPUT);
}

// the loop function runs over and over again forever
void loop() { 

int timer = 100;
  for(int i = 0 ; i< count ; i++){
    digitalWrite(led[i], HIGH);   // turn the LED on (HIGH is the voltage level)
    for (int j = 0 ;j < count ; j++){
      if (j != i ){
          digitalWrite(led[j], LOW);   // turn the LED on (HIGH is the voltage level)    
      }
    }
    delay(timer);                       // wait for a second
  }  
}
