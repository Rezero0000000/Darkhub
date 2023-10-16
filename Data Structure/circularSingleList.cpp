#include <iostream>

struct Node {
  std::string name;
  struct Node *next;
};


Node *head, *tail, *currentNode, *newNode, *temporaryNode;
void createSingleNode(std::string name) {
  head = new Node();
  head->name = name;
  head->next = head;  
  tail = head;
}

void createFirstNode(std::string name) {
  newNode = new Node();
  newNode->name = name;
  newNode->next = head;
  tail->next = newNode;
  head = newNode;
}

void createLastNode(std::string name) {
  newNode = new Node();
  newNode->name = name;
  newNode->next = head; 
  tail->next = newNode;
  tail = newNode;
}

void createMiddleNode(std::string name, int position) {
  if (position <= 1) {
    createFirstNode(name);
    return;
  }

  newNode = new Node();
  newNode->name = name;

  int number = 1;
  currentNode = head;

  while (number < position - 1) {
    currentNode = currentNode->next;
    number++;
  }
  newNode->next = currentNode->next;
  currentNode->next = newNode;
}

void deleteFirstNode() {
  if (head == NULL)
    return;

  temporaryNode = head;
  head = head->next;
  tail->next = head;

  delete temporaryNode;
}

void deleteLastNode() {
  if (head == NULL)
    return;

  if (head == tail) {
    delete head;
    head = NULL;
    tail = NULL;
  } else {
    temporaryNode = tail;
    currentNode = head;

    while (currentNode->next != tail) {
      currentNode = currentNode->next;
    }
    currentNode->next = head;
    tail = currentNode;

    delete temporaryNode;
  }
}

void deleteMiddleNode(int position) {
  if (head == NULL)
    return;

  if (position <= 1) {
    deleteFirstNode();
    return;
  }

  int number = 1;
  currentNode = head;

  while (number < position - 1) {
    currentNode = currentNode->next;
    number++;
  }

  if (currentNode->next == head) {
    return; 
  }

  temporaryNode = currentNode->next;
  currentNode->next = temporaryNode->next;
  delete temporaryNode;
}

void printAllNode() {
  if (head == NULL)
    return;

  currentNode = head;

  do {
    std::cout << currentNode->name << " -> ";
    currentNode = currentNode->next;
  } while (currentNode != head);

  std::cout << std::endl;
}

int main() {
  std::cout << "\n\nCreate single node" << std::endl;
  createSingleNode("Rei");
  printAllNode();

  std::cout << "\n\nCreate first node" << std::endl;
  createFirstNode("Schwartz");
  printAllNode();

  std::cout << "\n\nCreate last node" << std::endl;
  createLastNode("Atomic");
  printAllNode();

  std::cout << "\n\nDelete First node" << std::endl;
  deleteFirstNode();
  printAllNode();

  std::cout << "\n\nDelete Last node" << std::endl;
  deleteLastNode();
  printAllNode();

  std::cout << "\n\nUpdate linked list" << std::endl;
  createLastNode("Atomic");
  createLastNode("Goblin-Slayer");
  createLastNode("Monster");
  printAllNode();

  std::cout << "\n\nCreate middle node" << std::endl;
  createMiddleNode("Schwartz", 3);
  printAllNode();

  std::cout << "\n\nDelete middle node" << std::endl;
  deleteMiddleNode(3);
  printAllNode();

  std::cout << "\n";
  return 0;
}

