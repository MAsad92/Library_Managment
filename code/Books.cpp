#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class book
{
	private:
		char book_name[20];
		char author[20];
		char subject[10];
		int select,pages,edition;
		string myText;
		
	public:
		void books()
		{
			cout<<"\n\n\t\tEnter Book name: ";
			cin.getline(book_name,20);
			cout<<"\n\t\tEnter Author name: ";
			cin.getline(author,20);
			cout<<"\n\t\tDepartment name: ";
			cin.getline(subject,20);			
			cout<<"\n\t\tEnter Book Pages: ";
			cin>>pages;			
			cout<<"\n\t\tEnter Book Edition: ";
			cin>>edition;
			cout<<"\n\t\t1-> Store Book in Language Section: "<<"\n\t\t2-> Store Book in Computer Section"
			<<"\n\t\t3-> Store Book in Law Section"<<"\n\t\t4-> Store Book in Mathamethics Section"<<"\n\t\t5-> Store Book in Biology Department:\n";
			cout<<"\n\t\tSelect in which department you want to store: ";
			cin>>select;
			system("cls");
			switch(select)
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
			storage<<"\nBook name: "<<book_name<<endl<<"Author: "<<author<<endl<<"Department: "
			<<subject<<endl<<"Pages: "<<pages<<endl<<"Edition: "<<edition<<endl;
			system("cls");
		}
		void file_cs()
		{
			ofstream storage("Cs.txt",ios::app);
			storage<<"\nBook name: "<<book_name<<endl<<"Author: "<<author<<endl<<"Department: "
			<<subject<<endl<<"Pages: "<<pages<<endl<<"Edition: "<<edition<<endl;
			system("cls");
		}
		void file_law()
		{
			ofstream storage("law.txt",ios::app);
			storage<<"\nBook name: "<<book_name<<endl<<"Author: "<<author<<endl<<"Department: "
			<<subject<<endl<<"Pages: "<<pages<<endl<<"Edition: "<<edition<<endl;
			system("cls");
		}
		void file_math()
		{
			ofstream storage("Math.txt",ios::app);
			storage<<"\nBook name: "<<book_name<<endl<<"Author: "<<author<<endl<<"Department: "
			<<subject<<endl<<"Pages: "<<pages<<endl<<"Edition: "<<edition<<endl;
			system("cls");
		}
		void file_bio()
		{
			ofstream storage("Bio.txt",ios::app);
			storage<<"\nBook name: "<<book_name<<endl<<"Author: "<<author<<endl<<"Department: "
			<<subject<<endl<<"Pages: "<<pages<<endl<<"Edition: "<<edition<<endl;
			system("cls");
		}
		//To read files
		
		
		void dis_language()
		{
			ifstream read("language.txt");
			while (getline (read, myText)) 
			{
  			cout<< myText<<endl;
			}
		}
		void dis_cs()
		{
			ifstream read("Cs.txt");
			while (getline (read, myText)) 
			{
  			cout << myText<<endl;
			}
		}
		void dis_law()
		{
			ifstream read("lae.txt");
			while (getline (read, myText)) 
			{
  			cout << myText<<endl;
			}
		}
		void dis_math()
		{
			ifstream read("Math.txt");
			while (getline (read, myText)) 
			{
  			cout << myText<<endl;
			}
		}
		void dis_bio()
		{
			ifstream read("Bio.txt");
			while (getline (read, myText)) 
			{
  			cout << myText<<endl;
			}
		}

}l;
int main()
{
	l.dis_bio();
}
