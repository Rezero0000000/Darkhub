#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
  char name[100];
  char status[100];
  int hp;
  int mp;

  struct Node* next;
}

struct Node* createNode (char nama[100], char status[100], int hp, int mp) {
  struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
  strcpy(newNode->name, nama);
  strcpy(newNode->status, status);
  newNode->hp = hp;
  newNode->mp = mp;

  newNode->next = NULL;
  return newNode;
}

int main () {
  return 0;
}
