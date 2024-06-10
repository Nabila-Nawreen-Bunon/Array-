
const int arraySize = 10; // Define the size of the array
int myArray[arraySize] = {5, 2, 8, 5, 3, 5, 9, 7, 5, 1}; // Initialize an array with some values
int targetElement = 5; // Element to be counted
int count = 0; // Variable to store the count

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  count = countOccurrences(myArray, arraySize, targetElement); // Count occurrences of targetElement in the array
  
  // Print the count to the Serial Monitor
  Serial.print("Occurrences of ");
  Serial.print(targetElement);
  Serial.print(" in the array: ");
  Serial.println(count);
  
  while (true); // Endless loop to stop further execution
}

int countOccurrences(int arr[], int n, int target) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      count++;
    }
  }
  return count;
}
