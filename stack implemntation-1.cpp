#include <stdio.h>
#include <stdlib.h>

#define max 5

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;
int size = 0;

void enqueue() {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("enter value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (max == size) {
        printf("overflow queue is full\n");
    } else if (front == NULL && rear == NULL) {
        front = rear = temp;
        printf("%d is enqueued\n", temp->data);
        size++;
    } else {
        rear->next = temp;
        rear = temp;
        printf("%d is enqueued\n", temp->data);
        size++;
    }
}

void dequeue() {
    if (front == NULL && rear == NULL) {
        printf("\nqueue is empty underflow\n");
    } else {
        struct node *temp = front;
        printf("%d is dequeued\n", temp->data);
        front = front->next;
        free(temp);
        size--;
        if (front == NULL) {
            rear = NULL;
        }
    }
}

void display() {
    if (front == NULL && rear == NULL) {
        printf("\nqueue is empty underflow\n");
    } else {
        struct node *ptr;
        ptr = front;
        while (ptr != NULL) {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

void peek() {
    if (front == NULL && rear == NULL) {
        printf("\nqueue is empty underflow\n");
    } else {
        printf("front is : %d\n", front->data);
    }
}

int main() {
    int ch;

    while (1) {
        printf("\n1. enqueue\n2. dequeue\n3. peek\n4. display\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: {
                enqueue();
                break;
            }
            case 2: {
                dequeue();
                break;
            }
            case 3: {
                peek();
                break;
            }
            case 4: {
                display();
                break;
            }
            default:
                printf("\nentered wrong choice\n");
        }
    }
}
