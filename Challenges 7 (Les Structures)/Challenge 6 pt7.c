#include <stdio.h>
#include <stdlib.h>

struct Market {
  char name[50];
  float price;
  int Quantity;
};

int main() {
  struct Market Item1 = {"Thon", 10.99, 1999};
  struct Market Item2 = {"Plushies", 59.99, 1969};
  struct Market Item3 = {"Snacks", 5.99, 2011};

  printf("Name : %s / Price : %.2f Mad / Quantity : %d\n", Item1.name, Item1.price, Item1.Quantity);
  printf("Name : %s / Price : %.2f Mad / Quantity : %d\n", Item2.name, Item2.price, Item2.Quantity);
  printf("Name : %s / Price : %.2f Mad / Quantity : %d\n", Item3.name, Item3.price, Item3.Quantity);

  return 0;
}

