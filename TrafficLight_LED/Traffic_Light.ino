int red1=2;
int yellow1=3;
int green1=4;

int red2=5;
int yellow2=6;
int green2=7;

int red3=8;
int yellow3=10;
int green3=9;

int red4=13;
int yellow4=12;
int green4=11;


void setup() {
  // put your setup code here, to run once:

  pinMode(red1 , OUTPUT);
  pinMode(yellow1 , OUTPUT);
  pinMode(green1 , OUTPUT);

  pinMode(red2 , OUTPUT);
  pinMode(yellow2 , OUTPUT);
  pinMode(green2 , OUTPUT);

  pinMode(red3 , OUTPUT);
  pinMode(yellow3 , OUTPUT);
  pinMode(green3 , OUTPUT);

  pinMode(red4 , OUTPUT);
  pinMode(yellow4 , OUTPUT);
  pinMode(green4 , OUTPUT);

}

void allRed()
     {
      digitalWrite(red1 , HIGH);
digitalWrite(yellow1 ,LOW);
digitalWrite(green1 ,LOW);

digitalWrite(red2 , HIGH);
digitalWrite(yellow2 ,LOW);
digitalWrite(green2 ,LOW);

digitalWrite(red3 , HIGH);
digitalWrite(yellow3 ,LOW);
digitalWrite(green3 ,LOW);

digitalWrite(red4 , HIGH);
digitalWrite(yellow4 ,LOW);
digitalWrite(green4 ,LOW);
         
      }

void allYellow()
     {
      digitalWrite(red1 , LOW);
digitalWrite(yellow1 ,HIGH);
digitalWrite(green1 ,LOW);

digitalWrite(red2 , LOW);
digitalWrite(yellow2 ,HIGH);
digitalWrite(green2 ,LOW);

digitalWrite(red3 , LOW);
digitalWrite(yellow3 ,HIGH);
digitalWrite(green3 ,LOW);

digitalWrite(red4 , LOW);
digitalWrite(yellow4 ,HIGH);
digitalWrite(green4 ,LOW);
         
      }

void allGreen()
     {
      digitalWrite(red1 , LOW);
digitalWrite(yellow1 ,LOW);
digitalWrite(green1 ,HIGH);

digitalWrite(red2 , LOW);
digitalWrite(yellow2 ,LOW);
digitalWrite(green2 ,HIGH);

digitalWrite(red3 , LOW);
digitalWrite(yellow3 ,LOW);
digitalWrite(green3 ,HIGH);

digitalWrite(red4 , LOW);
digitalWrite(yellow4 ,LOW);
digitalWrite(green4 ,HIGH);
         
      }
      


 void allOff()
     {
      digitalWrite(red1 , LOW);
digitalWrite(yellow1 ,LOW);
digitalWrite(green1 ,LOW);

digitalWrite(red2 , LOW);
digitalWrite(yellow2 ,LOW);
digitalWrite(green2 ,LOW);

digitalWrite(red3 , LOW);
digitalWrite(yellow3 ,LOW);
digitalWrite(green3 ,LOW);

digitalWrite(red4 , LOW);
digitalWrite(yellow4 ,LOW);
digitalWrite(green4 ,LOW);
         
      }

      void allOn()
     {
      digitalWrite(red1 , HIGH);
digitalWrite(yellow1 ,HIGH);
digitalWrite(green1 ,HIGH);

digitalWrite(red2 , HIGH);
digitalWrite(yellow2 ,HIGH);
digitalWrite(green2 ,HIGH);

digitalWrite(red3 , HIGH);
digitalWrite(yellow3 ,HIGH);
digitalWrite(green3 ,HIGH);

digitalWrite(red4 , HIGH);
digitalWrite(yellow4 ,HIGH);
digitalWrite(green4 ,HIGH);
         
      }
      

void light1()
    {
        

         

          
digitalWrite(green1 ,HIGH);
digitalWrite(red2 ,HIGH);
digitalWrite(red4 ,HIGH);
digitalWrite(red3 ,HIGH);

for(int i=0;i<10;i++)
{
digitalWrite(green1 ,HIGH);
delay(500);
digitalWrite(green1 ,LOW);
delay(500);
}      

 digitalWrite(green1 ,LOW);

for(int i=0;i<5;i++)

{
 
  digitalWrite(yellow1 ,HIGH);
  digitalWrite(yellow2 ,HIGH);
delay(500);
digitalWrite(yellow1 ,LOW);
digitalWrite(yellow2 ,LOW);
delay(500);
  
  }

   allOff();   
      
      }



void light2()
    {
              
digitalWrite(green2 ,HIGH);
digitalWrite(red1 ,HIGH);
digitalWrite(red4 ,HIGH);
digitalWrite(red3 ,HIGH);

for(int i=0;i<10;i++)
{
digitalWrite(green2 ,HIGH);
delay(500);
digitalWrite(green2 ,LOW);
delay(500);
}      

 digitalWrite(green2 ,LOW);

for(int i=0;i<5;i++)

{
 
  digitalWrite(yellow2 ,HIGH);
  digitalWrite(yellow3 ,HIGH);
delay(500);
digitalWrite(yellow2 ,LOW);
digitalWrite(yellow3 ,LOW);
delay(500);
  
  }

   allOff();   
      
      }

  void light3()
    {
              
digitalWrite(green3 ,HIGH);
digitalWrite(red1 ,HIGH);
digitalWrite(red4 ,HIGH);
digitalWrite(red2 ,HIGH);

for(int i=0;i<10;i++)
{
digitalWrite(green3 ,HIGH);
delay(500);
digitalWrite(green3 ,LOW);
delay(500);
}      

 digitalWrite(green3 ,LOW);

for(int i=0;i<5;i++)

{
 
  digitalWrite(yellow3 ,HIGH);
  digitalWrite(yellow4 ,HIGH);
delay(500);
digitalWrite(yellow3 ,LOW);
digitalWrite(yellow4 ,LOW);
delay(500);
  
  }

   allOff();   
      
      }    


void light4()
    {
              
digitalWrite(green4 ,HIGH);
digitalWrite(red1 ,HIGH);
digitalWrite(red2 ,HIGH);
digitalWrite(red3 ,HIGH);

for(int i=0;i<10;i++)
{
digitalWrite(green4 ,HIGH);
delay(500);
digitalWrite(green4 ,LOW);
delay(500);
}      

 digitalWrite(green4 ,LOW);

for(int i=0;i<5;i++)

{
 
  digitalWrite(yellow4 ,HIGH);
  digitalWrite(yellow1 ,HIGH);
delay(500);
digitalWrite(yellow4 ,LOW);
digitalWrite(yellow1 ,LOW);
delay(500);
  
  }

   allOff();   
      
      }

void loop() {

//allOn();
  light1();

  light2();

  light3();

  light4();
}
