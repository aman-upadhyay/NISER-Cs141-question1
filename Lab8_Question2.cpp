#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

};
 class stack
{
node *top;
public:
 stack()
 {
     top=NULL;
 }
 
void push(int data)
{   node *temp= new node();
    temp->data=data;
    if(top==NULL)
    {
        top=temp;
        temp->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}
 
void pop()
{   node *temp=new node();
    if(top==NULL){
        cout<<"Stack is empty!!";
    }
    else{
        cout<<"Deleted element is "<<top->data;
        temp=top;
        top=top->next;
        delete(temp);
    }
}
 
void showstack()
{     node *temp=new node();
      temp=top;
    if(top==NULL){
        cout<<"Stack is empty!!";
    }
    else{
        while(temp!=NULL)
        {
            cout<<temp->data<<"\n";
            temp=temp->next;
        }        
    }
}
};
 
int main()
{
    int ch,x,i=0;
    char cha;
    stack s;
    cout<<"\n \nPROGRAM TO USE THE CONCEPT OF STACK";
    do 
    {
        cout<<"\n\n1.Push\n2.Pop\n3.Display";
        cout<<"\nEnter your choice(1-3):";
        cin>>ch;
        
        switch(ch){
            case 1:{
                    cout<<"\nHow many entries you want to make\n";
		    cin>>i;
		    for(int e=1;e<=i;e++)
		{
		    cout<<"\nEnter data to stack on top:";
                    cin>>x;
                    s.push(x);
		}
                    cout<<"\nYour Data structure is\n";
                    s.showstack();
                    break;
            }
            case 2: s.pop();          break;
                    
            case 3: s.showstack();    break;
                    
            
            default: cout<<"\nWrong choice!!";
        }
    cout<<"\n \nDo you want to continue?(y/n)";
    cin>>cha;
    }
    while(cha=='y' || cha=='Y');
}
