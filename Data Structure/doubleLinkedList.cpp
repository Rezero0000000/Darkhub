#include <iostream>

 struct Node {
   std::string name;
  
  struct Node *prev;
  struct Node *next;
};


void createSingleNode (std::string);
void createFristNode (std::string);

void printAllNode ();

Node *head, *tail, *newNode, *temporaryNode, *currentNode;

int main () {
  std::cout << "\nCreate single node" << std::endl;
  createSingleNode("Rei");
  printAllNode();
  
  std::cout << "\nCreate First node" << std::endl;
  createSingleNode("Schwartz");
  printAllNode();

  std::cout << "\n";
  return 0;
}

void createSingleNode (std::string name) {
  head = new Node();
  head->name = name;

  head->next = NULL;
  head->prev = NULL;
  tail = head;
}

void createFristNode (std::string name) {
  newNode = new Node();
  newNode->name = name;

  newNode->next = head;
  newNode->prev = NULL;
  head->prev = newNode;
  head = newNode;
}

void printAllNode () {
  currentNode = head;

  while (currentNode != NULL) {
    std::cout << currentNode->name << " -> ";
    currentNode = currentNode->next;
  }
}
