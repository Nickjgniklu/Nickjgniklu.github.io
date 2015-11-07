
int led1= D7; 
int wordPerMinute=10;
//wpm/(2.4)^-1
int dotLength=1200/wordPerMinute;
int dashLength=3*dotLength;





void dot(){
digitalWrite(led1, HIGH);
delay(dotLength);
digitalWrite(led1, LOW);
delay(dotLength);
}
void dash(){
digitalWrite(led1, HIGH);
delay(dashLength);
digitalWrite(led1, LOW);
delay(dotLength);
}
void endWord(){
   digitalWrite(led1, LOW);
delay(2*dashLength); 
}
void endChar(){
 digitalWrite(led1, LOW);
delay(dashLength);    

}
void sendChar(char c){
switch (c){
    case 'a':
    dot();
    dash();
    endChar();
    break;
    case 'b':
    dash();
    dot();
    dot();
    dot();
    endChar();
    
    break;
    case 'c':
    dash();
    dot();
    dash();
    dot();
    endChar();
    break;
    case 'd':
    dash();
    dot();
    dot();
    endChar();
    break;
    case 'e':
    dot();
    endChar();
    break;
    case 'f':
    dot();
    dot();
    dash();
    dot();
    endChar();
    break;
    case 'g':
    dash();
    dash();
    dot();
    break;
    case 'h':
    dot();
    dot();
    dot();
    dot();
    endChar();
    break;
    case 'i':
    dot();
    dot();
    endChar();
    break;
    case 'j':
    dot();
    dash();
    dash();
    dash();
    endChar();
    break;
    case 'k':
    dash();
    dot();
    dash();
    endChar();
    break;
    case 'l':
    dot();
    dash();
    dot();
    dot();
    endChar();
    break;
    case 'm':
    dash();
    dash();
    endChar();
    break;
    case 'n':
    dash();
    dot();
    endChar();
    break;
    case 'o':
    dash();
    dash();
    dash();
    endChar();
    break;
    case 'p':
    dot();
    dash();
    dash();
    dot();
    endChar();
    break;
    case 'q':
    dash();
    dash();
    dot();
    dash();
    endChar();
    break;
    case 'r':
    dot();
    dash();
    dot();
    endChar();
    break;
    case 's':
    dot();
    dot();
    dot();
    endChar();
    break;
    case 't':
    dash();
    endChar();
    break;
    case 'u':
    dot();
    dot();
    dash();
    endChar();
    break;
    case 'v':
    dot();
    dot();
    dot();
    dash();
    endChar();
    break;
    case 'w':
    dot();
    dash();
    dash();
    endChar();
    break;
    case 'x':
    dash();
    dot();
    dot();
    dash();
    endChar();
    break;
    case 'y':
    dash();
    dot();
    dash();
    dash();
    endChar();
    break;
    case 'z':
    dash();
    dash();
    dot();
    dot();
    endChar();
    break;
     case ' ':
    endWord();
    break;
}    
}

void sendString(String s){
for(int i=0; i<s.length();i++){
sendChar(s[i]);

}
}
int ledToggle(String phrase){

sendString(phrase);
}
void setup() {

 

  pinMode(led1, OUTPUT);
  Spark.function("led",ledToggle);
 

}




void loop() {
 //sendChar('c');
 //sendString("etet");


  
}