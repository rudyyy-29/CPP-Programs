#include <iostream>      
using namespace std;   

class Patient{
    private:               
        int patientId;    
        string patientName;
        float billAmt;  
        string appointDate;  
 
    public:             
        // Default Constructor 
        Patient() 
        { 
            patientId = 0;                
            patientName = "Not Assigned";  
            billAmt = 0.0;              
            appointDate = "Not Fixed";
        } 
        // Parameterized Constructor 
        Patient(int id, string name, float bill, string date) 
        { 
            patientId = id;       
            patientName = name;    
            billAmt = bill;    
            appointDate = date;
        } 
        // Copy Constructor 
        Patient(Patient &p) 
        { 
            patientId = p.patientId;           
            patientName = p.patientName;     
            billAmt = p.billAmt;       
            appointDate = p.appointDate;
        } 
        // Member functions
        void display() 
        { 
            cout << "\nPatient ID        : " << patientId;       
            cout << "\nPatient Name      : " << patientName;
            cout << "\nBilling Amount    : Rs. " << billAmt; 
            cout << "\nAppointment Date  : " << appointDate;
            cout << endl;
        } 
 }; 
int main(){ 
    Patient p1; 
    cout << "\n--- Default Constructor ---"; 
    p1.display();
    //Create object for parameterized constructor 
    Patient p2(101, "Rahul Patil", 3500.50, "15-02-2026"); 
    cout << "\n--- Parameterized Constructor ---"; 
    p2.display();   
    //Create object for copy constructor 
    Patient p3 = p2;   
    cout << "\n--- Copy Constructor ---"; 
    p3.display();  
    return 0;
}