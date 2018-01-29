#include "Nokia_5110.h"

//Components are Arduino board and Nokia 5110
//Don't forget to get the Nokia_5110.h library

#define RST 2
#define CE 3
#define DC 4
#define DIN 5
#define CLK 6

Nokia_5110 lcd = Nokia_5110(RST, CE, DC, DIN, CLK);

String guessOne = "01";
//String guessOne = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()-_+=[]\;',./{}|:\"\<>?";
//String guessOne = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//Test a string below trying to match String guessOne from above.
String passCode = "1111111111111";


void setup() {
  //Serial.begin(9600);
  Serial.begin(115200);
  lcd.setCursor(0,0);
  lcd.print("Searching: ");
  

}
int lengthOne = guessOne.length();
void loop() {
 for (int i1 = 0; i1 <=lengthOne-1; i1++){
    String answer = "";
    char chardigit1 = guessOne[i1];
    String digit1 (chardigit1);
    lcd.setCursor(0,1);
    //Serial.println(digit1);
   
        if (digit1 == passCode){          
          lcd.setCursor(0,3);
          lcd.print("Correct: ");
          lcd.println(digit1);
          delay(5000);
        }
        if (i1==lengthOne-1 && digit1 != passCode){
          for (int i1 = 0; i1 <=lengthOne-1; i1++){
            for (int i2 = 0; i2 <=lengthOne-1; i2++){
              char chardigit1 = guessOne[i1];
              char chardigit2 = guessOne[i2];
              String digit1 (chardigit1);
              String digit2 (chardigit2);
              String guess2 = digit1 + digit2;
              lcd.setCursor(0,1);
             // Serial.println(guess2);
              //delay(250);
              if (guess2 == passCode){
                //Serial.print("Correct: ");
                //Serial.println(guess2);
                lcd.setCursor(0,3);
                lcd.print("Correct: ");
                lcd.println(guess2);
                delay(5000);
              }
                    if (i1==lengthOne-1 && i2 == lengthOne -1 && guess2 != passCode){
                      for (int i1 = 0; i1 <=lengthOne-1; i1++){
                         for (int i2 = 0; i2 <=lengthOne-1; i2++){
                           for (int i3 = 0; i3 <=lengthOne-1; i3++){
                              char chardigit1 = guessOne[i1];
                              char chardigit2 = guessOne[i2];
                              char chardigit3 = guessOne[i3];
                              String digit1 (chardigit1);
                              String digit2 (chardigit2);
                              String digit3 (chardigit3);
                              String guess3 = digit1 + digit2 + digit3;
                              Serial.println(guess3);
                              lcd.setCursor(0,1);
                              Serial.println(guess3);
                                if (guess3 == passCode){
                                    //Serial.print("Correct: ");
                                    //Serial.println(guess3);
                                    lcd.setCursor(0,3);
                                    lcd.print("Correct: ");
                                    lcd.println(guess3);
                                    delay(5000);
                                }    
                                if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && guess3 != passCode){
                                        for (int i1 = 0; i1 <=lengthOne-1; i1++){
                                           for (int i2 = 0; i2 <=lengthOne-1; i2++){
                                             for (int i3 = 0; i3 <=lengthOne-1; i3++){
                                                for (int i4 = 0; i4 <=lengthOne-1; i4++){
                                             
                                                char chardigit1 = guessOne[i1];
                                                char chardigit2 = guessOne[i2];
                                                char chardigit3 = guessOne[i3];
                                                char chardigit4 = guessOne[i4];
                                                String digit1 (chardigit1);
                                                String digit2 (chardigit2);
                                                String digit3 (chardigit3);
                                                String digit4 (chardigit4);
                                                String guess4 = digit1 + digit2 + digit3 + digit4;
                                                Serial.println(guess4);
                                                lcd.setCursor(0,1);
                                                lcd.println(guess4);
                                                  if (guess4 == passCode){
                                                      //Serial.print("Correct: ");
                                                      //Serial.println(guess4);
                                                      lcd.setCursor(0,3);
                                                      lcd.print("Correct: ");
                                                      lcd.println(guess4);
                                                      delay(5000);
                                                  }
                                                      if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && guess4 != passCode){
                                                          for (int i1 = 0; i1 <=lengthOne-1; i1++){
                                                             for (int i2 = 0; i2 <=lengthOne-1; i2++){
                                                               for (int i3 = 0; i3 <=lengthOne-1; i3++){
                                                                  for (int i4 = 0; i4 <=lengthOne-1; i4++){
                                                                    for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                                                  char chardigit1 = guessOne[i1];
                                                                  char chardigit2 = guessOne[i2];
                                                                  char chardigit3 = guessOne[i3];
                                                                  char chardigit4 = guessOne[i4];
                                                                  char chardigit5 = guessOne[i5];
                                                                  String digit1 (chardigit1);
                                                                  String digit2 (chardigit2);
                                                                  String digit3 (chardigit3);
                                                                  String digit4 (chardigit4);
                                                                  String digit5 (chardigit5);
                                                                  String guess5 = digit1 + digit2 + digit3 + digit4 + digit5;
                                                                  Serial.println(guess5);
                                                                  lcd.setCursor(0,1);
                                                                  lcd.println(guess5);
                                                                    if (guess5 == passCode){
                                                                        //Serial.print("Correct: ");
                                                                        //Serial.println(guess5);
                                                                        lcd.setCursor(0,3);
                                                                        lcd.print("Correct: ");
                                                                        lcd.println(guess5);
                                                                        delay(5000);
                                                                    } 
                                                                     if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && guess5 != passCode){
                                                                          for (int i1 = 0; i1 <=lengthOne-1; i1++){
                                                                             for (int i2 = 0; i2 <=lengthOne-1; i2++){
                                                                               for (int i3 = 0; i3 <=lengthOne-1; i3++){
                                                                                  for (int i4 = 0; i4 <=lengthOne-1; i4++){
                                                                                    for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                                                                      for (int i6 = 0; i6 <=lengthOne-1; i6++){                                                                                        
                                                                                        char chardigit1 = guessOne[i1];
                                                                                        char chardigit2 = guessOne[i2];
                                                                                        char chardigit3 = guessOne[i3];
                                                                                        char chardigit4 = guessOne[i4];
                                                                                        char chardigit5 = guessOne[i5];
                                                                                        char chardigit6 = guessOne[i6];
                                                                                        String digit1 (chardigit1);
                                                                                        String digit2 (chardigit2);
                                                                                        String digit3 (chardigit3);
                                                                                        String digit4 (chardigit4);
                                                                                        String digit5 (chardigit5);
                                                                                        String digit6 (chardigit6);
                                                                                        String guess6 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6;
                                                                                        Serial.println(guess6);
                                                                                        lcd.setCursor(0,1);
                                                                                        lcd.println(guess6);
                                                                                    if (guess6 == passCode){
                                                                                       // Serial.print("Correct: ");
                                                                                        //Serial.println(guess6);
                                                                                        lcd.setCursor(0,3);
                                                                                        lcd.print("Correct: ");
                                                                                        lcd.println(guess6);
                                                                                        delay(5000);
                                                                                    }
                                                                        //copy 3 more closing } than current digit
                                                                        if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && guess6 != passCode){
                                                                          for (int i1 = 0; i1 <=lengthOne-1; i1++){
                                                                             for (int i2 = 0; i2 <=lengthOne-1; i2++){
                                                                               for (int i3 = 0; i3 <=lengthOne-1; i3++){
                                                                                  for (int i4 = 0; i4 <=lengthOne-1; i4++){
                                                                                    for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                                                                      for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                                                                        for (int i7 = 0; i7 <=lengthOne-1; i7++){                                                                                       
                                                                                        char chardigit1 = guessOne[i1];
                                                                                        char chardigit2 = guessOne[i2];
                                                                                        char chardigit3 = guessOne[i3];
                                                                                        char chardigit4 = guessOne[i4];
                                                                                        char chardigit5 = guessOne[i5];
                                                                                        char chardigit6 = guessOne[i6];
                                                                                        char chardigit7 = guessOne[i7];
                                                                                        String digit1 (chardigit1);
                                                                                        String digit2 (chardigit2);
                                                                                        String digit3 (chardigit3);
                                                                                        String digit4 (chardigit4);
                                                                                        String digit5 (chardigit5);
                                                                                        String digit6 (chardigit6);
                                                                                        String digit7 (chardigit7);
                                                                                        String guess7 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7;
                                                                                       // Serial.println(guess7);
                                                                                        lcd.setCursor(0,1);
                                                                                        lcd.println(guess7);
                                                                                    if (guess7 == passCode){
                                                                                        //Serial.print("Correct: ");
                                                                                       // Serial.println(guess7);
                                                                                        lcd.setCursor(0,2);
                                                                                        lcd.print("Correct: ");
                                                                                        lcd.println(guess7);
                                                                                        delay(5000);
                                                                                    } 
                                                                        //copy 3 more closing } than current digit
                                                                        if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && guess7 != passCode){
                                                                          for (int i1 = 0; i1 <=lengthOne-1; i1++){
                                                                             for (int i2 = 0; i2 <=lengthOne-1; i2++){
                                                                               for (int i3 = 0; i3 <=lengthOne-1; i3++){
                                                                                  for (int i4 = 0; i4 <=lengthOne-1; i4++){
                                                                                    for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                                                                      for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                                                                        for (int i7 = 0; i7 <=lengthOne-1; i7++){
                                                                                          for (int i8 = 0; i8 <=lengthOne-1; i8++){                                                                                         
                                                                                        char chardigit1 = guessOne[i1];
                                                                                        char chardigit2 = guessOne[i2];
                                                                                        char chardigit3 = guessOne[i3];
                                                                                        char chardigit4 = guessOne[i4];
                                                                                        char chardigit5 = guessOne[i5];
                                                                                        char chardigit6 = guessOne[i6];
                                                                                        char chardigit7 = guessOne[i7]; 
                                                                                        char chardigit8 = guessOne[i8];                                                                  
                                                                                        String digit1 (chardigit1);
                                                                                        String digit2 (chardigit2);
                                                                                        String digit3 (chardigit3);
                                                                                        String digit4 (chardigit4);
                                                                                        String digit5 (chardigit5);
                                                                                        String digit6 (chardigit6);
                                                                                        String digit7 (chardigit7);
                                                                                        String digit8 (chardigit8);
                                                                                        String guess8 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8;
                                                                                        lcd.setCursor(0,1);
                                                                                        lcd.println(guess8);
                                                                                    if (guess8 == passCode){                                                                                        
                                                                                        lcd.setCursor(0,2);
                                                                                        lcd.print("Correct: ");
                                                                                        lcd.println(guess8);
                                                                                        delay(5000);
                                                                                    }
           //copy 3 more closing } than current digit                                                                          
          if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && i8 == lengthOne -1 && guess8 != passCode){
                    for (int i1 = 0; i1 <=lengthOne-1; i1++){
                       for (int i2 = 0; i2 <=lengthOne-1; i2++){
                         for (int i3 = 0; i3 <=lengthOne-1; i3++){
                            for (int i4 = 0; i4 <=lengthOne-1; i4++){
                              for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                  for (int i7 = 0; i7 <=lengthOne-1; i7++){
                                    for (int i8 = 0; i8 <=lengthOne-1; i8++){
                                      for (int i9 = 0; i9 <=lengthOne-1; i9++){                                                                                         
                                  char chardigit1 = guessOne[i1];
                                  char chardigit2 = guessOne[i2];
                                  char chardigit3 = guessOne[i3];
                                  char chardigit4 = guessOne[i4];
                                  char chardigit5 = guessOne[i5];
                                  char chardigit6 = guessOne[i6];
                                  char chardigit7 = guessOne[i7]; 
                                  char chardigit8 = guessOne[i8]; 
                                  char chardigit9 = guessOne[i9];                                                                 
                                  String digit1 (chardigit1);
                                  String digit2 (chardigit2);
                                  String digit3 (chardigit3);
                                  String digit4 (chardigit4);
                                  String digit5 (chardigit5);
                                  String digit6 (chardigit6);
                                  String digit7 (chardigit7);
                                  String digit8 (chardigit8);
                                  String digit9 (chardigit9);
                                  String guess9 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9;
                                  //Serial.println(guess9);
                                  lcd.setCursor(0,1);
                                  lcd.println(guess9);
                              if (guess9 == passCode){
                                  lcd.setCursor(0,2);
                                  lcd.print("Correct: ");
                                  lcd.println(guess9);
                                  delay(5000);
                                  }
                                   //copy 3 more closing } than current digit                                                                          
          if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && i8 == lengthOne -1 && i9 == lengthOne -1 && guess9 != passCode){
                    for (int i1 = 0; i1 <=lengthOne-1; i1++){
                       for (int i2 = 0; i2 <=lengthOne-1; i2++){
                         for (int i3 = 0; i3 <=lengthOne-1; i3++){
                            for (int i4 = 0; i4 <=lengthOne-1; i4++){
                              for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                  for (int i7 = 0; i7 <=lengthOne-1; i7++){
                                    for (int i8 = 0; i8 <=lengthOne-1; i8++){
                                      for (int i9 = 0; i9 <=lengthOne-1; i9++){  
                                        for (int i10 = 0; i10 <=lengthOne-1; i10++){                                                                                       
                                  char chardigit1 = guessOne[i1];
                                  char chardigit2 = guessOne[i2];
                                  char chardigit3 = guessOne[i3];
                                  char chardigit4 = guessOne[i4];
                                  char chardigit5 = guessOne[i5];
                                  char chardigit6 = guessOne[i6];
                                  char chardigit7 = guessOne[i7]; 
                                  char chardigit8 = guessOne[i8]; 
                                  char chardigit9 = guessOne[i9]; 
                                  char chardigit10 = guessOne[i10];                                                                
                                  String digit1 (chardigit1);
                                  String digit2 (chardigit2);
                                  String digit3 (chardigit3);
                                  String digit4 (chardigit4);
                                  String digit5 (chardigit5);
                                  String digit6 (chardigit6);
                                  String digit7 (chardigit7);
                                  String digit8 (chardigit8);
                                  String digit9 (chardigit9);
                                  String digit10 (chardigit10);
                                  String guess10 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9 + digit10;
                                  //Serial.println(guess10);
                                  lcd.setCursor(0,1);
                                  lcd.println(guess10);
                              if (guess10 == passCode){
                                  lcd.setCursor(0,2);
                                  lcd.print("Correct: ");
                                  lcd.println(guess10);
                                  delay(5000); 
                                  }
          //copy 3 more closing } than current digit                                                                          
          if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && i8 == lengthOne -1 && i9 == lengthOne -1 && i10 == lengthOne -1 && guess10 != passCode){
                    for (int i1 = 0; i1 <=lengthOne-1; i1++){
                       for (int i2 = 0; i2 <=lengthOne-1; i2++){
                         for (int i3 = 0; i3 <=lengthOne-1; i3++){
                            for (int i4 = 0; i4 <=lengthOne-1; i4++){
                              for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                  for (int i7 = 0; i7 <=lengthOne-1; i7++){
                                    for (int i8 = 0; i8 <=lengthOne-1; i8++){
                                      for (int i9 = 0; i9 <=lengthOne-1; i9++){  
                                        for (int i10 = 0; i10 <=lengthOne-1; i10++){ 
                                          for (int i11 = 0; i11 <=lengthOne-1; i11++){                                                                                      
                                  char chardigit1 = guessOne[i1];
                                  char chardigit2 = guessOne[i2];
                                  char chardigit3 = guessOne[i3];
                                  char chardigit4 = guessOne[i4];
                                  char chardigit5 = guessOne[i5];
                                  char chardigit6 = guessOne[i6];
                                  char chardigit7 = guessOne[i7]; 
                                  char chardigit8 = guessOne[i8]; 
                                  char chardigit9 = guessOne[i9]; 
                                  char chardigit10 = guessOne[i10];
                                  char chardigit11 = guessOne[i11];                                                                
                                  String digit1 (chardigit1);
                                  String digit2 (chardigit2);
                                  String digit3 (chardigit3);
                                  String digit4 (chardigit4);
                                  String digit5 (chardigit5);
                                  String digit6 (chardigit6);
                                  String digit7 (chardigit7);
                                  String digit8 (chardigit8);
                                  String digit9 (chardigit9);
                                  String digit10 (chardigit10);
                                  String digit11 (chardigit11);
                                  String guess11 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9 + digit10 + digit11;
                                  Serial.println("guess11");
                                  lcd.setCursor(0,1);
                                  lcd.println(guess11);
                              if (guess11 == passCode){
                                  lcd.setCursor(0,2);
                                  lcd.print("Correct: ");
                                  lcd.println(guess11);
                                  delay(5000);
                                  }
                                   //copy 3 more closing } than current digit                                                                          
          if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && i8 == lengthOne -1 && i9 == lengthOne -1 && i10 == lengthOne -1 && i11 == lengthOne -1 && guess11 != passCode){
                    for (int i1 = 0; i1 <=lengthOne-1; i1++){
                       for (int i2 = 0; i2 <=lengthOne-1; i2++){
                         for (int i3 = 0; i3 <=lengthOne-1; i3++){
                            for (int i4 = 0; i4 <=lengthOne-1; i4++){
                              for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                  for (int i7 = 0; i7 <=lengthOne-1; i7++){
                                    for (int i8 = 0; i8 <=lengthOne-1; i8++){
                                      for (int i9 = 0; i9 <=lengthOne-1; i9++){  
                                        for (int i10 = 0; i10 <=lengthOne-1; i10++){ 
                                          for (int i11 = 0; i11 <=lengthOne-1; i11++){ 
                                            for (int i12 = 0; i12 <=lengthOne-1; i12++){                                                                                     
                                  char chardigit1 = guessOne[i1];
                                  char chardigit2 = guessOne[i2];
                                  char chardigit3 = guessOne[i3];
                                  char chardigit4 = guessOne[i4];
                                  char chardigit5 = guessOne[i5];
                                  char chardigit6 = guessOne[i6];
                                  char chardigit7 = guessOne[i7]; 
                                  char chardigit8 = guessOne[i8]; 
                                  char chardigit9 = guessOne[i9]; 
                                  char chardigit10 = guessOne[i10];
                                  char chardigit11 = guessOne[i11];
                                  char chardigit12 = guessOne[i12];                                                                
                                  String digit1 (chardigit1);
                                  String digit2 (chardigit2);
                                  String digit3 (chardigit3);
                                  String digit4 (chardigit4);
                                  String digit5 (chardigit5);
                                  String digit6 (chardigit6);
                                  String digit7 (chardigit7);
                                  String digit8 (chardigit8);
                                  String digit9 (chardigit9);
                                  String digit10 (chardigit10);
                                  String digit11 (chardigit11);
                                  String digit12 (chardigit12);
                                  String guess12 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9 + digit10 + digit11 + digit12;
                                  Serial.print("guess12 ");
                                  Serial.println(guess12);
                                  lcd.setCursor(0,1);
                                  lcd.println(guess12);
                              if (guess12 == passCode){
                                  lcd.setCursor(0,2);
                                  lcd.print("Correct: ");
                                  lcd.println(guess12);
                                  delay(5000);
                              }
                               //copy 3 more closing } than current digit                                                                          
          if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && i8 == lengthOne -1 && i9 == lengthOne -1 && i10 == lengthOne -1 && i11 == lengthOne -1 && i12 == lengthOne -1 && guess12 != passCode){
                    for (int i1 = 0; i1 <=lengthOne-1; i1++){
                       for (int i2 = 0; i2 <=lengthOne-1; i2++){
                         for (int i3 = 0; i3 <=lengthOne-1; i3++){
                            for (int i4 = 0; i4 <=lengthOne-1; i4++){
                              for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                  for (int i7 = 0; i7 <=lengthOne-1; i7++){
                                    for (int i8 = 0; i8 <=lengthOne-1; i8++){
                                      for (int i9 = 0; i9 <=lengthOne-1; i9++){  
                                        for (int i10 = 0; i10 <=lengthOne-1; i10++){ 
                                          for (int i11 = 0; i11 <=lengthOne-1; i11++){ 
                                            for (int i12 = 0; i12 <=lengthOne-1; i12++){
                                              for (int i13 = 0; i13 <=lengthOne-1; i13++){                                                                                     
                                  char chardigit1 = guessOne[i1];
                                  char chardigit2 = guessOne[i2];
                                  char chardigit3 = guessOne[i3];
                                  char chardigit4 = guessOne[i4];
                                  char chardigit5 = guessOne[i5];
                                  char chardigit6 = guessOne[i6];
                                  char chardigit7 = guessOne[i7]; 
                                  char chardigit8 = guessOne[i8]; 
                                  char chardigit9 = guessOne[i9]; 
                                  char chardigit10 = guessOne[i10];
                                  char chardigit11 = guessOne[i11];
                                  char chardigit12 = guessOne[i12];
                                  char chardigit13 = guessOne[i13];                                                                
                                  String digit1 (chardigit1);
                                  String digit2 (chardigit2);
                                  String digit3 (chardigit3);
                                  String digit4 (chardigit4);
                                  String digit5 (chardigit5);
                                  String digit6 (chardigit6);
                                  String digit7 (chardigit7);
                                  String digit8 (chardigit8);
                                  String digit9 (chardigit9);
                                  String digit10 (chardigit10);
                                  String digit11 (chardigit11);
                                  String digit12 (chardigit12);
                                  String digit13 (chardigit13);
                                  String guess13 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9 + digit10 + digit11 + digit12 + digit13;
                                  Serial.print("guess13 ");
                                  Serial.println(guess13);
                                  lcd.setCursor(0,1);
                                  lcd.println(guess13);
                              if (guess13 == passCode){
                                  lcd.setCursor(0,2);
                                  lcd.print("Correct: ");
                                  lcd.println(guess13);
                                  delay(5000);}

                                                       //copy 3 more closing } than current digit                                                                          
          if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && i8 == lengthOne -1 && i9 == lengthOne -1 && i10 == lengthOne -1 && i11 == lengthOne -1 && i12 == lengthOne -1 && i13 == lengthOne -1 && guess13 != passCode){
                    for (int i1 = 0; i1 <=lengthOne-1; i1++){
                       for (int i2 = 0; i2 <=lengthOne-1; i2++){
                         for (int i3 = 0; i3 <=lengthOne-1; i3++){
                            for (int i4 = 0; i4 <=lengthOne-1; i4++){
                              for (int i5 = 0; i5 <=lengthOne-1; i5++){
                                for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
                                  for (int i7 = 0; i7 <=lengthOne-1; i7++){
                                    for (int i8 = 0; i8 <=lengthOne-1; i8++){
                                      for (int i9 = 0; i9 <=lengthOne-1; i9++){  
                                        for (int i10 = 0; i10 <=lengthOne-1; i10++){ 
                                          for (int i11 = 0; i11 <=lengthOne-1; i11++){ 
                                            for (int i12 = 0; i12 <=lengthOne-1; i12++){
                                              for (int i13 = 0; i13 <=lengthOne-1; i13++){ 
                                                for (int i14 = 0; i14 <=lengthOne-1; i14++){                                                                                    
                                  char chardigit1 = guessOne[i1];
                                  char chardigit2 = guessOne[i2];
                                  char chardigit3 = guessOne[i3];
                                  char chardigit4 = guessOne[i4];
                                  char chardigit5 = guessOne[i5];
                                  char chardigit6 = guessOne[i6];
                                  char chardigit7 = guessOne[i7]; 
                                  char chardigit8 = guessOne[i8]; 
                                  char chardigit9 = guessOne[i9]; 
                                  char chardigit10 = guessOne[i10];
                                  char chardigit11 = guessOne[i11];
                                  char chardigit12 = guessOne[i12];
                                  char chardigit13 = guessOne[i13]; 
                                  char chardigit14 = guessOne[i14];                                                               
                                  String digit1 (chardigit1);
                                  String digit2 (chardigit2);
                                  String digit3 (chardigit3);
                                  String digit4 (chardigit4);
                                  String digit5 (chardigit5);
                                  String digit6 (chardigit6);
                                  String digit7 (chardigit7);
                                  String digit8 (chardigit8);
                                  String digit9 (chardigit9);
                                  String digit10 (chardigit10);
                                  String digit11 (chardigit11);
                                  String digit12 (chardigit12);
                                  String digit13 (chardigit13);
                                  String digit14 (chardigit14);
                                  String guess14 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9 + digit10 + digit11 + digit12 + digit13 + digit14;
                                  Serial.print("guess14 ");
                                  Serial.println(guess14);
                                  lcd.setCursor(0,1);
                                  lcd.println(guess14);
                              if (guess14 == passCode){
                                  lcd.setCursor(0,2);
                                  lcd.print("Correct: ");
                                  lcd.println(guess14);
                                  delay(5000);
                                  }
                                             //copy 3 more closing } than current digit                                                                          
//          if (i1==lengthOne-1 && i2 == lengthOne -1 && i3 == lengthOne -1 && i4 == lengthOne -1 && i5 == lengthOne -1 && i6 == lengthOne -1 && i7 == lengthOne -1 && i8 == lengthOne -1 && i9 == lengthOne -1 && i10 == lengthOne -1 && i11 == lengthOne -1 && i12 == lengthOne -1 && i13 == lengthOne -1 && i14 == lengthOne -1 && guess14 != passCode){
//                    for (int i1 = 0; i1 <=lengthOne-1; i1++){
//                       for (int i2 = 0; i2 <=lengthOne-1; i2++){
//                         for (int i3 = 0; i3 <=lengthOne-1; i3++){
//                            for (int i4 = 0; i4 <=lengthOne-1; i4++){
//                              for (int i5 = 0; i5 <=lengthOne-1; i5++){
//                                for (int i6 = 0; i6 <=lengthOne-1; i6++){ 
//                                  for (int i7 = 0; i7 <=lengthOne-1; i7++){
//                                    for (int i8 = 0; i8 <=lengthOne-1; i8++){
//                                      for (int i9 = 0; i9 <=lengthOne-1; i9++){  
//                                        for (int i10 = 0; i10 <=lengthOne-1; i10++){ 
//                                          for (int i11 = 0; i11 <=lengthOne-1; i11++){ 
//                                            for (int i12 = 0; i12 <=lengthOne-1; i12++){
//                                              for (int i13 = 0; i13 <=lengthOne-1; i13++){ 
//                                                for (int i14 = 0; i14 <=lengthOne-1; i14++){
//                                                  for (int i15 = 0; i15 <=lengthOne-1; i15++){                                                                                    
//                                  char chardigit1 = guessOne[i1];
//                                  char chardigit2 = guessOne[i2];
//                                  char chardigit3 = guessOne[i3];
//                                  char chardigit4 = guessOne[i4];
//                                  char chardigit5 = guessOne[i5];
//                                  char chardigit6 = guessOne[i6];
//                                  char chardigit7 = guessOne[i7]; 
//                                  char chardigit8 = guessOne[i8]; 
//                                  char chardigit9 = guessOne[i9]; 
//                                  char chardigit10 = guessOne[i10];
//                                  char chardigit11 = guessOne[i11];
//                                  char chardigit12 = guessOne[i12];
//                                  char chardigit13 = guessOne[i13]; 
//                                  char chardigit14 = guessOne[i14];
//                                  char chardigit15 = guessOne[i15];                                                               
//                                  String digit1 (chardigit1);
//                                  String digit2 (chardigit2);
//                                  String digit3 (chardigit3);
//                                  String digit4 (chardigit4);
//                                  String digit5 (chardigit5);
//                                  String digit6 (chardigit6);
//                                  String digit7 (chardigit7);
//                                  String digit8 (chardigit8);
//                                  String digit9 (chardigit9);
//                                  String digit10 (chardigit10);
//                                  String digit11 (chardigit11);
//                                  String digit12 (chardigit12);
//                                  String digit13 (chardigit13);
//                                  String digit14 (chardigit14);
//                                  String digit15 (chardigit15);
//                                  String guess15 = digit1 + digit2 + digit3 + digit4 + digit5 + digit6 + digit7 + digit8 + digit9 + digit10 + digit11 + digit12 + digit13 + digit14 + digit15;
//                                  Serial.println("guess15");
//                                  lcd.setCursor(0,1);
//                                  lcd.println(guess15);
//                              if (guess15 == passCode){
//                                  lcd.setCursor(0,2);
//                                  lcd.print("Correct: ");
//                                  lcd.println(guess15);
//                                  delay(5000);
//                                  }
//                                  
//                                  }}}}}}}}}}}}}}}}
                                  
                                  }}}}}}}}}}}}}}}
                                  
                                  }}}}}}}}}}}}}}

                                  
                              }}}}}}}}}}}}}
                              
                                  }}}}}}}}}}}}
                                  
                                  }}}}}}}}}}}   
                              }
                            }
                           }
                         }
                       }
                    }
            }       
            }    
                              }   
                              }    
                                                                                    }
                                                                                  }
                                                                                 }
                                                                               }
                                                                             }
                                                                          }
                                                                  }       
                                                                  }    
                                                                                    }   
                                                                                    }
                                                                                  }
                                                                                 }
                                                                               }
                                                                             }
                                                                          }
                                                                  }       
                                                                  }    
                                                                                    }
                                                                                  }
                                                                                 }
                                                                               }
                                                                             }
                                                                          }
                                                                  }       
                                                                  }
                                                                 }
                                                               }
                                                             }
                                                          }
                                                  }    
                                                }
                                             }
                                           }
                                        }
                           }
                           
                         }
                      }
                    }          
              }
            }
          }
          
        }
        
   }
 }  
//}
     
         
