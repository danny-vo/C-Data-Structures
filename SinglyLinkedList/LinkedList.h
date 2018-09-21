typedef struct {
  void* data;
  Node* next;
} Node;

typedef struct {
  Node* head;
  Node* tail;
  int size;
  void (*deletor)(void*);
  void (*printer)(void*);
} LinkedList;
