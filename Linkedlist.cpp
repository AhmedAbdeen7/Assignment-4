/*
Name: Ahmed Abdeen
ID: 900225815
*/
#include <iostream>
#include <vector>
#include "Linkedlist.h"
using namespace std;

Linkedlist :: Linkedlist()
{
 head = NULL;
 curr = head;
}

Linkedlist::~Linkedlist()
{
    while (head != NULL) {
        node* temp = head;
        head = head->next;
        delete temp;
    }
    curr = NULL;
}

node* Linkedlist :: get_head()
{
    return head;
}

node*& Linkedlist :: get_curr()
{
    return curr;
}

void Linkedlist :: remove_node(int num)
{
    node* p = head;
    if(head == NULL)
      {
        return;
      }

    if(head->value == num)
    {
      node* temp = head;
      head = head->next;
      delete temp;
      return;
    }
    while(p->next != NULL)
    {
      if (p->next->value == num)
      {
        node* temp = p->next;
        p->next = temp->next;
        delete temp;
        return;
      }
}
    }

void Linkedlist :: add_node(int num1)
{
  node* temp = new node;
  temp ->value = num1;
  temp->next = NULL;
if (head == NULL) 
{
 head = temp;
 curr = temp;
 }
else{
  curr ->next = temp;
  curr = curr->next;
}
}


node* Linkedlist :: search_list(int NUM)
{
    node *p = head;
    while (p != NULL)
    {
        if (p ->value == NUM)
        return p;
        p= p->next;

    }
    return nullptr;
}

int Linkedlist :: sum_of_nodes()
{
   int sum = 0;
    node* p = head;
    while(p != NULL)
    {
      sum += p->value;  
      p = p -> next;

    }
   return sum;
}
void Linkedlist :: print_list()
{
  node*p = head;
  while(p != NULL)
  {
    if (p-> count == 1)
    cout << p->value << " (" << p->count << " time)" << endl;
    else 
    cout << p->value << " (" << p->count << " times)" << endl;
    p = p->next;
  }

}
void Linkedlist :: set_head(node* H)
{
  head = H;
}
void Linkedlist :: set_curr(node* C)
{
  curr = C;
}

Linkedlist Linkedlist :: vect(const vector <int> &vect)
{
Linkedlist mylist;
for (size_t i = 0; i < vect.size();i++)
{
node* temp = mylist.search_list(vect[i]);
if (temp != nullptr)
{ 
    temp->count = (temp->count) +1;
} 
else{ 
mylist.add_node(vect[i]);
}
}
return mylist;

}