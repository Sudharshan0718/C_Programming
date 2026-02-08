#include <stdio.h>
#include <stdlib.h>
struct student {
    struct student *prev;
    int id;
    int Maths;
    int Science;
    struct student *next;
};
struct student *head = NULL;
struct student* createNode(int id, int m, int s) {
    struct student *newNode = malloc(sizeof(struct student));
    newNode->id = id;
    newNode->Maths = m;
    newNode->Science = s;
    newNode->prev = newNode->next = NULL;
    return newNode;
}
void createSample() {
    struct student *temp = NULL;
    for (int i = 1; i <= 5; i++) {
        struct student *newNode = createNode(i, 60+i, 70+i);
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
}
void display() {
    struct student *temp = head;
    if (!head) {
        printf("List Empty\n");
        return;
    }
    while (temp) {
        printf("ID:%d  Maths:%d  Science:%d\n",
               temp->id, temp->Maths, temp->Science);
        temp = temp->next;
    }
}
void insertEntry() {
    int id, m, s, key, ch;
    printf("Enter new ID: ");
    scanf("%d", &id);
    printf("Maths: ");
    scanf("%d", &m);
    printf("Science: ");
    scanf("%d", &s);
    struct student *newNode = createNode(id, m, s);
    printf("1.Before  2.After : ");
    scanf("%d", &ch);
    printf("Reference ID: ");
    scanf("%d", &key);
    struct student *temp = head;
    while (temp && temp->id != key)
        temp = temp->next;
    if (!temp) {
        printf("ID not found\n");
        free(newNode);
        return;
    }
    if (ch == 1) {
        newNode->next = temp;
        newNode->prev = temp->prev;
        if (temp->prev)
            temp->prev->next = newNode;
        else
            head = newNode;
        temp->prev = newNode;
    }
    else {
        newNode->prev = temp;
        newNode->next = temp->next;
        if (temp->next)
            temp->next->prev = newNode;
        temp->next = newNode;
    }
}
void deleteEntry() {
    int key;
    printf("Enter ID to delete: ");
    scanf("%d", &key);
    struct student *temp = head;
    while (temp && temp->id != key)
        temp = temp->next;
    if (!temp) {
        printf("Not found\n");
        return;
    }
    if (temp->prev)
        temp->prev->next = temp->next;
    else
        head = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    free(temp);
    printf("Deleted successfully\n");
}
int main() {
    int ch;
    createSample();
    while (1) {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\nChoose: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: insertEntry(); break;
            case 2: deleteEntry(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}