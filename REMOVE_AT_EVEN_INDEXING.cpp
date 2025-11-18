#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> & q){
    int n = q.size();
    int x;
    for(int i = 1; i<= n;i++){
        x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

    }
}


// // REMOVE EVEN ELEMNT BY 0 INDEXING 
// void remove_even_indexing(queue<int> q){
//     int n = q.size();
//     for(int i = 1;i<=n;i++){
//         if(i%2 == 0){
//             q.pop();
//         }else{
//             int x = q.front();
//             cout<<x<<" ";
//             q.pop();
//             q.push(x);
//         }
//     }
// }

// REMOVE EVEN NUMBER FROM QUEUE 

void remove_even_ele_from_queue(queue<int> & q){
    int n = q.size();
    queue<int> even;
    queue<int> odd;


    for(int i = 0;i<=n;i++)
    {
        if(q.front()%2 == 0){
            cout<<"EVEN QUEUE: ";
            int x = q.front();
            cout<<x<<" ";
            q.pop();
            even.push(x);

        }else{
            cout<<"\nODD QUEUE : ";
            int y = q.front();
            cout<<y<<" "; 
            q.pop();
            odd.push(y);
        }
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(33);
    q.push(41);
    q.push(50);
    display(q);
    remove_even_ele_from_queue(q);
}