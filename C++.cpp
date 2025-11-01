#include <stdio.h> #include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
// Function to create node and append to list void create(int value) { struct Node* newNode =
(struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode->next = NULL;
if (head == NULL)
{
    head = newNode;
    newNode->next = head;
}
else
{
    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}
}
// Function to insert at a specific position void insertAtPosition(int pos, int value) { struct Node*
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
if (pos == 1)
{
    if (head == NULL)
    {
        head = newNode;
        newNode->next = head;
    }
    else
    {
        struct Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
}
else
{
    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != head; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
}
// Function to delete node at position void deleteAtPosition(int pos) { if (head == NULL) {
printf("List is empty.\n");
return;
}
if (pos == 1)
{
    struct Node* temp = head;
    if (head->next == head)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct Node* last = head;
        while (last->next != head)
            last = last->next;
        head = head->next;
        last->next = head;
        free(temp);
    }
}
else
{
    struct Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != head; i++)
    {
        temp = temp->next;
    }
    struct Node* del = temp->next;
    temp->next = del->next;
    free(del);
}
}
// Function to search for a value void search(int value) { struct Node* temp = head; int pos = 1,
found = 0;
if (head == NULL)
{
    printf("List is empty.\n");
    return;
}
do
{
    if (temp->data == value)
    {
        printf("Element %d found at position %d\n", value, pos);
        found = 1;
        break;
    }
    temp = temp->next;
    pos++;
}
while (temp != head);
if (!found)
    printf("Element %d not found.\n", value);
}
// Function to display the list void display() { struct Node* temp = head;
if (head == NULL)
{
    printf("List is empty.\n");
    return;
}
printf("Circular Linked List: ");
do
{
    printf("%d -> ", temp->data);
    temp = temp->next;
}
while (temp != head);
printf("HEAD\n");
}
// Main function with menu int main() { int choice, value, pos;
while (1)
{
    printf("\n--- Menu ---\n");
    printf("1. Create\n2. Insert at Position\n3. Delete at
           Position\n4. Search\n5. Display\n6. Exit\n");
           printf("Enter your choice: ");
           scanf("%d", &choice);
           switch (choice)
{
case 1:
    printf("Enter value to add: ");
        scanf("%d", &value);
        create(value);
        break;
    case 2:
        printf("Enter position: ");
        scanf("%d", &pos);
        printf("Enter value: ");
        scanf("%d", &value);
        insertAtPosition(pos, value);
        break;
    case 3:
        printf("Enter position to delete: ");
        scanf("%d", &pos);
        deleteAtPosition(pos);
        break;
    case 4:
        printf("Enter value to search: ");
        scanf("%d", &value);
        search(value);
        break;
    case 5:
        display();
        break;
    case 6:
        return 0;
    default:
        printf("Invalid choice. Try again.\n");
    }
}
return 0;
}
