// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int arr[7]={23,24,25,26,27,28,29};
  for(int i=0;i<7;i++){
    Serial.println("The temparature is:");
    Serial.println(arr[i]);
    delay(500);
  }
 
}