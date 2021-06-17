#include<iostream>
using namespace std;
class qu
{
    public:
    int data;
    qu *next;
};
int count=1;
qu *front=0;
qu *rear=0;
void enqueue(int x)
{
qu *temp;
temp=new qu();
temp->data=x;
temp->next=0;
if(front==0 && rear==00)
{
    front=temp;
    rear=temp;
}
    rear->next=temp;
    rear=temp;
}
void dequeue()
{
    qu *temp=front;
    if(front==0 && rear==0)
    {
        cout<<"\nNo element to delete";
        return ;
    }
    else if(front==rear)
    {

        cout<<"\nElement deleted: "<<front->data;
        front=0;
        rear=0;
        delete temp;
        count--;
    }
    else
    {
        cout<<"\nElement deleted: "<<front->data;
        front=front->next;
        delete temp;
        count--;
    }
}
void display()
{
    
    qu *temp=front;
    while(temp!=0)
    {
        cout<<"\nElement "<<count<<"is: "<<temp->data;
        temp=temp->next;
        count++;
    }
}
void isempty()
{
    if(front==0 && rear==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
int main()
{
    //qu obj;
    int ch,x;
    cout<<"\nEnter 1 to check if queue is empty or not: ";
        cout<<"\nEnter 2 to enter the element: ";
        cout<<"\nEnter 3 to delete the element: ";
        cout<<"\nEnter 4 to display the elements: ";
        cout<<"\nEnter 0 to exit: ";
        //cout<<"\nEnter ur choice: ";
        
    do{
        cout<<"\nEnter ur choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                isempty();
                break;
            }
            case 2:
            {
                cout<<"\nEnter the data: ";
                cin>>x;
                enqueue(x);
                break;
            }
            case 3:
            {
                dequeue();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            default:
            cout<<"\nEnter valid option";

        }

    }
    while(ch!=0);
    cout<<"\nNice meeting u BYE!!";
    return 0;
}