#include <stdio.h>
#include <stdlib.h>

struct student {
    int id;
    int Maths;
    int Science;
    struct student *next;
};

struct student *front = NULL, *rear = NULL;
struct student* createNode(int id, int m, int s) {
    struct student *newNode = malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = m;
    newNode->Science = s;
    newNode->next = NULL;
    return newNode;
}
void add() {
    int id, m, s;

    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Maths: ");
    scanf("%d", &m);
    printf("Science: ");
    scanf("%d", &s);

    struct student *newNode = createNode(id, m, s);

    if (rear == NULL) {   
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Added successfully\n");
}

void removeEntry() {
    if (front == NULL) {
        printf("Queue Underflow (Empty)\n");
        return;
    }

    struct student *temp = front;

    printf("Removed: ID:%d Maths:%d Science:%d\n",
           temp->id, temp->Maths, temp->Science);

    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}
void display() {
    struct student *temp = front;

    if (front == NULL) {
        printf("Queue Empty\n");
        return;
    }

    printf("\nQueue (Front to Rear):\n");

    while (temp) {
        printf("ID:%d  Maths:%d  Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
int main() {
    int ch;

    while (1) {
        printf("\n1.Add\n2.Remove\n3.Display\n4.Exit\nChoose: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: add(); break;
            case 2: removeEntry(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}