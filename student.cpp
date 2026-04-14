#include <iostream>
using namespace std;

class Student 
{ 
private: 
    int rollNo;             
    string name;          
    string div;             
    float marks[10];        
    float total;            
    float percentage;       
    int n;                  
 
public: 

    void getData(){ 
        cout << "\nEnter Roll Number: "; 
        cin >> rollNo; 
        cin.ignore(); 
        cout << "\nEnter name: "; 
        getline(cin, name);         
        cout << "\nEnter Division: "; 
        getline(cin, div); 
        cout << "Enter number of subjects: "; 
        cin >> n; 
        total = 0;          
  
        for (int i = 0; i < n; i++) 
        { 
            cout << "Enter marks of subject " << i + 1 << ": "; 
            cin >> marks[i]; 
            total = total + marks[i];  
        } 
    } 
    void calculate() 
    { 
        percentage = total / n;  
    } 
 
    void display() 
    { 
        cout << "\nRoll Number   : " << rollNo; 
        cout << "\nName: " << name; 
        cout << "\nDivision: " << div; 
        cout << "\nTotal Marks  : " << total; 
        cout << "\nPercentage   : " << percentage << "%\n"; 
    } 
}; 
 
int main(){ 
    int ns;    
    cout << "Enter number of students: "; 
    cin >> ns; 
    Student s1[10];  
    for (int i = 0; i < ns; i++) 
    { 
        cout << "\n--- Student " << i + 1 << " ---"; 
        s1[i].getData();     
        s1[i].calculate();    
        s1[i].display();    
    } 
    return 0;
} 
  