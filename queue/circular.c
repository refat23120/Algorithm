#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Rear = -1;
int Front = -1;
int *Queue;
int max;
int Size = 0;

bool Is_Empty() {
    return Size == 0;
}

bool Is_Full() {
    return Size == max;
}

void Add(int Element) {
    if (!Is_Full()) {
        Rear = (Rear + 1) % max;
        Queue[Rear] = Element;
        Size++;
    } else {
        printf("Queue is full\n");
    }
}

int Delete() {
    if (!Is_Empty()) {
        Front = (Front + 1) % max;
        int value = Queue[Front];
        Size--;
        return value;
    } else {
        printf("Queue is empty\n");
        return -1;
    }
}

int getFront() {
    if (!Is_Empty()) {
        return Queue[(Front + 1) % max];
    } else {
        printf("Queue is empty\n");
        return -1;
    }
}

void initializeQueue(int queueSize) {
    max = queueSize;
    Queue = (int *)malloc(max * sizeof(int));
    if (Queue == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

void freeQueue() {
    free(Queue);
}

void display() {
    if (Is_Empty()) {
        printf("Queue is empty\n");
    } else {
        int i = (Front + 1) % max;
        int count = 0;
        while (count < Size) {
            printf("%d ", Queue[i]);
            i = (i + 1) % max;
            count++;
        }
        printf("\n");
    }
}

int main() {
    int queueSize;
    printf("Enter the size of the queue: ");
    scanf("%d", &queueSize);
    initializeQueue(queueSize);

    while (true) {
        int x;
        printf("----------------------------------\n");
        printf("Enter option:\n 1 for add\n 2 for delete\n 3 for get front\n 4 for is empty\n 5 for is full\n 6 for display\n 7 to exit\n");
        printf("----------------------------------\n");
        scanf("%d", &x);
        switch (x) {
            case 1: {
                int e;
                printf("Enter element: ");
                scanf("%d", &e);
                Add(e);
                break;
            }
            case 2:
                printf("%d\n", Delete());
                break;
            case 3:
                printf("%d\n", getFront());
                break;
            case 4:
                printf("%d\n", Is_Empty());
                break;
            case 5:
                printf("%d\n", Is_Full());
                break;
            case 6:
                display();
                break;
            case 7:
                freeQueue();
                return 0;
            default:
                printf("Invalid option\n");
                break;
        }
    }

    freeQueue();
    return 0;
}
