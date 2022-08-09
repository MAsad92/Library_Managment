#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void login();
void registeration();

class menu
{
	private:
		int books_choice,choice,choice_lib,select;
	public:
		void display()
		{
			cout<<"\t\t-------------------------------     Welcome to Library     -------------------------------\n\n";
			cout<<"\tSelect from below: \n\n";
			cout<<"\t 1-> Student \n"<<"\t 2-> Librarian\n"<<"\t 3-> Exit\n";
			cout<<"\n\tSelect who are you: ";
			system("Color 0A");//Color
			cin>>choice;
			system("cls");
			switch(choice)
			{
				case 1:
					this->display1();
					break;
				case 2:
					this->display2();
					break;
				case 3:
					system("cls");
					break;	
				default:
					cout<<"\n\t\tInvalid Input!\n";		
			}
		}
//---------------------------------------------------------------------------------------------------------------
		void display1()										//Student 
		{
			cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
			cout<<"\t\t------------------          You Entered in Student Section         -------------------\n\n";
    		cout<<"\t\t1-> Log In\n"<<"\t\t2-> Sign Up\n"<<"\t\t3-> Menu\n"<<"\t\t4-> Exit"<<endl;
    		cout<<"\n\n\t\tEnter your choice : ";
    		cin>>choice;
    		cout<<endl;
    		switch(choice)
   			 {
       			case 1:
            		login();
            		break;
        		case 2:
            		registeration();
            		break;
            	case 3:
            		system("cls");
					display();
					break;	
        		case 4:
            		system("cls");
            		cout<<"\n\t\tInvalid Input!\n"<<endl;
    		}
		}
//---------------------------------------------------------------------------------------------------------------		
		void display2()										//Librarian 
		{
			cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
			cout<<"\t\t------------------          You Entered in Librarian Section         -------------------\n\n";
    		cout<<"\t\t1-> Log In\n"<<"\t\t2-> Sign Up\n"<<"\t\t3-> Menu\n"<<"\t\t3-> Exit"<<endl;
    		cout<<"\n\n\t\tEnter your choice : ";
    		cin>>choice_lib;
    		cout<<endl;
    		switch(choice_lib)
   			 {
       			case 1:
            		login_lib();
            		break;
        		case 2:
            		registeration_lib();
            		break;
            	case 3:
            		system("cls");
            		break;
					display();	
        		case 4:
            		system("cls");
            		cout<<"\n\t\tInvalid Input!\n"<<endl;
    		}
		}
		
//---------------------------------------------------------------------------------------------------------------		
		
		void menu_student()								//menu student
		{
			cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
			cout<<"\t\t1-> Booklist\n"<<"\t\t2-> Search for Book\n"<<"\t\t3-> Main Menu\n"<<"\t\t4-> Exit\n\n";
			cout<<"\n\t\tSelect form above: ";
			cin>>select;
			system("cls");
			switch (select)
			{
				case 1:
					this->books();
					break;
				case 2:
					this->books();
					break;
				case 3:
					this->display();
					break;
				case 4:
					system("cls");
					break;
				default:
					cout<<"\n\t\tInvalid Input!!\n";				
					
			}
		}

//---------------------------------------------------------------------------------------------------------------		
	
	void login()							// Login and Signup for student
	{
	    int count;
	    string user,pass,u,p;
	    system("cls");
	    cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
	    cout<<"\t\t------------------          Login in Student Section         -------------------\n\n";
	    cout<<"\n\t\tEnter your Username :";
	    cin>>user;
	    cout<<"\n\t\tEnter your Password :";
	    cin>>pass;
	    ifstream input("student.txt");
	    while(input>>u>>p)
	    {
	        if(u==user && p==pass)
	        {
	            count=1;
	            system("cls");
	        }
	    }
	    input.close();
	    if(count==1)
	    {
	        this->menu_student();
	    }
	    else
	    {
	    	cout<<"\n\t\tWorng Data Entered!, Try Again\n";
	    	system("pause");
	    	system("cls");
	        login();
	    }
	}
	
//---------------------------------------------------------------------------------------------------------------	

	void registeration()					// Login and Signup for student
	{
	
	    string reguser,regpass,ru,rp;
	    system("cls");
	    cout<<"\t\t-------------------------------         Library        -------------------------------\n\n";
	    cout<<"\t\t------------------------        Signup in Student Section      -----------------------\n\n";
		cout<<"\n\t\tEnter your Name or Username :";
	    cin>>reguser;
	    cout<<"\n\t\tEnter the Password :";
	    cin>>regpass;
	    
	    ofstream reg("student.txt",ios::app);
	    reg<<reguser<<' '<<regpass<<endl;
	    system("cls");
	    cout<<"\n\n\t\tRegistration Sucessful\n";
	}
	
//---------------------------------------------------------------------------------------------------------------	
	
	void login_lib()	//Login and Signupn for Librarian
	{
	    int count;
	    string lib_user,lib_pass,lib_u,lib_p;
	    system("cls");
	    cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
	    cout<<"\t\t------------------------        Login in Librarian Section      -----------------------\n\n";
	    cout<<"\n\t\tEnter your Username :";
	    cin>>lib_user;
	    cout<<"\n\t\tEnter your Password :";
	    cin>>lib_pass;
	    ifstream input("librarian.txt");
	    while(input>>lib_u>>lib_p)
	    {
	        if(lib_u==lib_user && lib_p==lib_pass)
	        {
	            count=1;
	            system("cls");
	        }
	    }
	    input.close();
	    if(count==1)
	    {
	        this->menu_student();
	    }
	    else
	    {
	        cout<<"\n\t\tWorng Data Entered!, Try Again\n";
	    	system("pause");
	    	system("cls");
	    	this->login_lib();
	    }
	}
	
//---------------------------------------------------------------------------------------------------------------	
	
	void registeration_lib()	//Login and Signupn for Librarian
	{
	
	    string reg_user,reg_pass,r_u,r_p;
	    system("cls");
	    cout<<"\t\t-------------------------------         Library        -------------------------------\n\n";
	    cout<<"\t\t------------------------        Signup in Librarian Section      -----------------------\n\n";
		cout<<"\n\t\tEnter your Name or Username :";
	    cin>>reg_user;
	    cout<<"\n\t\tEnter the Password :";
	    cin>>reg_pass;
	    
	    ofstream add("librarian.txt",ios::app);
	    add<<reg_user<<' '<<reg_pass<<endl;
	    system("cls");
	    cout<<"\n\n\t\tRegistration Sucessful\n";
	}
	
	//---------------------------------------------------------------------------------------------------------------		
		
	void books()
	{
		cout<<"\t\tBooks are categorized in following ways: \n\n";
		cout<<"\t\t1-> Language\n"<<"\t\t2-> Computer Science\n"<<"\t\t3-> Law\n"<<"\t\t4-> Mathamethics\n"<<"\t\t5-> Biological\n";
		cout<<"\n\t\tSelect from above: ";
		cin>>books_choice;
	}
};
int main()
{
	menu m1;
	m1.display();
}

