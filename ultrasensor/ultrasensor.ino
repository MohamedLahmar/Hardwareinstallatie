

#define ECHOPIN 10                           // Pin to receive echo pulse
#define TRIGPIN 9                            // Pin to send trigger pulse
#define BUZZER 3
#define redPin 11
#define greenPin 12
#define bluePin 13



void setup(){
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){
  digitalWrite(TRIGPIN, LOW);                   // Set the trigger pin to low for 2uS
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);                  // Send a 10uS high to trigger ranging
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);                   // Send pin low again
  int distance = pulseIn(ECHOPIN, HIGH);        // Read in times pulse
  distance= distance/58;                        // Calculate distance from time of pulse
  Serial.println(distance);                     
  delay(500);                                    // Wait 50mS before next ranging


  if(distance < 150 && distance > 70){
    Serial.println("lower than 100");
   
    delay(400);
     digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

 else if(distance < 70 && distance > 30){
    Serial.println("lower than 50");
  
    delay(200);
      digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
 
 else if(distance < 30){
    Serial.println("lower than 10");
    tone(BUZZER,1000,200);
    delay(10);
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  
  
}
