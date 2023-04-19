/*
Name: Ahmed Abdeen
ID: 900225815
*/
#include <iostream>
#include <vector>
#include "Linkedlist.cpp"
using namespace std;
void insertAfter(int firstValue, int secondValue, vector<int> &vec); // The function searches for every instance of the firstValue entered 
// and inserts the second value after it

int main() 
{
 int n, num1,num2, num3;
 cout << "Enter the number of elements you want to enter "; // prompting the user to enter the size of the vector
 cin >> n; // storing the size entered
 vector <int> vec(n); // declaring a vector of type int and size n
 cout << "Enter the integers "; // prompting the user to enter elements of the vector 
for (size_t i = 0; i < vec.size();i++) //using a for loop to read the input from the user
 {
    cin >> vec[i];
 }
 cout << "Enter the number after which you will insert your next number "; // testing the insert function
 cin >> num1;
 cout << "Enter the number you want to insert ";
 cin >> num2;
 insertAfter(num1, num2, vec);
 for (size_t i = 0; i < vec.size();i++) // displaying the elements of the vector
 {
    cout << vec[i] << " ";
 }
 cout << endl;
 Linkedlist list = list.vect(vec);// creating a linked list based on the vector above
 list.print_list();
 cout << "Enter a number to be removed ";
 cin >> num3;
 list.remove_node(num3);
 list.print_list();

cout << "The sum of all the nodes is " << list.sum_of_nodes(); // displaying the sum of the nodes in the linked list
    return 0;
}

/* void insertAfter(int firstValue, int secondValue, vector<int> &vec)
{
vector<int>::iterator iter;
for(iter = vec.begin();iter < vec.end();iter++)
{
    if (*iter == firstValue)
    {
        iter = vec.insert((iter+1), secondValue);
        iter++;
    }
}
} */
void insertAfter(int firstValue, int secondValue, vector<int>& vec)
{
vector<int>::iterator iter;
for (iter = vec.begin(); iter != vec.end(); iter++) 
{
    if (*iter == firstValue) 
    {
        iter = vec.insert(iter + 1, secondValue); 
    }
}
}

 
