#include <stdio.h>

#define N 100000

typedef int element;

typedef struct {
    int head;
    element heap[N];
} HeapType;

void init(HeapType *H) {
    H->head = 0;
    for (int i = 0; i < N; i++)
        H->heap[i] = -1;
}

void insert() {
    
}

void delete() {

}

int main() {
    HeapType *h;
    init(&h);

    int n;  scanf("%d", &n);
    for (int i = 0; i < n; i++) {

    }
}