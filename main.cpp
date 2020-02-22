#include <bits/stdc++.h>
#define ll long long int
#define inf 1000000000000000000
#define mod 1000000007
using namespace std;

struct movie
{
    string name,pass;
    int taken=0;

};



class sample
{
    movie m[10][10];
public:
    sample()
    {
        for(int i=0;i<10;i++)
        {

            for(int j=0;j<10;j++)
            {
                m[i][j].taken=0;
            }
        }
    }
    void display()
    {
        cout<<"\n\n\t---------The Seating Arrangement is shown as --------------------\n\n";
        for(int i=0;i<10;i++)
        {
            cout<<"\t";
            for(int j=0;j<10;j++)
            {
                if(m[i][j].taken==0)
                {
                    cout<<"A\t";
                }
                else
                {
                    cout<<"T\t";
                }
            }
            cout<<"\n";
        }
        cout<<"\n\n";
    }
    void book()
    {
        int r,n;
        cout<<"\nEnter seat row number : ";
        cin>>r;
        cout<<"\nEnter seat column number : ";
        cin>>n;
        r--;n--;

                if(m[r][n].taken==0)
                {
                    m[r][n].taken=1;
                    cout<<"\nEnter your name : ";
                    cin>>m[r][n].name;
                    cout<<"\nEnter your password : ";
                    cin>>m[r][n].pass;
                    cout<<"\n\nThe ticket is successfully booked \n";
                }
                else
                {
                    cout<<"\nSorry the seat is taken .";
                }

    }
    void cancel()
    {
        int r,n;string temp;
        cout<<"\nEnter seat row number : ";
        cin>>r;
        cout<<"\nEnter seat column number : ";
        cin>>n;
        r--;n--;
                if(m[r][n].taken==1)
                {
                    int c=2;
                    label:
                    cout<<"\nEnter your password : ";
                    cin>>temp;
                    if(temp==m[r][n].pass)
                    {
                        m[r][n].taken=1;
                        cout<<"\n\tThe Ticket is successfully cancelled\n";
                    }
                    else
                    {
                        cout<<"\n\tYou have "<<c<<" chances left.\n ";
                        c--;
                        if(c>=1)
                        {
                            goto label;
                        }
                        else
                        {
                            cout<<"\nSorry the ticket cannot be cancelled\n";
                        }
                    }
                }
                else
                {

                    cout<<"\nSorry the seat is not booked " ;
                }

    }
};

int main()
{
	// your code goes here
	int ch,f=0;
	sample o;
	do
    {
        cout<<"\n\n-------------------Welcome to Carnival Cinemas-----------------\n";
        cout<<"1.Display Seats\n2.Book a seat\n3.Cancel a seat\n4.Exit\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                o.display();
                break;
            }
            case 2:
            {
                o.book();
                break;
            }
            case 3:
            {
                o.cancel();
                break;
            }
            case 4:
            {
                f=1;
                break;
            }
        }
    }while(f==0);
	return 0;
}


//https://www.hackerrank.com/acmw-hackerrank-contest














/*
    _____________________________________________________________________
    |                                                                    |
    |    *       *   *******     *       *   *       *   *               |
    |    * *   * *   *           *       *   *       *   *               |
    |    *   *   *   *           *       *   *       *   *               |
    |    *       *   ****        *********   *       *   *               |
    |    *       *   *           *       *   *       *   *               |
    |    *       *   *           *       *    *     *    *               |
    |    *       *   *********   *       *       *       ********        |
    |                                                                    |
    |____________________________________________________________________|
*/
