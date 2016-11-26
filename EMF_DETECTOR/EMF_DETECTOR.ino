
#define NUMREADINGS 10 // raise this number to increase data smoothing

int senseLimit = 10; // raise this number to decrease sensitivity (up to 1023 max)
int probePin = 5; // analog 5
int val = 0; // reading from probePin


int ledA=2;
int ledB=3;
int ledC=4;
int ledD=5;
int ledE=6;
int ledF=7;
int ledG=8;

// variables for smoothing

int readings[NUMREADINGS];                // the readings from the analog input
int index = 0;                            // the index of the current reading
int total = 0;                            // the running total
int average = 0;                          // final average of the probe reading

//CHANGE THIS TO affect the speed of the updates for numbers. Lower the number the faster it updates.
int updateTime = 300;



void Display0()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,LOW);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,HIGH);  
    }


void Display1()
  {
     digitalWrite(ledA,HIGH);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,HIGH);
     digitalWrite(ledE,HIGH);
     digitalWrite(ledF,HIGH);
     digitalWrite(ledG,HIGH);  
    }

void Display2()
  {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,HIGH);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,LOW);
     digitalWrite(ledF,HIGH);
     digitalWrite(ledG,LOW);  
    }
void Display3()
  {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,HIGH);
     digitalWrite(ledF,HIGH);
     digitalWrite(ledG,LOW);  
    }


void Display4()

   {
     digitalWrite(ledA,HIGH);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,HIGH);
     digitalWrite(ledE,HIGH);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
    }

    void Display5()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,HIGH);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,HIGH);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
    }

void Display6()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,HIGH);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,LOW);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
    }


void Display7()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,HIGH);
     digitalWrite(ledE,HIGH);
     digitalWrite(ledF,HIGH);
     digitalWrite(ledG,HIGH);  
    }


    void Display8()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,LOW);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
    }

     void Display9()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,HIGH);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
    }


void DisplayE()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,HIGH);
     digitalWrite(ledC,HIGH);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,LOW);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
    }


    void DisplayF()

   {
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,HIGH);
     digitalWrite(ledC,HIGH);
     digitalWrite(ledD,HIGH);
     digitalWrite(ledE,LOW);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
    }

    
void LEDlow(){
     digitalWrite(ledA,LOW);
     digitalWrite(ledB,LOW);
     digitalWrite(ledC,LOW);
     digitalWrite(ledD,LOW);
     digitalWrite(ledE,LOW);
     digitalWrite(ledF,LOW);
     digitalWrite(ledG,LOW);  
}    


void intro()
   {
//Can add any think for the 
        Display0();
        delay(2000);
    
    }

void setup() {
  // put your setup code here, to run once:
  pinMode(ledA,OUTPUT);
   pinMode(ledB,OUTPUT);
    pinMode(ledC,OUTPUT);
     pinMode(ledD,OUTPUT);
      pinMode(ledE,OUTPUT);
       pinMode(ledF,OUTPUT);
        pinMode(ledG,OUTPUT);


   Serial.begin(9600);  // initiate serial connection for debugging/etc

  for (int i = 0; i < NUMREADINGS; i++)
    readings[i] = 0;                      // initialize all the readings to 0

    intro(); //Runs the intro:'EFD0123456789'

        
        }

void loop() {
  // put your main code here, to run repeatedly:

 /* Display0();
  delay(1000);

  Display1();
  delay(1000);

  Display2();
  delay(1000);

  Display3();
  delay(1000);

   Display4();
  delay(1000);

  Display5();
  delay(1000);


  Display6();
  delay(1000);

  Display7();
  delay(1000);

   Display8();
  delay(1000);

   Display9();
  delay(1000);*/


   LEDlow();
  val = analogRead(probePin);  // take a reading from the probe

  if(val >= 1){                // if the reading isn't zero, proceed
    val = constrain(val, 1, senseLimit);  // turn any reading higher than the senseLimit value into the senseLimit value
    val = map(val, 1, senseLimit, 1, 1023);  // remap the constrained value within a 1 to 1023 range

    total -= readings[index];               // subtract the last reading
    readings[index] = val; // read from the sensor
    total += readings[index];               // add the reading to the total
    index = (index + 1);                    // advance to the next index

    if (index >= NUMREADINGS)               // if we're at the end of the array...
      index = 0;                            // ...wrap around to the beginning

    average = total / NUMREADINGS;          // calculate the average

    if (average > 50){                // if the average is over 50 ...
      Display0();   // Show a 0

    }

    if (average > 150){               // and so on ...
      Display1();   // Show a 1
    }

    if (average > 250){
      Display2();    // Show a 2
    }

    if (average > 350){
      Display3();    // Show a 3
    }


    if (average > 450){
      Display4();    // Show a 4
    }

    if (average > 550){
      Display5();   // Show a 5
    }

    if (average > 650){
      Display6();   // Show a 6

    }

    if (average > 750){
      Display7();   // Show a 7
    }

    if (average > 850){
     Display8();    // Show a 8
    }

    if (average > 950){
      Display9();    // Show a 9
    }
    Serial.println(average); // use output to aid in calibrating
    delay(updateTime);
  }

}



