#include<iostream>

using namespace std;


class Queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;

    Queue(int size){
        arr = new int [size];
        front=-1;
        rear = -1;
        this->size =size;
    }

    void push(int val){
        // CHeck full
        if(rear==size-1){
            cout<<"Queue is full";
            return;
        }
        else if(front==-1 && rear==-1){
            // queue is empty
            front++;
            rear++;
            arr[rear] = val;
        }else{
            //normal condition
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        // if empty
        if(front==-1 && rear==-1){
            cout<<"Queue is empty";
            return;
        }else if(front==rear){
            //queue has one element
            arr[front]=-1;
            front=-1;
            rear=-1;
        }else{
            //normal condition
            arr[front]=-1;
            front++;
        }
    }

    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }else{
           return false;
        }
    }
    

    int getSize(){
        return rear-front+1;
    }


    int getFrontElement(){
        if(front==-1 && rear==-1){
            cout<<"Queue is empty";
            return -1; 
        }else{
            return arr[front];
        }
    }

    int getRearElement(){
        if(front==-1 && rear==-1){
            cout<<"Queue is empty";
            return -1;
        }else{
            return arr[rear];
        }
    }

    void printQueue(){
        cout<<"Print : ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};



int main(){
    Queue q(5);
    q.push(5);
    q.push(5);
    q.push(2);
    q.push(3);
    q.push(4);
    
    q.printQueue();

    q.pop();

    q.printQueue();

    cout<<q.getSize();

    return 0;
}

