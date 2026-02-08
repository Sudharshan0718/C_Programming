#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *top = NULL;

struct student* createNode(int id, int m, int s) {
    struct student *newNode = malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = m;
    newNode->Science = s;
    newNode->next = NULL;
    return newNode;
}
void push() {
    int id, m, s;

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Maths: ");
    scanf("%d", &m);

    printf("Science: ");
    scanf("%d", &s);

    struct student *newNode = createNode(id, m, s);

    newNode->next = top;
    top = newNode;

    printf("Pushed successfully\n");
}
void pop() {
    if (top == NULL) {
        printf("Stack Underflow (Empty)\n");
        return;
    }

    struct student *temp = top;

    printf("Popped: ID:%d Maths:%d Science:%d\n",
           temp->id, temp->Maths, temp->Science);

    top = top->next;
    free(temp);
}
void display() {
    struct student *temp = top;

    if (top == NULL) {
        printf("Stack Empty\n");
        return;
    }

    printf("\nStack (Top to Bottom):\n");

    while (temp) {
        printf("ID:%d  Maths:%d  Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
int main() {
    int ch;

    while (1) {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\nChoose: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}