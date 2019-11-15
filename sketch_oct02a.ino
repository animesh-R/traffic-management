int L1_Red = 11;
int L1_Yellow = 10;
int L1_Green = 9;

int L2_Red = 20;
int L2_Yellow = 14;
int L2_Green = 2;

int L3_Red = 3;
int L3_Yellow = 4;
int L3_Green = 5;

int L4_Red = 6;
int L4_Yellow = 7;
int L4_Green = 8;

int Sensor_L1 = 22;
int Sensor_L2 = 23;
int Sensor_L3 = 24;
int Sensor_L4 = 25;

int sense_1, sense_2, sense_3, sense_4;
 
void setup() {
    
    Serial.begin(9600);
    pinMode(Sensor_L1,INPUT);
    pinMode(Sensor_L2,INPUT);
    pinMode(Sensor_L3,INPUT);
    pinMode(Sensor_L4,INPUT);
  
    pinMode(L1_Red,OUTPUT);
    pinMode(L1_Yellow,OUTPUT);
    pinMode(L1_Green,OUTPUT);
  
    pinMode(L2_Red,OUTPUT);
    pinMode(L2_Yellow,OUTPUT);
    pinMode(L2_Green,OUTPUT);
  
    pinMode(L3_Red,OUTPUT);
    pinMode(L3_Yellow,OUTPUT);
    pinMode(L3_Green,OUTPUT);
  
    pinMode(L4_Red,OUTPUT);
    pinMode(L4_Yellow,OUTPUT);
    pinMode(L4_Green,OUTPUT);

}

void loop() {
  sense_1 = digitalRead(22); 
  sense_2 = digitalRead(23);
  sense_3 = digitalRead(24);
  sense_4 = digitalRead(25);

  if (sense_1 == HIGH) 
  {
    digitalWrite(L1_Red,LOW);
    digitalWrite(L1_Yellow,LOW);
    digitalWrite(L1_Green,HIGH);

    digitalWrite(L2_Red,HIGH);
    digitalWrite(L2_Yellow,LOW);
    digitalWrite(L2_Green,LOW);
    
    digitalWrite(L3_Red,HIGH);
    digitalWrite(L3_Yellow,LOW);
    digitalWrite(L3_Green,LOW);

    digitalWrite(L4_Red,HIGH);
    digitalWrite(L4_Yellow,LOW);
    digitalWrite(L4_Green,LOW);  
  }
  else if (sense_2 == HIGH) 
  {
    digitalWrite(L2_Red,LOW);
    digitalWrite(L2_Yellow,LOW);
    digitalWrite(L2_Green,HIGH);
    
    digitalWrite(L1_Red,HIGH);
    digitalWrite(L1_Yellow,LOW);
    digitalWrite(L1_Green,LOW);
    
    digitalWrite(L3_Red,HIGH);
    digitalWrite(L3_Yellow,LOW);
    digitalWrite(L3_Green,LOW);

    digitalWrite(L4_Red,HIGH);
    digitalWrite(L4_Yellow,LOW);
    digitalWrite(L4_Green,LOW);  
    delay(1000);
  }
  else if (sense_3 == HIGH) 
  {
    digitalWrite(L2_Red,LOW);
    digitalWrite(L2_Yellow,LOW);
    digitalWrite(L2_Green,HIGH);
    
    digitalWrite(L1_Red,HIGH);
    digitalWrite(L1_Yellow,LOW);
    digitalWrite(L1_Green,LOW);
    
    digitalWrite(L3_Red,LOW);
    digitalWrite(L3_Yellow,LOW);
    digitalWrite(L3_Green,HIGH);

    digitalWrite(L4_Red,HIGH);
    digitalWrite(L4_Yellow,LOW);
    digitalWrite(L4_Green,LOW);  
    delay(1000);
  }
    else if (sense_4 == HIGH) 
  {
    digitalWrite(L4_Red,LOW);
    digitalWrite(L4_Yellow,LOW);
    digitalWrite(L4_Green,HIGH);
    
    digitalWrite(L2_Red,HIGH);
    digitalWrite(L2_Yellow,LOW);
    digitalWrite(L2_Green,LOW);
    
    digitalWrite(L1_Red,HIGH);
    digitalWrite(L1_Yellow,LOW);
    digitalWrite(L1_Green,LOW);
    
    digitalWrite(L3_Red,HIGH);
    digitalWrite(L3_Yellow,LOW);
    digitalWrite(L3_Green,LOW);  
    delay(1000);
  }
 else if (sense_1 == LOW and sense_2 == LOW and sense_3 == LOW and sense_4 == LOW) 
  {
   /* base case - traffic flow occur in Clockwise Dirction)
   * -------------------------------------    west LANE : LANE 1
   *  -------------------------------------    North LANE : LANE 2
   *  -------------------------------------    EAST LANE : LANE 3
   *  -------------------------------------    SOUTH LANE : LANE 4
   */ 
  digitalWrite(L2_Red,LOW);
  digitalWrite(L1_Green,HIGH);
  digitalWrite(L4_Green,LOW);
  digitalWrite(L2_Yellow,HIGH);
  digitalWrite(L1_Yellow,LOW);
  digitalWrite(L3_Red,HIGH);
  digitalWrite(L4_Red,HIGH);
  delay(500);
//-------------------------------------------------------------
  digitalWrite(L2_Green,HIGH);
  digitalWrite(L1_Green,LOW);
  digitalWrite(L2_Yellow,LOW);
  digitalWrite(L3_Yellow,HIGH);
  digitalWrite(L3_Red,LOW);
  digitalWrite(L1_Red,HIGH);
  delay(500);   
//-------------------------------------------------------------
  digitalWrite(L3_Green,HIGH);
  digitalWrite(L3_Yellow,LOW);
  digitalWrite(L4_Red,LOW);
  digitalWrite(L2_Red,HIGH);
  digitalWrite(L4_Yellow,HIGH);
  digitalWrite(L2_Green,LOW);  
  delay(500);
//-------------------------------------------------------------
  digitalWrite(L4_Green,HIGH);
  digitalWrite(L4_Yellow,LOW);
  digitalWrite(L3_Green,LOW);
  digitalWrite(L1_Red,LOW);
  digitalWrite(L3_Red,HIGH);
  digitalWrite(L1_Yellow,HIGH);
  delay(500); 
//-------------------------------------------------------------
  }

}
