#include<iostream>
using namespace std;

int main()
{
	// All Employees in the Company Payment Information
	int paycode;
	int manager_salary=170000;
	int hours = 40;
	int hourlywage=27;
	int overtimewage;
	int hworkers_salary;
	int gross_salary=40000;
	double commission;
	int cworkers_salary;
	int Noitem;
	int item_amount=70;
	int pworkers_salary;
	
	do
	{
		
	cout<<"Enter your paycode number : "<<endl;     // Employees' Category or their paycode
	cin>>paycode;
	
    
	
	
	switch(paycode)
	{
		case 1:                                                         // managers' weekly payment
			cout<<"\tYour salary is : "<<"$"<<manager_salary<<endl;
			cout<<endl;
			break;
			
		    case 2:                                                      // hourly workers weekly payment 
		    	
				cout<<"\t\tEnter the number of hours you have worked : "<<endl;
				cin>>hours;
				
				
				
				if(hours<=40)
				{	
				cout<<"\t\tThe hourly wage is : "<<"$"<<hourlywage<<endl;
				hworkers_salary=hourlywage*hours;
				cout<<"\t\tYour salary is :"<<"$"<<hworkers_salary<<endl;
		       	}
		       	
				else
				{
				overtimewage=(1.5*hourlywage)+hourlywage;
				cout<<"\t\tThe overtime wage is : "<<"$"<<overtimewage<<endl;
				hworkers_salary=hourlywage+overtimewage;
				cout<<"\t\tYour salary is :"<<"$"<<hworkers_salary<<endl;
		        }
		        cout<<endl;
		    	break;
		    	
		    	        case 3:                                           // Commission workers weekly Payment
		    	      	  
		    	         	cout<<"\t\t\tYour salary for the weekly sales is : "<<"$"<<gross_salary<<endl;
		    	         	
		    	         	commission=(0.057*gross_salary)+250;
		    	            cout<<"\t\t\tThe commission is : "<<"$"<<commission<<endl;
		    	            
		    	         	cworkers_salary=gross_salary+commission;
		    	         	
		    	         	cout<<"\t\t\tYour Total salary is : "<<"$"<<cworkers_salary<<endl;
		    	         	cout<<endl;
		    	         	break;
		    	         	
		    	         	                case 4:                               // Pieceworkers weekly Payment
		    	         	                	cout<<"\t\t\t\thow many particular items have you produced : "<<endl;
		    	         	                	cin>>Noitem;
		    	         	                	
		    	         	                	
		    	         	                	pworkers_salary=Noitem*item_amount;
	                                     
	                                            cout<<"\t\t\t\tYour Total salary for the produce : "<<"$"<<pworkers_salary<<endl;
	                                            cout<<endl;
		    	                                break;
		    	                                
		                                                default:
		                                            	cout<<"ERROR";
		                                            	break;
		
	}
    	}while(paycode<=4);             // loop till the condition is met
	
	
	
	
	return 0;
}

