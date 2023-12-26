#include <stdio.h>

int main() {

  // Declare and read numOfProducts
  int numOfProducts;
  scanf("%d", &numOfProducts);

  // Declare and read order array
  int order[numOfProducts];
  for (int i = 0; i < ZSnumOfProducts; i++) {
    scanf("%d", &order[i]);
  }

  // Declare and read disAmount
  int disAmount;
  scanf("%d", &disAmount);

  // Initialize count to zero
  int count = 0;

  // Loop through each product type
  for (int i = 0; i < numOfProducts; i++) {

    // If the order of the product type is positive
    if (order[i] > 0) {

      // Subtract the discount amount from the order
      order[i] -= disAmount;

      // If the order is still positive or zero
      if (order[i] >= 0) {

        // Increment count by one
        count++;
      }
    }
  }

  // Print count
  printf("%d\n", count);

  return 0;
}

