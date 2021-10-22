#include<iostream>
#include<stdio.h>
using namespace std;

class publication
{
private:
    char title[25];
    int price;
public :
    void getdata()
    {
        cout<<"\nEnter the title of the book \n";
        gets(title);
        cout<<" \nPrice Of the Book \n";
        cin>>price;
    }
    void display()
    {
        cout<<"\nTitle Of Book :"<<title<<endl;
        cout<<"\nPrice :"<<price<<endl;
    }
};
    class Book: public publication
    {
    private:
        int pgcount;

    public:
        void getdata()
        {
            cout<<"\nEnter the page number of book ";
            cin>>pgcount;
        }
        void display()
        {
            cout<<"\nNo. of Pages in book: ";
            cout<<pgcount;
        }
    };
    class Video : public publication
    {
    private:
        int video;

    public:
        void getdata()
        {
            cout<<"\nEnter video memory ";
            cin>>video;
        }
        void display()
        {
            cout<<"\n Total memory of video: "<< video<<" MB";
        }
    };

    int main()
    {
  Book b;
  Video v;
  cout<<"\t Data Input\n";
  b.publication::getdata();
  b.getdata();
  v.getdata();
  cout<<"\t Data Output\n";
  b.publication::display();
  b.display();
  v.display();
  return 0;


    }

