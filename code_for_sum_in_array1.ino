// C++ code
//
const int arrSize=8;
int arr[arrSize]={1,2,3,4,5,6,7,8};
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sum=0;
  for(int i=0;i<arrSize;i++){
    sum+=arr[i];
  }
  Serial.println(sum);
}