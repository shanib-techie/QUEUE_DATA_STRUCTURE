#include <iostream>
#include <vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f =0;
        b =0;
    }



    void push(int val){
        if(b==5){
            cout<<"QUEUE IS FULL ! ";
        }
        arr[b] = val;
        b++;
    }

    void pop(){
        if(f-b == 0){
            cout<<"QUEUE is empty ! \n";
            return;
        }
        f++;
    }


    int front(){
        if(f-b == 0){
            cout<<"QUEUE IS EMPTY \n";
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f-b == 0){
                  cout<<"QUEUE IS EMPTY \n";
            return -1;
        }
        return arr[b-1];
    }


    bool empty(){
        if(f-b==0){
            return true;
        }
    }


    void display(){
        for(int i = f ;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Queue q;//push,pop,front,back,size,empty
    q.front();
    q.empty();
    q.push(9);
    q.push(33);
    q.push(11);
    q.push(31);
    q.push(13);
    q.display();
    q.pop();
    q.pop();
    q.display();
    
    

}