//Stack using array
#include <iostream>
using namespace std;
int stack[100],n=100,top=-1;
void push(int n)
{
    if(top>=n-1)
        cout<<"Stack Overflow!.."<<endl;
    else
    {
        top++;
        stack[top]=n;
    }
}
void pop()
{
    if(top<=-1)
        cout<<"Stack Undeflow!.."<<endl;
    else
    {
        cout<<"Popped element:"<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        cout<<"Stack Elements:"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;   
        }
    }
    else
    {
        cout<<"Empty Stack!.."<<endl;
    }
}
int main()
{
    int ch,v;
    cout<<"1:Push Stack"<<endl<<"2:Pop Stack"<<endl<<"3:Display Stack"<<endl<<"4:Exit"<<endl;
    do
    {
        cout<<"Enter choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Input to push:"<<endl;
            cin>>v;
            push(v);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            cout<<"Termination........"<<endl;
            break;

            default:
            cout<<"Invalid Choice!..."<<endl;
            break;
        }
    } while (ch!=4);
    return 0;
}