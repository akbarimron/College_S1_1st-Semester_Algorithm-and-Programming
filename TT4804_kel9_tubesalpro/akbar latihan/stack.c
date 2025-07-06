#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack penuh!\n");
        return;
    }
    s->data[++s->top] = value;
}

void printstack(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong!\n");
        return;
    }
    printf("Isi stack (dari atas ke bawah): ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}


int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack kosong!\n");
        return -1;
    }
    return s->data[s->top--];
}

int main() {
    Stack s;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    printstack(&s);
    printf("Pop: %d\n", pop(&s));
    printf("Pop: %d\n", pop(&s));
    return 0;
}
