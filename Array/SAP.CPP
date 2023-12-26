// 

#include <iostream>
using namespace std;

// A function that returns the number of occurrences of a digit in a number
int countDigit(int needle, int haystack) {
  // Initialize a counter variable
  int answer = 0;
  // Loop until the number becomes zero
  while (haystack > 0) {
    // If the last digit of the number is equal to the needle
    if (haystack % 10 == needle) {
      // Increment the counter by 1
     answer++;
    }
    // Remove the last digit of the number by dividing it by 10
    haystack /= 10;
  }
  // Return the counter value
  return answer;
}

// The main function
int main() {
  // Declare two integer variables to store the needle and the haystack
  int needle, haystack;
  // Read the input from the user
  cin >> needle >> haystack;
  // Call the function to count the occurrences of the needle and print the result
  cout << countDigit(needle, haystack) << endl;
  // Return 0 to indicate successful termination
  return 0;
}
