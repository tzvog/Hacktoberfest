#include<stdio.h>
#include<stdlib.h>

struct circularQueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *ptr){
    if(ptr->f==ptr->r){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct circularQueue *ptr){
    if((ptr->r+1)%ptr->size==ptr->f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct circularQueue *ptr,int data){
    if(isFull(ptr)){
        printf("Queue is full\n");
    }
    else{
        ptr->r=(ptr->r+1)%ptr->size;
        ptr->arr[ptr->r]=data;
        printf("Enqueued element %d\n",data);
    }
}

int dequeue(struct circularQueue *ptr){
    if(isEmpty(ptr)){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        ptr->f=(ptr->f+1)%ptr->size;
        int x=ptr->arr[ptr->f];
        return x;
    }
}


int main(){
    struct circularQueue *q=(struct circularQueue *)malloc(sizeof(struct circularQueue));
    q->size=4;
    q->f=q->r=0;
    q->arr=(int *)malloc(q->size*sizeof(int));

    printf("Dequeue element %d\n",dequeue(q));
    enqueue(q,12); 
    enqueue(q,13); 
    enqueue(q,14);
    printf("Dequeue element %d\n",dequeue(q));
    printf("Dequeue element %d\n",dequeue(q));
    printf("Dequeue element %d\n",dequeue(q));
    enqueue(q,16); 
    enqueue(q,17); 
    enqueue(q,18);

    if(isEmpty(q)){
        printf("Queue is empty\n");
    }

    if(isFull(q)){
        printf("Queue is full\n");
    }
}
