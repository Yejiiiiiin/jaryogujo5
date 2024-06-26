#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void addNode(Node *target, int data) {
  Node *temp = (Node *)malloc(sizeof(Node));
  temp->data = data;

  temp->next = target->next;
  target->next = temp;
}

int main() {
  Node *head = (Node *)malloc(sizeof(Node));
  Node *a = (Node *)malloc(sizeof(Node));
  Node *b = (Node *)malloc(sizeof(Node));
  Node *c = (Node *)malloc(sizeof(Node));
  Node *d = (Node *)malloc(sizeof(Node));

  a->data = 1;
  b->data = 2;
  c->data = 3;
  d->data = 4;

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = NULL;

  int key = 3;

  Node *curr = head->next; //순회용 연결리스트

  while (curr != NULL) {
    if (key == curr->data) {
      addNode(curr, 100);
    } //앗 3이다
    curr = curr->next;
  }

  while (a != NULL) {
    printf("%d ", a->data);
    a = a->next;
  }

  free(head);
  free(a);
  free(b);
  free(c);
  free(d);
}