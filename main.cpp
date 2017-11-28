/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


//NEW REVISION 

class node 
{
    private:        
        int *v;  //persons array, each element is a persons class
        int n; //number of people detected 
        node* next;
    public: 
        node();
        node(int); //makes dynamic array of ppl 
        node* getnext();
        void setNext(node* newNext);
}
node::node()
{
    //work on function to set up info in this node 
}

node::node(int ppl)
{
    n = ppl; //number of people detected is n, set it as ppl 
    v=new int[n]; //dynamic array of people ******** HOW DO I MAKE EACH ELEMENT A CLASS 
}

node* node::getNext(){
    return next;
}

void node::setNext(node* newNext)
{
    next=newNext->next;  //next is now the next of new next 
}


template <class F>      //frame class that holds each frame node 
class Frame 
{
    private:
        node *start;
        
    public: 
        frame(){
            start = new node(&v); //make a new node and set up data in it (array?)
        }
        
        //work on deletion, inserting new node (which makes top node not as necesary?)
    
}



