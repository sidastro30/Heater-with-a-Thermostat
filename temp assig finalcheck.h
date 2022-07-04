#include <LiquidCrystal.h>
#define normal_up_range 66//66-70
#define normal_down_range 70//70-66
#define fastrange 50//50-66 
#define chatloop 2
//int temperature = 0.0;

//TMP36 Pin Variables
int sensorPin = 0; //the analog pin the TMP36's Vout (sense) pin is connected to
                        //the resolution is 10 mV / degree centigrade with a
                        //500 mV offset to allow for negative temperatures

float volt=0;
int blueLED = 7; //heat dec
int yellowLED = 6;//fast heat
int redLED = 8; //heat inc
int greenLED=9;//chat

float temp;//int temp=62;
int chaterr=0;

unsigned int c1=0;//c1-up
unsigned int c2=0;  //c2-down
LiquidCrystal lcd(12,11,2,3,4,5);
void NORMAL_HEAT_u(void);

void NORMAL_HEAT_d(void);

void FAST_HEAT(void);

void chaterring(void);
                         
void setup()
{
  // lcd.begin(16, 2);
  Serial.begin(9600);
  
   pinMode(13, OUTPUT);   // heating element
    pinMode(blueLED, OUTPUT);  //compressor for cooling
    pinMode(yellowLED, OUTPUT); // pump for circulating the water.
  pinMode(redLED, OUTPUT); // pump for circulating the water.
 // Serial.print("setup");
}
                            
void loop()
{
  
  
   //getting the voltage reading from the temperature sensor
 int reading = analogRead(sensorPin);  
 
 // converting that reading to voltage, for 3.3v arduino use 3.3
 float voltage = reading * 5.0;
 voltage /= 1024.0; 
 
 // print out the voltage
 Serial.print(voltage); Serial.println(" volts");
 
 // now print out the temperature
 float temperatureC = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((voltage - 500mV) times 100)
 Serial.print(temperatureC); Serial.println(" degrees C");
 
 // now convert to Fahrenheit
 float temp = (temperatureC * 9.0 / 5.0) + 32.0;
 Serial.print(temp); Serial.println(" degrees F");
  
  
  
  unsigned int c1=0;//c1-up
unsigned int c2=0;  //c2-down
//temp=50;
  //temp= analogRead(A0);//(analogRead(A0) * 5.0 / 1024.0); //if you want to use 3.3 V i think it needs to be multiplied by 3.3 not 5 here.
  //volt=(analogRead(A0) * 5.0 / 1024.0);
  //Serial.print( "t=");Serial.print(temp);Serial.print( "   volts");Serial.print(volt);  
  
  //temperature = temperature;
    // convert to Fahrenheit T(°F) = T(°C) × 9/5 + 32
  //  temp = temperature;//((temperature * 9)/5) + 32;
  //temp;
  Serial.print(temp);
  Serial.println(" value");
  while((temp>50) && (temp<75))//controller check  1  &&(temp>0.0)
  {
    Serial.println( "main....");
      if((temp>=fastrange)&&(temp<normal_up_range)) //||(temp>=normal_up_range)
      {
        Serial.println( "F1....");
    FAST_HEAT();//fast heat check  2
      }
      else if (temp==normal_up_range)//66 //NORMAL_HEAT_u();//fast heat out  3
               {//goto NORMAL_HEAT_u
        Serial.println( "Nu....");
        Serial.print("tempU");Serial.print(temp);Serial.println("");
       NORMAL_HEAT_u();//fast heat out  3
               }
      else if(temp==normal_down_range)//70
             {//goto NORMAL_HEAT_d//60<temp <75;
        Serial.println( "Nd....");
        Serial.print("tempD");Serial.print(temp);Serial.println("");

 NORMAL_HEAT_d();  //4 
             }
    else  {Serial.println( "NOOOOOO state");}//FAST_HEAT();}
    }

  
 }



void NORMAL_HEAT_u(void)//66 inc to 70   66<temp<70;crossing limit 70 high
{ 
   Serial.print(temp); Serial.println(" degrees F");
  
  c1++;

  Serial.print("start if c1="); Serial.println(c1 );
 if(c1<2){

    Serial.print("in if c1="); Serial.println(c1 );       
   for (temp; temp<=70; temp++)//normal_up_range66 to      normal_down_range 70
                {
                   Serial.print("HEAT_u_START");
      Serial.print(temp); Serial.println(" degrees F");
  
                   Serial.print("tempup");Serial.print(temp);Serial.println("");
                   digitalWrite(redLED,HIGH);
                   digitalWrite(yellowLED,LOW);//heaton=1;// relay on as led
                   digitalWrite(blueLED,LOW);//heatoff=0;
     
                }
          Serial.print("exit HEAT_u go to heat down");
          delay(100);
      	  NORMAL_HEAT_d();//goto NORMAL_HEAT_d 
           }
 else{ Serial.print("else c1="); Serial.println(c1 );  chaterring();}
  }




void NORMAL_HEAT_d(void)//dec down from 70 to 60(range of NORMAL_HEAT_u)
{ 
 c2++;
  Serial.print("satrt if c2=");Serial.println(c2);
 if(c2<2){
   Serial.print("in if c2=");Serial.println(c2);
Serial.print("HEAT_DOWN START");

    for (temp;temp>=66;temp--)// normal_down_range      normal_up_range     70 down to 66 till low down to 60
    {
       	Serial.print("tempdown");Serial.print(temp);Serial.println("");
       Serial.print(temp); Serial.println(" degrees F");
  
      	digitalWrite(redLED,LOW);//fast mode  
        digitalWrite(yellowLED,LOW);//heaton=1;// relay on as led
        digitalWrite(blueLED,HIGH);//heatoff=0;
        Serial.println("still IN_HEAT_DOWN");     
    }
  Serial.println("exit HEAT_DOWN go to heat up");  
  delay(100);
  NORMAL_HEAT_u();//goto NORMAL_HEAT_u 
  }
  else {Serial.print("else c2=");Serial.println(c2);chaterring();}
}



void FAST_HEAT(void)// 50<temp <66 temp very low> heat fast mode
    {
  Serial.println("fast START");
     delay(100);
            for(temp; temp<=normal_up_range; temp++)//=fastrange
              {  
                  Serial.print("tempFast");Serial.print(temp);Serial.println("");
               Serial.print(temp); Serial.println(" degrees F");
  
                  digitalWrite(yellowLED,HIGH);
                  digitalWrite(redLED,LOW);//heaton=1;// relay on as led
                  digitalWrite(blueLED,LOW);//heatoff=0;
              }
     Serial.println("exit fastheat>> noemal up"); Serial.println("");
     delay(200);
          NORMAL_HEAT_u();
    }


void chaterring(void)
{
  chaterr++;
  if(c1==2)
    {
      c1=0;Serial.println("c1=0 heat up to down");
    Serial.print(chaterr);Serial.println("-----chaterring=1 by c1 delay start");
     Serial.print(temp); Serial.println(" degrees F");
  
      delay(1000);
   // goto:nu 
     NORMAL_HEAT_u();
    } 
  else if(c2==2)
    {
      c2=0;Serial.println("c2=0 heat down to up");
       Serial.print(chaterr);Serial.println("-----chaterring=1 by c2 delay start");
     Serial.print(temp); Serial.println(" degrees F");
  
    delay(1000);
    // goto:nd 
     NORMAL_HEAT_d();
     }
   else
   {Serial.println("no0 Chat of c1 n c2"); Serial.print(temp); Serial.println(" degrees F");
  }
}

