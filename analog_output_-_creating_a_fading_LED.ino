void setup() {

pinMode(5 , OUTPUT);
Serial.begin(9600);

   
 

}

void loop() {

int potstate = analogRead(A0);
Serial.println(potstate);                              // its resolution is 0 to 1023
int mappedstate = map(potstate , 0 , 1023 , 0 , 255);
analogWrite(5 , mappedstate); // but the resolution of analogWrite is 0 to 255 but potstate takes value from 0 to 1023 and   



  

}
