// Program is not completed yet.
#include<iostream>
using namespace std;

class ArrayList
{
    private:
        struct ControlBlock
        {
            int capacity;
            int *arr_ptr;
        };
        ControlBlock *s;
    public:
        ArrayList(int capacity)
        {
            s = new ControlBlock;
            s->capacity = capacity;
        }
        void addElement(int index, int data)
        {
            if (index >= 0 && index < s->capacity)
            {
                s->arr_ptr[index] = data;
            }
            else
            {
                cout << index << " is not a valid index." << endl;
            }
            
        }
        void viewElement(int index, int &data)
        {
            if(index>=0 && index < s->capacity){
                data = s->arr_ptr[index];
            }
            else
            {
                cout << index << " is not a valid index." << endl;
            }
        }
        void viewAllElement()
        {
            for(int i=0; i< s->capacity; i++)
            {
                cout << s->arr_ptr[i] << " ";
            }
        }
};
int main()
{
    int data;
    ArrayList list1(5);
    list1.addElement(0,12);
    // list1.addElement(1,142);
    // list1.addElement(2,1542);
    // list1.addElement(3,1223);
    // list1.addElement(4,1212);

    list1.viewElement(0,data);
    cout << data;
    return 0;
}