// C++ code
//
const int arraySize=10;
int numbers[arraySize]={5, 2, 8, 10, 3, 7, 1, 6, 9, 4};
void setup()
{
  Serial.begin(9600);
  Serial.print("Original Array:");
  printArray();
  int Largest=findLargestNumber();
  Serial.print("The Largest Num:");
  Serial.print(Largest);
  
  
}

void loop()
{
}
  int findLargestNumber(){
    int maxNum=numbers[0];
    for(int i=0;i<arraySize;i++){
      if(numbers[i]>maxNum){
        maxNum=numbers[i];
      }}
    return maxNum;
  }

    void printArray(){
      for(int i=0;i<arraySize;i++){
        Serial.print(numbers[i]);
        if(i<arraySize-1){
          Serial.print(",");
        }}
      Serial.println();
    
  }