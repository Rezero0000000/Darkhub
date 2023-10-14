#include <iostream>

 struct Node {
   std::string name;
  
  struct Node *prev;
  struct Node *next;
};


void createSingleNode (std::string);
void createFirstNode (std::string);
void createLastNode (std::string);

void deleteFirstNode ();
void deleteLastNode ();

void printAllNode ();

Node *head, *tail, *newNode, *temporaryNode, *currentNode;

int main () {
  std::cout << "\n\nCreate single node" << std::endl;
  createSingleNode("Rei");
  printAllNode();
  
  std::cout << "\n\nCreate First node" << std::endl;
  createFirstNode("Schwartz");
  printAllNode();

  std::cout << "\n\nCreate Last node" << std::endl;
  createLastNode("Kazuto");
  printAllNode();

  std::cout << "\n\nDelete First node" << std::endl;
  deleteFirstNode();
  printAllNode();

  std::cout << "\n\nDelete Last node" << std::endl;
  deleteLastNode();
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

void createFirstNode (std::string name) {
  newNode = new Node();
  newNode->name = name;

  newNode->next = head;
  newNode->prev = NULL;
  head->prev = newNode;
  head = newNode;
}

void createLastNode (std::string name) {
  newNode = new Node();
  newNode->name = name;

  newNode->next = NULL;
  newNode->prev = tail;
  
  tail->next = newNode;
  tail = newNode;
}

void deleteFirstNode () {
  temporaryNode = head;
  head = head->next;
  head->prev = NULL;
  delete temporaryNode;
}

void deleteLastNode () {
  temporaryNode = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete temporaryNode;
}

void printAllNode () {
  currentNode = head;

  while (currentNode != NULL) {
    std::cout << currentNode->name << " -> ";
    currentNode = currentNode->next;
  }
}
