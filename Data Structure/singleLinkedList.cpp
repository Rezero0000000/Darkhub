#include <iostream>

struct Node {
  std::string name;

  struct Node *next;
};

void createSingleNode (std::string);
void createFirstNode (std::string);
void createLastNode (std::string);

void deleteFirstNode ();
void deleteLastNode ();

void printAllNode();


Node *head, *tail, *currentNode, *newNode, *temporaryNode; 

int main () {
  std::cout << "\nCreate single node" << std::endl;
  createSingleNode("Rey");
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

void printAllNode () {
  currentNode = head;

  while (currentNode != NULL) {
    std::cout << currentNode->name << " -> ";
    currentNode = currentNode->next;
  }

}



