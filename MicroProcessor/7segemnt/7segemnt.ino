#define segA 2
#define segB 3
#define segC 4
#define segD 5
#define segE 6
#define segF 7
#define segG 8
 int COUNT=0;

void setup()
{
  
  for (int i=2;i<9;i++)
 {
 pinMode(i, OUTPUT);
 }

}

void loop()
{
  //only show the even numbers here with delay
  
  switch (COUNT)
 {
  case 2:
 digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);
    delay(2000);
 break;
   case 4:
 digitalWrite(segA, LOW);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);
     delay(2000);
 break;
    case 6:
 digitalWrite(segA, HIGH);
    digitalWrite(segB, LOW);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);
    delay(2000);
 break;
    
    case 8:
 digitalWrite(segA, HIGH);
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);
    delay(2000);
 break;
    
    break;
  
 if (COUNT<10)
 {
 COUNT++;
 delay(1000);
 }
 if (COUNT==10)
 {
 COUNT=0;
 delay(1000);
 }

}   
  
  
}
