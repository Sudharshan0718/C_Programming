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

void insert_sample_data() {
    // Create 5 sample entries
    int ids[5] = {101, 102, 103, 104, 105};
    int math[5] = {85, 92, 78, 95, 88};
    int science[5] = {88, 94, 85, 89, 92};
    
    for (int i = 0; i < 5; i++) {
        struct student *new_node = (struct student *)malloc(sizeof(struct student));
        new_node->id = ids[i];
        new_node->math = math[i];
        new_node->science = science[i];
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
    printf("Sample linked list with 5 entries created.\n");
}

struct student* find_node(int target_id) {
    struct student *temp = head;
    while (temp != NULL) {
        if (temp->id == target_id) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void insert_entry() {
    int given_id, position, new_id, new_math, new_science;
    
    printf("Enter reference ID: ");
    scanf("%d", &given_id);
    
    struct student *ref_node = find_node(given_id);
    if (ref_node == NULL) {
        printf("ID %d not found.\n", given_id);
        return;
    }
    
    printf("Insert 1-BEFORE or 2-AFTER ID %d? ", given_id);
    scanf("%d", &position);
    
    printf("Enter new ID, Math, Science: ");
    scanf("%d %d %d", &new_id, &new_math, &new_science);
    
    struct student *new_node = (struct student *)malloc(sizeof(struct student));
    new_node->id = new_id;
    new_node->math = new_math;
    new_node->science = new_science;
    
    if (position == 1) {  // Before
        new_node->next = ref_node;
        if (ref_node == head) {
            head = new_node;
        } else {
            struct student *prev = head;
            while (prev->next != ref_node) {
                prev = prev->next;
            }
            prev->next = new_node;
        }
    } else {  // After
        new_node->next = ref_node->next;
        ref_node->next = new_node;
    }
    printf("New entry inserted.\n");
}

void display_list() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    struct student *temp = head;
    printf("\nStudent List:\n");
    printf("ID\tMath\tScience\n");
    printf("----------------------------\n");
    while (temp != NULL) {
        printf("%d\t%d\t%d\n", temp->id, temp->math, temp->science);
        temp = temp->next;
    }
    printf("----------------------------\n");
}

int main() {
    insert_sample_data();
    display_list();  // Show initial sample data
    
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert entry (before/after given ID)\n");
        printf("2. Display list\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insert_entry();
                break;
            case 2:
                display_list();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
