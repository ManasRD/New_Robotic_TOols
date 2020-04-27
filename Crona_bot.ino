 int mr1=2,mb1=3,mr2=4,mb2=5; 
 int d1=9,d2=10,d3=11;
  int v1,v2,v3;
 void setup()
 {
   pinMode(mr1,OUTPUT);
   pinMode(mb1,OUTPUT);
   pinMode(mr2,OUTPUT);
   pinMode(mb2,OUTPUT);
   pinMode(d1,INPUT);
   pinMode(d2,INPUT);
   pinMode(d3,INPUT);
   Serial.begin(19200);
 }
 
 void loop()
 {
   v1=(pulseIn(d1,HIGH));
   v2=(pulseIn(d2,HIGH));
   v3=(pulseIn(d3,HIGH));
  digitalWrite(mr1,HIGH);
   digitalWrite(mb1,HIGH);
   digitalWrite(mr2,HIGH);
   digitalWrite(mb2,HIGH);
     if(v3 >1500)
     {
     if(v2 < 1300)
   {
  Serial.println("back");
    digitalWrite(mr1,LOW);
        digitalWrite(mr2,LOW);
         }
   if(v2 > 1700)
   {
     Serial.println("for");
    digitalWrite(mb1,LOW);
        digitalWrite(mb2,LOW);
    }
   if(v1 < 1300)  
   {
    Serial.println("left");
    digitalWrite(mr2,LOW);
        digitalWrite(mb1,LOW);
   }    
    if(v1 > 1700)
   { 
        Serial.println("right");
    digitalWrite(mb2,LOW);
        digitalWrite(mr1,LOW);
    } 
   Serial.print(v1);
    Serial.print(" ");
     Serial.print(v2);
    
  }
 }
