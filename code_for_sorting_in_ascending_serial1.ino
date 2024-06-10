const int arraySize = 5; // Define the size of the array
int myArray[arraySize] = {5, 3, 7, 2, 1}; // Initialize an array with some values

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  bubbleSort(myArray, arraySize); // Sort the array using bubble sort
  
  // Print the sorted array to the Serial Monitor
  Serial.println("Sorted array:");
  printArray(myArray, arraySize);
  
  while (true); // Endless loop to stop further execution
}

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        // Swap arr[j] and arr[j + 1]
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    Serial.print(arr[i]);
    Serial.print(" ");
  }
  Serial.println();
}