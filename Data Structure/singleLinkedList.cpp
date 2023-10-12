#include <iostream>

struct Node {
  std::string name;

  struct Node *next;
};

void createSingleNode (std::string);
void createFirstNode (std::string);
void createLastNode (std::string);
void createMiddleNode (std::string, int);

void deleteFirstNode ();
void deleteLastNode ();
void deleteMiddleNode (int);

void updateFirstNode (std::string);
void updateLastNode (std::string);
void updateMiddleNode (std::string, int);

void printAllNode();

Node *head, *tail, *currentNode, *newNode, *temporaryNode, *beforeNode; 

int main () {
  std::cout << "\nCreate single node" << std::endl;
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
  createFirstNode("Schwartz");
  createLastNode("Atomic");
  createLastNode("Goblin-Slayer");
  createLastNode("Monster");
  printAllNode();
  
  std::cout << "\n\nUpdate First node" << std::endl;
  updateFirstNode("Shadow");
  printAllNode();

  std::cout << "\n\nUpdate Last node" << std::endl;
  updateLastNode("Darkness");
  printAllNode();

  std::cout << "\n\nUpdate linked list" << std::endl;
  deleteFirstNode();
  deleteFirstNode();
  printAllNode();

  std::cout << "\n\nCreate middle node" << std::endl;
  createMiddleNode("Schwartz", 3);
  printAllNode();

  std::cout << "\n\nDelete middle node" << std::endl;
  deleteMiddleNode(3);
  printAllNode();

  std::cout << "\n\nUpdate middle node" << std::endl;
  updateMiddleNode("Schwartz", 2);
  printAllNode();

  std::cout << "\n";
  return 0;
}

void createSingleNode (std::string name) {
  head = new Node();
  head->name = name;
 
  head->next = NULL;
  tail = head;
}

void createFirstNode (std::string name) {
  newNode = new Node();
  newNode->name = name;
  
  newNode->next = head;
  head = newNode;
}

void createLastNode (std::string name) {
  newNode = new Node();
  newNode->name = name;
  
  newNode->next = NULL;
  tail->next = newNode;
  tail = newNode;
}

void createMiddleNode (std::string name, int position) {
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

void deleteFirstNode () {
  temporaryNode = head;
  head = head->next;

  delete temporaryNode;
}

void deleteLastNode () {
    temporaryNode = tail;
    currentNode = head;

    while (currentNode->next != NULL){

        if(currentNode->next == tail){
            currentNode->next = NULL;
            tail = currentNode;

        } else {
            currentNode = currentNode->next;
        }
    }
    delete temporaryNode;
}

void deleteMiddleNode (int position) {
  currentNode = head;
  int number = 1;

  while (number <= position) {
    if (number == position - 1) {
      beforeNode = currentNode;
    }
    if (number == position) {
      temporaryNode = currentNode;
    }
    currentNode = currentNode->next;
    number++;
  }
  
  beforeNode->next = currentNode;
  delete temporaryNode;
}

void printAllNode () {
  currentNode = head;

  while (currentNode != NULL) {
    std::cout << currentNode->name << " -> ";
    currentNode = currentNode->next;
  }
}

void updateFirstNode (std::string name) {
  head->name = name;
}

void updateLastNode (std::string name) {
  tail->name = name;
}

void updateMiddleNode (std::string name, int position) {
  int number = 1;
  currentNode = head;

  while (number <= position-1){
    currentNode = currentNode->next;
    number++;
  }
  currentNode->name = name;
}
