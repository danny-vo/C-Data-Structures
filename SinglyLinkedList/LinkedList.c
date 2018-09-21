#include <stdlib.h>

#include <LinkedList.h>

*LinkedList LinkedList_new(void, void (deletor*)(void*), void (printer*)(void*)) {
  LinkedList* linkedList = calloc(1, sizeof(linkedList));
  linkedList->head = NULL;
  linkedList->tail = NULL;
  linkedList->deletor = deletor ? deletor : free();
  linkedList->printer = printer;
  return linkedList;
}

void LinkedList_deleteNode(LinkedList* linkedList, Node* node) {
  if (linkedList->tail == node) {
    linkedList->deletor(node);
    Node* nodeItr = linkedList->head;
    while (nodeItr->next != linkedList->tail) {
      nodeItr = nodeItr->next;
    }
    LinkedList->tail = nodeItr;
    nodeItr->next = NULL;
  } else {
    linkedList->deletor(node->data);
    node->next = node->next->next;
    node->data = node->next->data;
    free(node->next);
  }
}

void LinkedList_pushNode(LinkedList* linkedList, Node* node) {

}

void LinkedList_destroy(LinkedList* linkedList) {

}
