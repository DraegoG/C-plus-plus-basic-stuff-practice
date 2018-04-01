#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
class Book
{
    public:
        char title[30];
        int book_number;
        float price;
    Book()
    {
        strcpy(title,"No title");
        book_number=0;
        price=0.0f;
    }
    void newBook()  //Function used to enter the book details
    {
        cout<<"Enter the book details: \nBook Number: ";
        cin>>book_number;
        cin.ignore();   //very important function; it clears the 'cin' stream so that we can use getline()
        cout<<"Title: ";
        cin.getline(title,30);
        //other syntax for using the getline:
        //getline(cin,title) ->this takes '\n' as the delimiter and can be only used if 'title' is a string;
        //getline(title,20(the size),'#') -> takes '#' as the delimiter

        cout<<"Price: ";
        cin>>price;
        storeBook();
    }
    void bookInfo() //The function used to view the book details one by one
    {
       cout<<" Book Title: "<<title<<"\n Book number: "<<book_number<<"\n Price: "<<price<<endl<<endl;
    }
    void storeBook();
    void searchRecord();  //void searchBook(char *);
    void updateRecord();
    void deleteBook();
    void viewAllBooks();
};

/*
void Book::deleteBook(char *b)
{
    ifstream fin;
    ofstream fout;
    fin.open("bookinfo.txt",ios::in|ios::binary);
    if(!fin)
        cout<<"\nUnable to open file";
    else{
        fout.open("file1.txt",ios::out|ios::binary);
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(strcmp(title,b))
            {
                fout.write((char*)this,sizeof(*this));
            }
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
        fout.close();
        //Now deleting the original file
        remove("bookinfo.txt");
        rename("file1.txt","bookinfo.txt");
        //Now renaming the file to original file
    }

}
*/

/*
void Book::searchBook(char *b)
{
    ifstream fis;
    int found=0;
    fis.open("bookinfo.txt",ios::in|ios::binary);
    if(!fis) cout<<"File not found"<<endl;
    else
    {
        fis.read((char *)this,sizeof(*this));
        while(!fis.eof())
        {
            if(!strcmp(b,title))
            {
                bookInfo();
                found=1;
                break;
            }
            fis.read((char*)this,sizeof(*this));
        }
        if(found==0) cout<<"No such book found";
    }
    fis.close();
}
*/

void Book::storeBook()  //The function used to store the values in the file
{//function for insertion
    if(price==0&&book_number==0)
    {
        cout<<"Book data not initialized";
    }
    else
    {
        ofstream fos;
        fos.open("bookinfo.txt",ios::app|ios::binary);
        fos.write((char*)this,sizeof(*this));   //here this pointer is casted to char* because in the definition of the write function the pointer is defined of char* type
        fos.close();
    }
}

void Book::searchRecord()
{//function to search for a particular record in the file
    char searchTitle[30];
    cout<<"Type the name of the book to search for: ";
    cin.ignore();
    cin.getline(searchTitle,30);
    int found=0;
    ifstream fin;
    fin.open("bookinfo.txt",ios::in|ios::binary);
    if(!fin) cout<<"File does not exist";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            if(!strcmp(title,searchTitle))
            {
                bookInfo();
                found=1;
                break;
            }
            fin.read((char*)this,sizeof(*this));
        }
        if(found==0) cout<<"Book not available";
    }
    fin.close();
}

void Book::updateRecord()
{
    cout<<"\nEnter the book name to be updated: ";
    char b[30];
    cin.ignore();
    cin.getline(b,30);
    fstream file;
    file.open("bookinfo.txt",ios::in|ios::ate|ios::out|ios::binary);
    file.seekg(0);  //because we opened the file in the update mode so the pointer will be presently pointing at the end of the file and we want it to read the file from the top.
    file.read((char*)this,sizeof(*this));

    //cout<<file.tellp()<<endl<<file.tellg()<<endl<<sizeof(*this)<<endl<<this->title<<endl<<this->price;
    while(!file.eof())
    {
        if(!strcmp(b,title))
        {
            newBook();
            file.seekp(file.tellp()-sizeof(*this));
            file.write((char*)this,sizeof(*this));
        }
        file.read((char*)this,sizeof(*this));
    }
    file.close();
}

void Book::deleteBook()
{
    //Logic: We cannot delete the record directly, so what we can do is we will skip the matching strings data and
    //print the rest data in another file(say "file1.txt"), then we will delete the original file and then change the name of "file1" to "bookinfo.txt".
    cout<<"\nThe books present are: "<<endl;
    viewAllBooks();
    cout<<"\nEnter the book name you want to delete: ";
    char *b=new char[30];
    cin.ignore();
    cin.getline(b,30);

    ifstream fis;
    ofstream fos;
    fis.open("bookinfo.txt",ios::in|ios::binary);
    fos.open("file1.txt",ios::out|ios::binary);
    fis.read((char*)this,sizeof(*this));

    while(!fis.eof())
    {
        if(strcmp(b,title))
        {
            fos.write((char*)this,sizeof(*this));
        }
         fis.read((char*)this,sizeof(*this));
    }
    fis.close();
    fos.close();

    //deleting/removing the original file
    if( remove("bookinfo.txt") )
        cout<<"error deleting file"<<endl;
    else cout<<"Deletion successful"<<endl;

    //renaming the new file
    if(!rename("file1.txt","bookinfo.txt"))
    cout<<"Rename successful";
    else
    cout<<"Rename failed";
}

void Book::viewAllBooks() //Function to print the book record one by one
{//function for view
    ifstream fin;
    fin.open("bookinfo.txt",ios::in|ios::binary);
    if(!fin) cout<<"File does not exist";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
            {
                bookInfo();
                fin.read((char*)this,sizeof(*this));
            }
    }
    fin.close();
}


int main()
{
    Book b3;
    //b3.updateRecord();
    //b3.deleteBook();
    //cout<<"\n\n\t after deletion"<<endl;
    b3.viewAllBooks();
   /* while(1)
    {
        int op;
        cout<<"What operation do you want to do: \n1. Add a new book\n2. Search a book\n3. Update record\n4. Delete a record\n5. View all\n6. Exit";
        cin>>op;
        switch(op)
        {
        case 1: Book b1;
                b1.newBook();
                 cout<<"Data added";
            break;
        case 2: searchRecord();
            break;
        case 3: updateRecord();
            break:
        case 4: deleteBook();
            break;
        case 5: viewAllBooks();
            break;
        case 6: exit(0);
        default:
            cout<<"\nInvalid choice. Try again"<<endl;

        }
    }*/

}
