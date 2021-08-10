#include <iostream>
#include <windows.h>
using namespace std;
string arr1[10],arr2[10],arr3[10];
int arr6[10],arr4[10];
	int total=0;
	
void enterData()
{   int students;
	cout<<"Enter the number of students: ";
	cin>>students;
	if(total==0)
	{
	total=total+students;
	for(int i=0;i<students;i++)
	
	{  cout<<"Enter data for student: "<<i+1<<endl;
		cout<<"Enter name of student: ";
		cin>>arr1[i];
		cout<<"Enter roll number: ";
		cin>>arr6[i];
		cout<<"Enter class: ";
		cin>>arr2[i];
			cout<<"Enter DOB: ";
		cin>>arr3[i];
			cout<<"Enter the no of vaccinations: ";
		cin>>arr4[i];
	}
}
else
{
	for(int i=total;i<students+total;i++)
	
	{  cout<<"Enter data for student: "<<i+1<<endl;
		cout<<"Enter name of student: ";
		cin>>arr1[i];
		cout<<"Enter roll number: ";
		cin>>arr6[i];
		cout<<"Enter class: ";
		cin>>arr2[i];
			cout<<"Enter DOB: ";
		cin>>arr3[i];
			cout<<"Enter the no of vaccinations: ";
		cin>>arr4[i];
	}
		total=total+students;
}

}
void showData()
{
for(int i=0;i<total;i++)
		{
			cout<<"Data of student: "<<i+1<<endl;
			cout<<"Name:"<<arr1[i]<<endl;
			cout<<"Roll no:"<<arr6[i]<<endl;
			cout<<"Class:"<<arr2[i]<<endl;
			cout<<"DOB: "<<arr3[i]<<endl;
			cout<<"Vaccinations:"<<arr4[i]<<endl;
			}	
}
void searchData()
{
	int rn;
	cout<<"Enter the roll number: ";
	cin>>rn;
	for(int i=0;i<total;i++)
	{
		if(rn==arr6[i])
		{
				cout<<"Data of student: "<<i+1<<endl;
			cout<<"Name:"<<arr1[i]<<endl;
			cout<<"Roll no:"<<arr6[i]<<endl;
			cout<<"Class:"<<arr2[i]<<endl;
			cout<<"DOB: "<<arr3[i]<<endl;
			cout<<"Vaccinations:"<<arr4[i]<<endl;
		}
	}
	
}
void updateData()
{
	int rn;
	cout<<"Enter the roll number: ";
	cin>>rn;
	for(int i=0;i<total;i++)
	{
		if(rn==arr6[i])
		{
			cout<<"PREVIOUS DATA: "<<endl;
				cout<<"Data of student: "<<i+1<<endl;
			cout<<"Name:"<<arr1[i]<<endl;
			cout<<"Roll no:"<<arr6[i]<<endl;
			cout<<"Class:"<<arr2[i]<<endl;
			cout<<"DOB: "<<arr3[i]<<endl;
			cout<<"Vaccinations:"<<arr4[i]<<endl;
			cout<<"ENTER NEW DATA: "<<endl;
			cout<<"Enter name of student: ";
		cin>>arr1[i];
		cout<<"Enter roll number: ";
		cin>>arr6[i];
		cout<<"Enter class: ";
		cin>>arr2[i];
			cout<<"Enter DOB: ";
		cin>>arr3[i];
			cout<<"Enter the no of vaccinations: ";
		cin>>arr4[i];
		}
	}
}
void deleteData()
{
	int a;
	cout<<"Press 1 to delete the full record"<<endl;
	cout<<"Press 2 to delete specific record"<<endl;
	cin>>a;
	if(a==1)
	{
		total=0;
		cout<<"ALL RECORDS DELETED"<<endl;
	}
   else
   {
   	int r;
   	cout<<"ENTER ROLL NO."<<endl;
   	cin>>r;
   	for(int i=0;i<total;i++)
   	{
   		if(r==arr6[i])
   		{
   			for(int j=i;j<total;j++)
   			{
   				arr1[j]=arr1[j+1];
   					arr2[j]=arr2[j+1];
   						arr3[j]=arr3[j+1];
   							arr4[j]=arr4[j+1];
   								arr6[j]=arr6[j+1];
			   }
			   total--;
			   cout<<"CHOSEN RECORD IS DELETED" <<endl;
		   }
	   }
   	
   }
}
int main()
{
	cout<<"STUDENT MANAGEMENT SYSTEM-STAFF LOGIN"<<endl;
	cout<<"SIGN UP"<<endl;
	string username,password;
	cout<<"ENTER USERNAME: ";
	cin>>username;
	cout<<"ENTER PASSWORD: ";
	cin>>password;
	cout<<"YOU ARE GETTING LOGGED IN PLEASE WAIT";
	for(int i=0;i<5;i++)
	{
		cout<<".";
		Sleep(1000);
	}
	cout<<"\nYOUR ACCOUNT IS SUCCESSFULLY CREATED"<<endl;
	system("CLS");
  int value;
  while(true)
  {
  	cout<<"Press 1 to enter data"<<endl;
  	cout<<"Press 2 to show data"<<endl;
  	cout<<"Press 3 to search data"<<endl;
  	cout<<"Press 4 to update data"<<endl;
  	cout<<"Press 5 to delete data"<<endl;
  	cout<<"Press 6 to exit"<<endl;
    cin>>value;
    switch(value)
    {
   	    case 1:
    		enterData();
    		break;	
	    case 2:
    		showData();
    		break;
    	case 3:
    		searchData();
    		break;
		case 4:
			updateData();
			break;
		case 5:
    		deleteData();
    		break;	
    /*	case 6:
    		exit(0);
    		break;*/
    	default:
		cout<<"Invalid input"<<endl;
		break;	
	}
    
  }
	 return 0;
}
