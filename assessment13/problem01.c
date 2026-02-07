#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    int math;
    int science;
    struct student *next;
};
struct student *head = NULL;
void insert(int id, int math,int science) 
{
    struct student *new_node = (struct student *)malloc(sizeof(struct student));
    new_node->id = id;
    new_node->math = math;
    new_node->science = science;
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
}
void display_list() {
    if (head == NULL) {
        printf("No entries to display.\n");
        return;
    }
    struct student *temp = head;
    printf("\nAll Student Entries:\n");
    printf("ID\tMath\tScience\n");
    printf("--------------------------------\n");
    while (temp != NULL) {
        printf("%d\t%d\t%d\n", temp->id, temp->math, temp->science);
        temp = temp->next;
    }
    printf("--------------------------------\n");
}
int main() {
    int id, math_marks, science_marks;
    printf("Enter student data (ID Math Science). Enter ID -1 to exit input mode.\n");
    while (1) {
        printf("Enter ID: ");
        scanf("%d", &id);
        if (id == -1) {
            break;
        }
        printf("Enter Math marks: ");
        scanf("%d", &math_marks);
        printf("Enter Science marks: ");
        scanf("%d", &science_marks);
        insert(id, math_marks, science_marks); 
        printf("Entry added.\n\n");
    }
    
    display_list();
    struct student *temp = head;
    while (temp != NULL) {
        struct student *next = temp->next;
        free(temp);
        temp = next;
    }
    
    return 0;
}
