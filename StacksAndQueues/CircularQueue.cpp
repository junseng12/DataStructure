#include<stdio.h>
//Circular Queue
#define MAX_QUEUE_SIZE 10
//element ����ü
typedef struct ElementClass {
    int key;
} element;
element queue[MAX_QUEUE_SIZE];

int front = 0, rear = 0;

void addq(element item);
element deleteq();
void queueFull(); //���� ���� �ʿ�
element queueEmpty(); //���� ���� �ʿ�

void addq(element item) {
    rear = (rear + 1) % MAX_QUEUE_SIZE;
    if (front == rear)
        queueFull(rear);
    queue[rear] = item;
}

element deleteq() {
    if (front == rear)
        return queueEmpty();
    front = (front + 1) % MAX_QUEUE_SIZE;
    return queue[front];
}

void queueFull() {
    printf("Queue is Full.");
    //���� ó���ؾ���
}

element queueEmpty() {
    element a = { -1 };
    printf("Queue is Empty.");
    //���� ó���ؾ���
    return a;
}#pragma once
