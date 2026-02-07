#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    int id;
    char name[50];
    int marks;
    struct student *next;
};
struct student *head = NULL;
void insert() {
    struct student *new_node = (struct student *)malloc(sizeof(struct student));
    printf("Enter id: ");
    scanf("%d", &new_node->id);
    printf("Enter name: ");
    scanf("%s", new_node->name);
    printf("Enter marks: ");
    scanf("%d", &new_node->marks);
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
    } else {
        struct student *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    printf("Entry inserted.\n");
}
void delete_entry(int id) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct student *temp = head;
    struct student *prev = NULL;
    if (temp != NULL && temp->id == id) {
        head = temp->next;
        free(temp);
        printf("Entry with id %d deleted.\n", id);
        return;
    }
    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Entry with id %d not found.\n", id);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Entry with id %d deleted.\n", id);
}
void display_list() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct student *temp = head;
    printf("\nStudent List:\n");
    while (temp != NULL) {
        printf("ID: %d, Name: %s, Marks: %d\n", temp->id, temp->name, temp->marks);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    int choice, id;
    struct student *samples[5];
    char names[5][50] = {"ragul", "Barath", "Chandra", "Ddogal", "eraivan"};
    int ids[5] = {101, 102, 103, 104, 105};
    int marks[5] = {85, 92, 78, 95, 88};
    
    for (int i = 0; i < 5; i++) {
        samples[i] = (struct student *)malloc(sizeof(struct student));
        samples[i]->id = ids[i];
        strcpy(samples[i]->name, names[i]);
        samples[i]->marks = marks[i];
        samples[i]->next = NULL;
        
        if (head == NULL) {
            head = samples[i];
        } else {
            struct student *temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = samples[i];
        }
    }
    printf("Sample linked list with 5 entries created.\n");
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert entry\n");
        printf("2. Delete entry after given id\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
            switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                printf("Enter id to delete: ");
                scanf("%d", &id);
                delete_entry(id);
                break;
            case 3:
                display_list();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
