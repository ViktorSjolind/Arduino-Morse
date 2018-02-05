/*
  Morse-code Generator
 
  This code was written by Ebrahim Bawazir in 2013 and updated in 2015
          U R FREE TO USE IT AND MODIFY IT AS U WANT
                      *****************
   Modified by Viktor Sjölind and Alexander Tokos in 2018
*/
int LED = 13; // The led pin
int SPEAKER = 11; // The speaker pin
int FREQ = 700; // Frequency of the speaker beep
char input; // To save the input
int DELAY = 50; // Base delay duration

void setup () {
  pinMode (LED,OUTPUT); // Tell that pin 13 is an output
  pinMode (SPEAKER, OUTPUT); // Tell that pin 11 is an output
  Serial.begin(9600); // For the connection with the board
}

void loop () {
  if (Serial.available()) {
    input = Serial.read();//read the input
    
    if (input == 'a' || input == 'A') {lA();}//if the input is a or A go to function lA
    if (input == 'b' || input == 'B') {lB();}//same but with b letter
    if (input == 'c' || input == 'C') {lC();}
    if (input == 'd' || input == 'D') {lD();}
    if (input == 'e' || input == 'E') {lE();}
    if (input == 'f' || input == 'F') {lF();}
    if (input == 'g' || input == 'G') {lG();}
    if (input == 'h' || input == 'H') {lH();}
    if (input == 'i' || input == 'I') {lI();}
    if (input == 'j' || input == 'J') {lJ();}
    if (input == 'k' || input == 'K') {lK();}
    if (input == 'l' || input == 'L') {lL();}
    if (input == 'm' || input == 'M') {lM();}
    if (input == 'n' || input == 'N') {lN();}
    if (input == 'o' || input == 'O') {lO();}
    if (input == 'p' || input == 'P') {lP();}
    if (input == 'q' || input == 'Q') {lQ();}
    if (input == 'r' || input == 'R') {lR();}
    if (input == 's' || input == 'S') {lS();}
    if (input == 't' || input == 'T') {lT();}
    if (input == 'u' || input == 'U') {lU();}
    if (input == 'v' || input == 'V') {lV();}
    if (input == 'w' || input == 'W') {lW();}
    if (input == 'x' || input == 'X') {lX();}
    if (input == 'y' || input == 'Y') {lY();}
    if (input == 'z' || input == 'Z') {lZ();}
    if (input == '1') {n1();}// the numbers
    if (input == '2') {n2();}
    if (input == '3') {n3();}
    if (input == '4') {n4();}
    if (input == '5') {n5();}
    if (input == '6') {n6();}
    if (input == '7') {n7();}
    if (input == '8') {n8();}
    if (input == '9') {n9();}
    if (input == '0') {n0();}
    if (input == ' ') {space();}//the space
    Serial.println (input);//print the latter saved in the input var
    }
}

/* Functions for the letters and the numbers */
void lA () {dot();dash();shortspace();}                 //letter A in morse code!
void lB () {dash();dot();dot();dot();shortspace();}     //same for B
void lC () {dash();dot();dash();dot();shortspace();}
void lD () {dash();dot();dot();shortspace();}
void lE () {dot();shortspace();}
void lF () {dot();dot();dash();dot();shortspace();}
void lG () {dash();dash();dot();shortspace();}
void lH () {dot();dot();dot();dot();shortspace();}
void lI () {dot();dot();shortspace();}
void lJ () {dot();dash();dash();dash();shortspace();}
void lK () {dash();dot();dash();shortspace();}
void lL () {dot();dash();dot();dot();shortspace();}
void lM () {dash();dash();shortspace();}
void lN () {dash();dot();shortspace();}
void lO () {dash();dash();dash();shortspace();}
void lP () {dot();dash();dash();dot();shortspace();}
void lQ () {dash();dash();dot();dash();shortspace();}
void lR () {dot();dash();dot();shortspace();}
void lS () {dot();dot();dot();shortspace();}
void lT () {dash();shortspace();}
void lU () {dot();dot();dash();shortspace();}
void lV () {dot();dot();dot();dash();shortspace();}
void lW () {dot();dash();dash();shortspace();}
void lX () {dash();dot();dot();dash();shortspace();}
void lY () {dash();dot();dash();dash();shortspace();}
void lZ () {dash();dash();dot();dot();shortspace();}
void n1 () {dot();dash();dash();dash();dash();shortspace();}//number 1 in morse code
void n2 () {dot();dot();dash();dash();dash();shortspace();}
void n3 () {dot();dot();dot();dash();dash();shortspace();}
void n4 () {dot();dot();dot();dot();dash();shortspace();}
void n5 () {dot();dot();dot();dot();dot();shortspace();}
void n6 () {dash();dot();dot();dot();dot();shortspace();}
void n7 () {dash();dash();dot();dot();dot();shortspace();}
void n8 () {dash();dash();dash();dot();dot();shortspace();}
void n9 () {dash();dash();dash();dash();dot();shortspace();}
void n0 () {dash();dash();dash();dash();dash();shortspace();}

/* Delay between the words */
void space () {
  delay (DELAY*4);
  }

/* Delay between the letters */
void shortspace () {
  delay(DELAY*2);
  }

/* Turns the led and speaker on for (base) amount of time and then off for the same amount of time */
void dot () {
  digitalWrite(LED,HIGH);
  tone(SPEAKER, FREQ);
  delay (DELAY);
  digitalWrite(LED,LOW);
  noTone(SPEAKER); 
  delay (DELAY);
  }

/* Turns the led and speaker on for (base*3) amount of time and then off for (base) time */
void dash () {
  digitalWrite(LED,HIGH);
  tone(SPEAKER, FREQ);
  delay (DELAY*3);
  digitalWrite(LED,LOW);
  noTone(SPEAKER); 
  delay (DELAY);
  }



