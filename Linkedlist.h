/*
Name: Ahmed Abdeen
ID: 900225815
*/
#include <iostream>
#include <vector>

using namespace std;
struct node
{
    int value;
    int count = 1;;
    node* next;;
};

class Linkedlist
{
private:
node* curr; // A pointer that points at the current node
node * head; // A head pointer to point at the first node
public:
void remove_node(int num); // A function that deletes a node based on the data the user inputs, making the user choose which node to delete
void add_node(int num1); //A function that creates a node based on the data the user inputs, and then adds this node to the linkedlist
int sum_of_nodes(); // A function that returns the sum of all the nodes in the list
node* search_list(int NUM); // A function that traverses the linked list to find a node that contains a certain value
~Linkedlist(); // A destructor
Linkedlist(); // A constructor
void set_head(node* H); // A settor for the head pointer
void set_curr(node* C); //  A settor for the curr pointer
node* get_head(); // A gettor for the head pointer
node*& get_curr(); // A gettor for the curr pointer
void print_list(); // A function that prints the value in each node and displays the number of occurences of this value
Linkedlist vect(const vector <int> &vect); // The function takes a vector, creates a linked list based on this vector and 
//then returns this linked list




};