#include <iostream>

 struct Node {
   std::string name;
  
  struct Node *prev;
  struct Node *next;
};


void createSingleNode (std::string);
void createFirstNode (std::string);
void createLastNode (std::string);
void createMiddleNode (std::string, int);

void deleteFirstNode ();
void deleteLastNode ();
void deleteMiddleNode (int position);

void printAllNode ();

Node *head, *tail, *newNode, *temporaryNode, *currentNode, *beforeNode, *afterNode;

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

  std::cout << "\n\nUpdate list" << std::endl;
  createLastNode("Kazuto");
  createLastNode("Schwartz");
  printAllNode();

  std::cout << "\n\nCreate Middle node" << std::endl;
  createMiddleNode("Atomic", 2);
  printAllNode();

  std::cout << "\n\nDelete Middle node" << std::endl;
  deleteMiddleNode(2);
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

void createMiddleNode (std::string name, int position) {
  int number = 1;
  currentNode = head;
  newNode = new Node();
  newNode->name = name;

  while (number < position-1){
    currentNode = currentNode->next;
    number++;
  }
  afterNode = currentNode->next;
  newNode->prev = currentNode;
  newNode->next = afterNode;
  currentNode->next = newNode;
  afterNode->prev = newNode;
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

void deleteMiddleNode (int position) {
  int number = 1;
  currentNode = head;
  
  while (number < position - 1) {
    currentNode = currentNode->next;
    number++;
  }
  
  temporaryNode = currentNode->next;
  afterNode = temporaryNode->next;
  currentNode->next = temporaryNode->next;
  afterNode->prev = currentNode;
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
