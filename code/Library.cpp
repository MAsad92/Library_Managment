#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
void login();
void registeration();

class library
{
	private:
		char title[20];
		char author[20];
		char subject[10];
		int store_books,no_pages,no_edition;
		int books_choice,choice,choice_lib,select;		
		vector<string> book_name;
		vector<string> author_name;
		vector<string> dpt_name;
		vector<string> pages;
		vector<string> edition;
		string f_name;
		
	public:
		void display()
		{
			cout<<"\t\t-------------------------------     Welcome to Library     -------------------------------\n\n";
			cout<<"\t\tSelect from below: \n\n";
			cout<<"\t\t1-> Student \n"<<"\t\t2-> Librarian\n"<<"\t\t3-> Exit\n";
			cout<<"\n\t\tSelect who are you: ";
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
					break;	
				default:
					cout<<"\n\t\tInvalid Input!\n";		
			}
		}
		
//-------------------------------------------------------------------------------------------------------------------------------------------
	
		void display1()											   //Student 
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
		
//-------------------------------------------------------------------------------------------------------------------------------------------		
		
		void display2()											  //Librarian 
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
		
//-------------------------------------------------------------------------------------------------------------------------------------------		
		
		void menu_student()								        //menu student
		{
			cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
			cout<<"\t\t1-> Booklist\n"<<"\t\t2-> Search for Book\n"<<"\t\t3-> Main Menu\n"<<"\t\t4-> Exit\n\n";
			cout<<"\n\t\tSelect form above: ";
			cin>>select;
			system("cls");
			switch (select)
			{
				case 1:
					this->read();
					break;
				case 2:
					this->search_book();
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
		
//-------------------------------------------------------------------------------------------------------------------------------------------		
		
		void menu_librarian()							       //menu librarian
		{
			cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
			cout<<"\t\t1-> Booklist\n"<<"\t\t2-> Search for Book\n"<<"\t\t3-> Modify/Add Books\n"<<"\t\t4-> Main Menu\n"<<"\t\t5-> Exit\n\n";
			cout<<"\n\t\tSelect form above: ";
			cin>>select;
			system("cls");
			switch (select)
			{
				case 1:
					this->read();
					break;
				case 2:
					this->search_book();
					break;
				case 3:
					this->add_books(); 
					break;	
				case 4:
					this->display();
					break;
				case 5:
					system("cls");
					break;
				default:
					cout<<"\n\t\tInvalid Input!!\n";				
					
			}
		}
		
//-------------------------------------------------------------------------------------------------------------------------------------------			
	
		void login()						           	      // Login for student
		{
		    int count;
		    string user,pass,u,p;
		    system("cls");
		    cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
		    cout<<"\t\t--------------------          Login in Student Section         --------------------\n\n";
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
	
//-------------------------------------------------------------------------------------------------------------------------------------------	

		void registeration()				        	     // Signup for student
		{
			int option;
		    string reguser,regpass,ru,rp;
		    system("cls");
		    cout<<"\t\t-------------------------------         Library        -------------------------------\n\n";
		    cout<<"\t\t------------------------       Signup in Student Section      -----------------------\n\n";
			cout<<"\n\t\tEnter your Name or Username :";
		    cin>>reguser;
		    cout<<"\n\t\tEnter the Password :";
		    cin>>regpass;
		    
		    ofstream reg("student.txt",ios::app);
		    reg<<reguser<<' '<<regpass<<endl;
		    system("cls");
		    cout<<"\n\n\t\tRegistration Sucessful\n";
		    cout<<"\n\t\t1-> Menu\n"<<"\t\t2-> Exit\n";
		    cout<<"\t\tChoose an option: ";
		    cin>>option;
		    system("cls");
		    switch(option)
		    {
		    	case 1:
		    		display1();
		    		break;
		    	case 2:
					system("cls");
					break;
				default:
					break;		
			}
		}
	
//-------------------------------------------------------------------------------------------------------------------------------------------	
	
		void login_lib()	                                 //Login for Librarian
		{
		    int count;
		    string lib_user,lib_pass,lib_u,lib_p;
		    system("cls");
		    cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
		    cout<<"\t\t------------------------       Login in Librarian Section      -----------------------\n\n";
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
		        this->menu_librarian();
		    }
		    else
		    {
		        cout<<"\n\t\tWorng Data Entered!, Try Again\n";
		    	system("pause");
		    	system("cls");
		    	this->login_lib();
		    }
		}
	
//-------------------------------------------------------------------------------------------------------------------------------------------	
	
		void registeration_lib()	                        // Signup for Librarian
		{
			int option_1;
		    string reg_user,reg_pass,r_u,r_p;
		    system("cls");
		    cout<<"\t\t-------------------------------         Library        -------------------------------\n\n";
		    cout<<"\t\t------------------------       Signup in Librarian Section      -----------------------\n\n";
			cout<<"\n\t\tEnter your Name or Username :";
		    cin>>reg_user;
		    cout<<"\n\t\tEnter the Password :";
		    cin>>reg_pass;
		    ofstream add("librarian.txt",ios::app);
		    add<<reg_user<<' '<<reg_pass<<endl;
		    system("cls");
		    cout<<"\n\n\t\tRegistration Sucessful\n";
		    system("cls");
		    cout<<"\n\n\t\tRegistration Sucessful\n";
		    cout<<"\n\t\t1-> Menu0\n"<<"\t\t2-> Exit\n";
		    cout<<"\t\tChoose an option: ";
		    cin>>option_1;
		    system("cls");
		    switch(option_1)
		    {
		    	case 1:
		    		display1();
		    		break;
		    	case 2:
					system("cls");
					break;
				default:
					break;		
			}
		}
		
//-------------------------------------------------------------------------------------------------------------------------------------------
                                                      
		void add_books()                              //  To enter new books in files
		{
			cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
			cout<<"\n\t\tEnter detail's of Book you want to add: ";
			cout<<"\n\n\t\tEnter Book name: ";
			cin.getline(title,10);
			cout<<"\n\t\tEnter Author name: ";
			cin.getline(author,20);
			cout<<"\n\t\tDepartment name: ";
			cin.getline(subject,20);		
			cout<<"\n\t\tEnter Book Pages: ";
			cin>>no_pages;
			cout<<"\n\t\tEnter Book Edition: ";
			cin>>no_edition;			
			cout<<"\n\t\t1-> Store Book in Language Section: "<<"\n\t\t2-> Store Book in Computer Section"
			<<"\n\t\t3-> Store Book in Law Section"<<"\n\t\t4-> Store Book in Mathamethics Section"<<"\n\t\t5-> Store Book in Biology Department:\n";
			cout<<"\n\t\tSelect in which department you want to store: ";
			cin>>store_books;
			system("cls");
			switch(store_books)
			{
				case 1:
					this->file_language();
					break;
				case 2:
					this->file_cs();
					break;	
				case 3:
					this->file_law();
				case 4:
					this->file_math();
				case 5:
					this->file_bio();		
			}
		}
		void file_language()
		{
			ofstream storage("language.txt",ios::app);
			storage<<endl<<title<<","<<author<<","<<subject<<","<<no_pages<<","<<no_edition<<",";
			system("cls");
		}
		void file_cs()
		{
			ofstream storage("Cs.txt",ios::app);
			storage<<endl<<title<<","<<author<<","<<subject<<","<<no_pages<<","<<no_edition<<",";
			system("cls");
		}
		void file_law()
		{
			ofstream storage("law.txt",ios::app);
			storage<<endl<<title<<","<<author<<","<<subject<<","<<no_pages<<","<<no_edition<<",";
			system("cls");
		}
		void file_math()
		{
			ofstream storage("Math.txt",ios::app);
			storage<<endl<<title<<","<<author<<","<<subject<<","<<no_pages<<","<<no_edition<<",";
			system("cls");
		}
		void file_bio()
		{	
			ofstream storage("Bio.txt",ios::app);
			storage<<endl<<title<<","<<author<<","<<subject<<","<<no_pages<<","<<no_edition<<",";
			system("cls");
		}
				
//-------------------------------------------------------------------------------------------------------------------------------------------		
 
		library(string a)                               // To Read and Search books from file
		{
			f_name=a;
		}	
		void dis_books()
		{
			string myText,search,name;
			ifstream read(f_name.c_str());
			string del=",";
			while (getline (read, myText)) 
			{
				int zero=0;
				int start=0;
				int end=myText.find(del);
				while(end!=-1)
				{
					switch(zero)
					{
						case 0:
							book_name.push_back(myText.substr(start,end-start));
							break;
						case 1:
							author_name.push_back(myText.substr(start,end-start));
							break;
						case 2:
							dpt_name.push_back(myText.substr(start,end-start));
							break;
						case 3:
							pages.push_back(myText.substr(start,end-start));
							break;
						case 4:
							edition.push_back(myText.substr(start,end-start));
							break;
						default:
							break;	
					}
					
					start=end+del.size();
					end=myText.find(del,start);
					zero++;
				}	
			}
			

		}
		void print()
		{
			for(int i = 0; i <= book_name.size()-1; i++)
			{
				cout<<"Book "<<i+1<<endl;
				cout<<"Book name: "<<book_name[i]<<endl;
				cout<<"Author name: "<<author_name[i]<<endl;
				cout<<"Department name: "<<dpt_name[i]<<endl;
				cout<<"Pages : "<<pages[i]<<endl;
				cout<<"Edition: "<<edition[i]<<"\n\n\n";
			}
		}
		
		void find_book(string b_name)
		{
			bool check = false;
			for(int i = 0; i <= book_name.size()-1; i++)
			{
				if(b_name == book_name[i])
				{
					cout<<"Book name: "<<book_name[i]<<endl;
					cout<<"Author name: "<<author_name[i]<<endl;
					cout<<"Department name: "<<dpt_name[i]<<endl;
					cout<<"Pages : "<<pages[i]<<endl;
					cout<<"Edition: "<<edition[i]<<"\n\n\n";
					check = true;
					break;
				}
			}
			if (!check)
				cout<<"\n\n\t\tBook not Avalible in Library!"<<endl;
		}
		
//-----------------------------------------------------------------------------------------------------------------------------------------------

	void read()                                      // To Read books from file
	{
		library bio("Bio.txt");
		library language("language.txt");
		library cs("Cs.txt");
		library law("Law.txt");
		library math("Math.txt");
		cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
		cout<<"\t\tBooks are categorized in following subjects: \n\n";
		cout<<"\t\t1-> Language\n"<<"\t\t2-> Computer Science\n"<<"\t\t3-> Law\n"<<"\t\t4-> Mathamethics\n"<<"\t\t5-> Biological\n";
		cout<<"\n\t\tSelect from above: ";
		int choose;
		cin>>choose;
		system("cls");
		switch(choose)
		{
			case 1:
				language.dis_books();
				language.print();
				break;
			case 2:
				cs.dis_books();
				cs.print();
				break;
			case 3:
				law.dis_books();
				law.print();
				break;
			case 4:
				math.dis_books();
				math.print();
				break;
			case 5:
				bio.dis_books();
				bio.print();
				break;
			default:
				cout<<"\n\t\tInvalid!\n";
				system("pause");
				system("cls");
				read();
				break;				
		}
	}
	
//-----------------------------------------------------------------------------------------------------------------------------------------------
	void search_book()                                  // To Search books from file
	{
		int search;
		library bio("Bio.txt");
		library language("language.txt");
		library cs("Cs.txt");
		library law("Law.txt");
		library math("Math.txt");
		cout<<"\t\t-------------------------------        Library        -------------------------------\n\n";
		cout<<"\n\t\t1-> Language\n"<<"\t\t2-> Computer Science\n"<<"\t\t3-> Law\n"<<"\t\t4-> Mathamethics\n"<<"\t\t5-> Biological\n";
		cout<<"\n\t\tSelect a Subject to search book: \n\n";
		cin>>search;
		switch(search)
		{
			case 1:
				language.dis_books();
				language.find_book("Language Instinct");
				break;
			case 2:
				cs.dis_books();
				cs.find_book("Language Instinct");
				break;
			case 3:
				law.dis_books();
				law.find_book("Language Instinct");
				break;
			case 4:
				math.dis_books();
				math.find_book("Language Instinct");
				break;
			case 5:
				bio.dis_books();
				bio.find_book("Language Instinct");
				break;												
		}
	}
};

//-----------------------------------------------------------------------------------------------------------------------------------------------

int main()                                                // Main Function
{
	library m1("Open");
	m1.display();
}
