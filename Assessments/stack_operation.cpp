#include <iostream>
#include <string>
#define MAX 5

using namespace std;

class Stack{
    //declaring our integer as top
    //declaring the array friends and giving its size a maximum of 5
    int top;
    string friends[MAX];

public: Stack(){
    //public visibility modifier so that the Stack class objects can be accessed or viewed throughout the code
    //initialized top as -1 because we are assuming the stack is empty
    top = -1;

}
  //void push (method) is used to insert elements into the stack
void push(string name){
    // if the stack is full then it will print "Stack Overflow!"
    if(top == MAX - 1)
    {
        cout << "Stack Overflow!" << endl;
    }
    //else simply allows us to insert an element into the stack assuming that the stack is empty
    else{
        //increments the position of top within the array friends and keeps on adding a new name
        top += 1;
        friends[top] = name;
    }
}
    //allows us to print the elements within the stack
void printStack(){

    if(top == -1){
        cout << "Stack is empty!" << endl;
    }
    for(int i = 0; i < MAX; i++)
    {
        cout << friends[i] << endl;
    }

}
    // the pop method works on deleting the top most element within the stack
void pop(){

    if(top == -1)
    {
        cout << "Stack has no elements!" << endl;
    }
    //it removes the top most element and then proceeds to print out the elements that remain in the stack
    else
    {
        cout << "Removed last friend: " << friends[top] << endl;
        top--;

        cout << "New friends are: " << endl;
        for(int i = 0; i <= top; i++)
        {
            cout << friends[i] <<endl;
        }
    }

}

};

int main()
{
    //we use objects to call the Stacks hence f
    //we use names (string) to work on inputting the names that will be pushed into the stack
    Stack f;
    string names;

    cout << "Please enter " << MAX << " friends of your choice to push into the stack: " <<endl;
    for(int i = 0; i < MAX; i++)
    {
        cout << "Enter name " << (i+1) << ":";
        getline(cin, names);
        f.push(names);
    }

    cout << endl;
    f.printStack();

    cout << endl;

    f.pop();

    return 0;
}
