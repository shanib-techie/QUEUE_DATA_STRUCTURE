#include <iostream>
#include <queue>
using namespace std;
void display(queue<int>& q){
    int n =  q.size();//sabse pehle queue ka size nikala
    for(int i =1 ;i<=n;i++){ //loop calaya size jitna
        int x = q.front();  // x variable me first ele add kra
        cout<<x<<" "; //then x ko print kra
        q.pop();  // fhir x ko pop kr diya 
        q.push(x);  //then x ko wapis push kr diya kyuki queue h toh dusri taraf se push hua h 

    }
    

}
int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
       cout<<q.size()<<" \n";
    cout<<q.front()<<" \n";//first element will show 
    cout<<q.back()<<"\n";//last element will show
    q.pop();//remove the first standing  elemnt
    cout<<q.front()<<" \n";
    cout<<q.size()<<" \n";
    cout<<"YOUR QUEUE : ";
    display(q);
}