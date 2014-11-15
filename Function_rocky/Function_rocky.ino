void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(4,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100,0)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 Serial.println(skullBot("I'm so tired, I don't wanna go to school"));
  
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
  int sum;
  sum = x + y;
  return sum;
}

//write a function that multiplies two integers and returns the total
int multiply(int c, int b){
  int product;
  product = c * b;
  return product;
}

//write a function that divides the first parameter by the second
int divide(int e, int r){
  int quotient
  quotient = e / r;
  return quotient
}

//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myfavorite){
  
  String response;
  //complete the if statement
  if(myfavorite == 32){
    response = "Sweet number dude";
  }
  else{
    response = "Not my favorite";
  }
  return response;
}
//chatbot
String skullBot(String message){
  
  String response;
  
  if(message == "I'm so tired, I don't wanna go to school"){
    response = "What's up boyyy. It's time to wake up. Get up before i force the ice bucket challenge on you";
}
  else if(message == "Hey, how are you"
    response = "Girl I don't know you. Go fetch me donuts peasant";
 
      





