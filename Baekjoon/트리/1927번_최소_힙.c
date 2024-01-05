#include <stdio.h>
#include <stdbool.h>

#define N 100001

typedef int element;

typedef struct {
    int rear;
    element heap[N];
} HeapType;

void init(HeapType *H) {
    H->rear = 1;
    for (int i = 0; i < N; i++)
        H->heap[i] = -1;
}

void insert(HeapType *H, element e) {
    H->heap[H->rear] = e;
    int child = H->rear;
    if (child) {
        int parent = child / 2, temp;
        while (parent >= 1 && H->heap[parent] > H->heap[child]) {
            temp = H->heap[parent];
            H->heap[parent] = H->heap[child];
            H->heap[child] = temp;
            child = parent;
            parent = child / 2;
        }
    }
    H->rear++;
}

element delete(HeapType *H) {
    if (H->rear == 1)
        return 0;
    int e = H->heap[0];
    H->heap[0] = H->heap[H->rear];
    H->heap[H->rear] = -1;
    H->rear--;

    int parent = 1, lc = 2, rc = 3, temp;
    while (parent < H->rear && (H->heap[parent] < H->heap[lc] || H->heap[parent] < H->heap[rc])) {
        lc = parent * 2, rc = parent * 2 + 1;
        if (H->heap[parent] < H->heap[lc] && H->heap[parent] < H->heap[rc]) {
            if (H->heap[lc] > H->heap[rc]) {
                temp = H->heap[parent];
                H->heap[parent] = H->heap[lc];
                H->heap[lc] = temp;
                parent = lc;
            } else {
                temp = H->heap[parent];
                H->heap[parent] = H->heap[rc];
                H->heap[rc] = temp;
                parent = rc;
            }
        } else if (H->heap[parent] < H->heap[lc]) {
            temp = H->heap[parent];
            H->heap[parent] = H->heap[lc];
            H->heap[lc] = temp;
            parent = lc;
        } else if (H->heap[parent] < H->heap[rc]) {
            temp = H->heap[parent];
            H->heap[parent] = H->heap[rc];
            H->heap[rc] = temp;
            parent = rc;
        }
    }

    return e;
}

void print(HeapType *H) {
    for (int i = 1; i < H->rear; i++)
        printf("%d ", H->heap[i]);
    printf("\n");
}

int main() {
    HeapType h;
    init(&h);

    int n, inp;  scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &inp);
        
        if (inp)
            insert(&h, inp);
        else
            printf("%d\n", delete(&h));
        
        print(&h);
    }
}