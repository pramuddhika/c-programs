/*
A seats allocation simple-algorithm for a 10-seats airplane
*/
#include <iostream>

using namespace std;

int choice,i,Total,n,seat,seats;

int firstclass(){
	cout << endl;
	cout << endl;
	cout << " Do you accept to be placed in the frist class"<<endl;
	cout << endl;
	cout << " 1.Yes            2.No"<<endl;
	cout << endl;
	cout << "Eenter your choice: ";
	cin  >> choice;
	cout << endl;
	cout << endl;
	
	switch (choice) {
		case 1:
			if ( seat < 5) {
				cout << "Your seat is frist class " << seat+1 <<endl;	
			    Total = Total +1;
			    seat = seat +1;
			} 
			else if (Total < 10){
				cout << "Try in economy class, first class is full";
			}
			else {
				cout << "All were booked";
			}
		break;
		case 2:
		   	cout <<"Next flight leaves in 3 hours.";
		   	cout << endl;
	    break;		
	}
	return Total;
}

int economyclass(){
	cout << endl;
	cout << endl;
	cout << " Do you accept to be placed in the economy class"<<endl;
	cout << endl;
	cout << " 1.Yes            2.No"<<endl;
	cout << endl;
	cout << "Eenter your choice: ";
	cin  >> choice;
	cout << endl;
	cout << endl;
	
		switch (choice) {
		case 1:
			if ( seats < 5) {
				cout << "Your seat is economy class " << seats + 6<<endl;	
			    Total = Total +1;
			    seats = seats +1;
			} 
			else if (Total < 10){
				cout << "Try in frist class, economy class is full";
			}
			else {
				cout << "All were booked";
			}
		break;
		case 2:
		   	cout <<"Next flight leaves in 3 hours.";
			cout << endl;
		break;			
	}
	
	return Total;
}

int main () {
	
	while ( Total  < 11 ) {
		
		    cout << endl;
			cout << "\t~~~~~~~~Menu~~~~~~~";
        	cout <<endl;
	        cout <<endl;
	        cout << "  Number of seats available : " << 10 - Total<<endl;
	        cout <<"  Please type 1 for 'first class' "<<endl; 
            cout << "  Please type 2 for 'economy class' " <<endl;
            cout <<endl;
            cout <<endl;
            cout << "Enter your choice : ";
            cin  >> n;
    
            switch(n){
    	    case 1:
    		   firstclass();
    	    break;
    	    case 2:
    		   economyclass();
    	    break;
    	    default:
    		   cout<<"Enter correct number";
    		   cout<<endl;
       	}
       	
	}
	

	return 0;
}
