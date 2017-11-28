/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class LinkedList
{
    private:
        struct frame   //each node/struct is a frame
        {
            int *v;  //persons array, each element is a persons class
            frame* next;
        }
        int n; //number of people detected 
        frame* head;
    public: 
        //constructor 
        LinkedList() { head = nullptr;}
        
        //deconstructor 
        ~LinkedList();
        
        //get number of people 
        void getppl(int);
        //initilize array with its size being the number of people (n)
        void setUpArray(); //see if u can do this in the following function *******
        void append(); //have arguments be the data that is being read 
        void delete(); //delete the first node 
        
}

void LinkedList::getppl(int ppl)
{
    n=ppl;  //n is the number of people in the frame 
}

void LinkedList::append() //arguments is data that is read 
{
    frame *first; //to point to a new node 
    frame *nodePtr; //to traverse
    
    //allocate a new node and store the data there 
    first = new frame; 
                            //initilize array and set up the size ************
    first->next=nullptr;
    
    //if there are no nodes in the list, make the "first" node be the 1st one 
    if(!head)
        head = first; //head is the first node 
    else 
    {
        //initilize node nodePtr to the head of the list 
        nodePtr = head;
        
        //find the last node in the list 
        while(nodePtr->next)
            nodePtr = nodePtr->next;
        //insert new frame node as the last node 
        nodePtr->next=first;
    }
}

void LinkedList::delete()
{
    frame *walker;   //to traverse the list 
    
    if(!head)
        return;
    
    //make walker the head 
    walker  = head; 
    
    //count is the number of frame nodes 
    int count =0;
    
    while(walker->next)
    {
        walker = walker->next;
        count++;
    }
        
    
    if(count>2)   //if there are more than 2 frames 
    {
        frame *nextframe;  //to point to the next frame 
        
        nextframe = head->next;
        delete head;
        head = nextframe;
        nextframe=nextframe->next;
    }
    else 
        return;
}

LinkedList::~LinkedList()
{
    frame *nodePtr; //to traverse the list 
    frame *nextnode;  //to point to the next node 
    
    //position nodePtr at the head of the list 
    nodePtr=head;
    
    //while nodePtr is not at the end of the list ...
    while(nodePtr!=nullptr)
    {
        //save a pointer to the next node 
        nextnode=nodePtr->next;
        
        //delete the current node
        delete nodePtr;
        
        //positon nodePtr at the next node 
        nodePtr = nextnode;
    }
}

int main()
{
    cout<<"Hello World";

    return 0;
}



