// C++ code
//
const int arraySize=5;
int myArray[arraySize]={1,2,3,4,5};

void setup()
{
  Serial.begin(9600);
  reverseArray(myArray,arraySize);
  Serial.println("Reversed Array:");
  printArray(myArray,arraySize);
  
}

void loop()
{
 
}
void reverseArray(int arr[],int n){
  int start=0;
  int end=n-1;
  while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
  }
}
void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    Serial.print(arr[i]);
    Serial.print(" ");
  }}