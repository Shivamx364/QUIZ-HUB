#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
int temp;


class Quiz_hub
{
public :
    char playername[20];
    int money;
    int s;



    void help()
	{

    system("cls");

    cout<<"\n\n                              HELP";
    cout<<"\n -------------------------------------------------------------------------";
    cout<<"\n .........................   Quiz_hub  Game...........";
    cout<<"\n>In this Quiz game,player have one attempts. You can attempt one question only one time in the game.\n  If  incase, you don’t know the answer you can quit the game ";
    cout<<"\n\nYou have three lifelines:-\n>50-50\n>Flip the question\n>Expert advice";
    cout<<"\n\n      >50-50:-If the user choose this lifeline,than out of 4 options 2 wrong option will get removed.";
    cout<<"\n      >Audience poll:-If the user choose this lifeline,than the show % chance of answer \n       ";
    cout<<"\n      >Expert Advice:-If the user choose this lifeline,than user will get a hint related to answer.";
	cout<<"\n\n>1st stage include question from 1 to 3(mandatory) i.e if you will complete the level then only you'll get the money  ";
	cout<<"\n>2nd stage include question from 4 to 6.(mandatory) i.e if you will complete the level then only you'll get the money  ";
	cout<<"\n>3rd stage include question from 7 to 9.(mandatory) i.e if you will complete the level then only you'll get the money ";
	cout<<"\n>4th stage(last stage) include question from 10 to 15. ( not mandatory) i.e this level you'll get money for every individual question ";
	cout<<"\n\n\t*****Quiz_hub game developed by Shivam kumar & Yash tak********";

	}

	void Question_book()
	{
	     //Questions
    string q1 = "Q.1 Hockey is the national sports of ? \n A)India and Nepal  B)India and Bhutan\n C)Bangladesh and Pakistan  D)India and Pakistan \n";
    string q10=  "Q.10 Who is the Chairman of Bank of Baroda?\n A)Sanjiv Chadha  B)Hasmukh Adhia\n C)Rajkiran Rai D)Ajay Narayan Jha \n";
    string q2 = "Q.2 September 27 is celebrated every year as? \n A)Teachers' Day  B)National Integration Day\n C)World Tourism Day  D)International Literacy Day ";
    string q3 = "Q.3 Which one of the following Cricketers has been declared by the ICC as Cricketer of the Twentieth Century  \n A)Sachin Tendulkar  B)Kapil Dev \n C)Rahul Dravid D)Anil Kumble ";
    string q4 = "Q.4 Where did MS Dhoni make his ODI debut ? \n A)Chiittagong   B)Dhaka \n C)Hyderabad D)Vishakhapatnam ";
    string q5 = "Q.5 Which of the following software applications would be the most appropriate for performing numerical and statistical calculations?\n A)Database   B)Document Processor \n C)Graphic Package D)Spread Sheet";
    string q6 = "Q.6 The process of preparing a floppy diskette for use is called ..\n A)Assembling   B)Translating \n C)Parsing D)Formatting ";
    string q7 = "Q.7 12.Which of the following virus overtake computer system, when it boots and destroy information ?\n A)System infectors   B)Trojan \n C)Stealth virus D)Boot infectors";
    string q8 = "Q.8 Computer programs are written in a high level programming language, however the human readable version of a program is called?\n A)Cache   B) Instruction set\n C)Source code D)Boot infectors";
    string q9 = "Q.9 Which was the 1st non test playing country to beat India in an international match? \n A)Canada   B)Sri Lanka\n C)Zimbabwe D)East Africa";

    string q11 = "Q.11The 2017 Indian Premier League (IPL 2017) first match on 5 April, 2017 was held in ?\n A)Banglore  B)Delhi\n C)Hyderabad D)Kolkata";
    string q12 = "Q.12 With which game does Santosh Trophy is  associated ?\n A)Tennis  B)Cricket\n C)National Football D)Golf";
    string q13 = "Q.13 Which is the capital of the Philippines?\n A)Davos  B)Makati\n C)Manila D)Cebu City";
    string q14 = "Q.14 When Central Board of Direct Taxes was formed ?\n A)1919  B)1944\n C)1956 D)1953";
    string q15 = "Q.15 Who took charge of the Gujarat, Daman and Diu Naval Area as the Flag Officer Commanding Gujarat Naval Area (FOGNA)?\n A)Rear Admiral Sanjay Roye  B)Rear Admiral Puruvir Das \n C)Rear Admiral Suraj BerryD)Rear Admiral Sanjay Vatsyayan";

        for(;;)
        {
             money = 0 ;
               int ff=1,ap=1,exp=1;
                cout<<q1;
                char o;
                cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
                cout << "Enter your choice ==> ";
                cin>>o;
                            if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"C)Bangladesh and Pakistan D)India and Pakistan";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)30% C)10% D)40%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                    cout<<"India always defeat Pakistan in Hockey";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }
                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }
                             if(o=='D' || o=='d')
                                    {
                                         money=money+50000;
                                        cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs. and 1st stage start  need to answer all questions correctly";
                                        getch();
                                    }
                                    else
                                    {
                                          cout<<"Wrong correct Ans: D)India and Pakistan.....";
                                            getch();
                                            break;
                                    }


//---------------------------------------------------------------------------------------------------------------------------------
            system("cls");

            cout<<q2 ;
            cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;



                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"B)National Integration Day\n C)World Tourism Day";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)30% C)50% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Its purpose is to foster awareness among the global community of tourism's social, cultural, political\n and economic value\n and the contribution the sector can make in reaching the Sustainable Development Goals.";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }
                if(o=='C' || o=='c')
                {
                    money=money+50000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.";
                    getch();
                }
                else
                {
                    money=money-50000;
                    cout<<"Wrong correct Ans: C)World Tourism Day .....";
                    getch();
                     break;
                }

                system("cls");

 //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q3;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                 if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"A)Sachin Tendulkar  B)Kapil Dev ";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)50% C)20% D)10%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Kapil dev won 1883 worldcup ";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }


                if(o=='B' || o=='b')
                {
                    money=money+50000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs. and 1st stage is over";
                    getch();
                }
                else
                {
                    money=money-50000;
                    cout<<"Wrong correct Ans: B)Kapil Dev .....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q4;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;



                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"A)Chiittagong   B)Dhaka ";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)50% B)40% C)20% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"He made his ODI debut at Chittagong on Dec 23, 2004. The match was between Bangladesh and India.";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='A' || o=='a')
                {
                    money=money+100000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs. and 2nd stage start  need to answer all questions correctly";
                    getch();
                }
                else
                {
                    cout<<"Wrong correct Ans: A)Chiittagong  .....";
                    getch();
                    break;
                }
                 system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q5;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;


                         if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"C)Graphic Package D)Spread Sheet";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)12% B)30% C)8% D)50%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Spread Sheet would be the most appropriate for performing numerical and statistical calculation";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='D' || o=='d')
                {
                    money=money+100000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.";
                    getch();
                }
                else
                {
                    money=money-100000;
                    cout<<"Wrong correct Ans: D)Spread Sheet  .....";
                    getch();
                    break;
                }

             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q6;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"C)Parsing D)Formatting";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)30% C)0% D)50%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<" The process of preparing a floppy diskette for use is called Formatting.";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='D' || o=='d')
                {
                    money=money+100000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs. and 2nd stage is over";
                    getch();
                }
                else
                {
                    money=money-100000;
                    cout<<"Wrong correct Ans: D)Formatting  .....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q7;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                 if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"B)Trojan  C)Stealth virus";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)30% C)50% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<" Stealth virus is very dengerous";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='C' || o=='c')
                {
                    money=money+600000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs. and 3rd stage start  need to answer all questions correctly";
                    getch();
                }
                else
                {
                    cout<<"Wrong correct Ans: C)Stealth virus .....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q8;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;
                 if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"C)Source code D)Boot infectors";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)22% B)20 C)48% D)10%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"the human-readable version of a program is called source code.";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }


                if(o=='C' || o=='c')
                {
                    money=money+600000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.";
                    getch();
                }
                else
                {
                    money=money-600000;
                    cout<<"Wrong correct Ans:  C)Source code .....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q9;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<" B)Sri Lanka C)Zimbabwe";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)50% C)30% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<" B)Sri Lanka is 1st non test playing country to beat India in an international match";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='B' || o=='b')
                {
                    money=money+600000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs. and 3rd stage is over";
                    getch();
                }
                else
                {
                    money=money-600000;
                    cout<<"Wrong correct Ans: B)Sri Lanka .....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q10;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"A)Sanjiv Chadha  B)Hasmukh Adhia";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)60% C)20% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Hasmukh Adhia (Chairman) Sanjiv Chada (MD & CEO)";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='B' || o=='b')
                {
                    money=money+1050000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs. and 4th stage start no need to answer all questions correctly";
                    getch();
                }
                else
                {
                    cout<<"Wrong correct Ans: B)Hasmukh Adhia .....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q11;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                 if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"C)Hyderabad D)Kolkata";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)20% C)50% D)10%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Indian Premier League (IPL 2017) first match on 5 April played in  Hyderabad ";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='c' || o=='C')
                {
                    money=money+1000000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.";
                    getch();
                }
                else
                {
                    cout<<"Wrong correct Ans: C)Hyderabad.....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q12;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"C)National Football D)Golf";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)30% C)40% D)10%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Santosh Trophy is associated with football";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='c' || o=='C')
                {
                    money=money+1000000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.";
                    getch();
                }
                else
                {
                    cout<<"Wrong correct Ans: C)National Football.....";
                    getch();
                    break;
                }

             system("cls");
//------------------------------------------------------------------------------------------------------------------------------------------------
              cout<<q13;
             cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"B)Makati C)Manila";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)30% C)50% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Manila was established as the capital city of the Philippines on June 24, 1976 by a presidential order.";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='c' || o=='C')
                {
                    money=money+1000000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.";
                    getch();
                }
                else
                {
                    cout<<"Wrong correct Ans:  C)Manila.....";
                    getch();
                    break;
                }



//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q14;
            cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                     if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"A)1919  B)1924";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)50% C)30% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<" the administration of taxes, came into existence as a result of the Central Board of Revenue Act, 1924";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='b' || o=='B')
                {
                    money=money+1000000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.";
                    getch();
                }
                else
                {
                    cout<<"Wrong correct Ans: B)1924.....";
                    getch();
                    break;
                }
             system("cls");

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            cout<<q15;
            cout<<"\n1.50-50 ("<<ff<<") 2).Audience poll("<<ap<<") 3.Expert advice("<<exp<<")\n";
            cout << "\nEnter your choice ==> ";

            cin>>o;

                 if(o=='1')
                            {
                                 if(ff==1)
                                {
                                    cout<<"B)Rear Admiral Puruvir Das \n C)Rear Admiral Suraj Berry";cin>>o;
                                }
                                else
                                {
                                    cout<<"50-50 life line not available enter answer >> ";cin>>o;
                                }
                                ff=ff-1;
                            }
                            else if(o=='2')
                            {
                                if(ap==1)
                                {
                                    cout<<"A)20% B)50% C)30% D)0%";cin>>o;
                                }
                                else
                                {
                                    cout<<"Audience poll life line not available enter answer >> ";cin>>o;
                                }
                                ap=ap-1;
                            }
                            else if(o=='3')
                            {
                                if(exp==1)
                                {
                                      cout<<"Rear Admiral Puruvir Das, Nau Sena Medal took over the reins of the Gujarat";cin>>o;
                                }
                                else
                                {
                                    cout<<"Expert advice life line not available enter answer >> ";cin>>o;
                                }

                                exp=exp-1;
                            }
                            else
                            {
                                cout<<"Don't use of life line";
                            }

                if(o=='b' || o=='B')
                {
                    money=money+1000000;
                    cout<<"Correct ....."<<"Congratulations you won "<<money<<"Rs.  \n\n**********************************************GAME END***************************************";
                    getch();
                    break;
                }
                else
                {
                    cout<<"Wrong correct Ans:  B)Rear Admiral Puruvir Das.....";
                    getch();
                    break;
                }


	}
	 temp = money;
}


    void getdata()
    {
        cout<<"\nEnter YOUR NAME ";
        cin>>playername;
        s=temp;
    }

	void showdata()
    {
	    cout<<"\nNAME ==> "<<playername<<" Score ==> "<<s;
	}
};

// Function to RESET records of file

class User :public Quiz_hub
{
public:
    // Function to store records of file


        void write_data()
        {
            User obj;
            ofstream fp2;
            fp2.open("shivam.txt",ios::binary|ios::app);

            obj.getdata();

            fp2.write((char*)&obj,sizeof(obj));
            fp2.close();
        }

    // Function to display records of file
        void display()
        {
            User obj;
            ifstream fp1;

            fp1.open("shivam.txt",ios::binary);
            while(fp1.read((char*)&obj,sizeof(obj)))
            {
                obj.showdata();
            }
            fp1.close();
        }
    void del()
    {
            User obj;
            ofstream fp2;
            fp2.open("shivam.txt",ios::binary);
            fp2.close();
    }



};




int main()
{
    char choice,S,V,Q;
    User obj;




    for(;;)
    {
        cout<<"\n\t\t\t\t\t___________________________________________";
        cout<<"\n\t\t\t\t\t|               Quiz_hub                  |";
        cout<<"\n\t\t\t\t\t|_________________________________________|";
        cout<<"\n\t\t\t\t\t|                WELCOME                  |";
        cout<<"\n\t\t\t\t\t|                   to                    |";
        cout<<"\n\t\t\t\t\t|                THE GAME                 |";
        cout<<"\n\t\t\t\t\t|_________________________________________|";
        cout<<"\n\t\t\t\t\t|                                         |";
        cout<<"\n\t\t\t\t\t|          BECOME A MILLIONAIRE!          |";
        cout<<"\n\t\t\t\t\t|_________________________________________|";
        cout<<"\n\t\t\t\t\t|_________________________________________|";
        cout<<"\n\t\t\t\t\t| > Press S to start the game             |";
        cout<<"\n\t\t\t\t\t| > Press V to view the score             |";
        cout<<"\n\t\t\t\t\t| > Press R to reset score                |";
        cout<<"\n\t\t\t\t\t| > Press H for help                      |";
        cout<<"\n\t\t\t\t\t| > Press Q to quit                       |";
        cout<<"\n\t\t\t\t\t|_________________________________________|\n\n";
        cout<<"\n Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
                case 'S':

                system("cls");
                obj.Question_book();
                obj.write_data();
                system("cls");
                break;

                case 's':
                system("cls");
                obj.Question_book();
                obj.write_data();
                system("cls");
                break;

                case 'V' :

                obj.display();
                getch();
                system("cls");
                break;

                case 'v' :

                obj.display();
                getch();
                system("cls");
                break;

                case 'Q' :

                exit(0);
                break;

                case 'q' :

                exit(0);
                break;

                case 'h' :

                obj.help();
                getch();
                system("cls");
                break;

                case 'H' :

                obj.help();
                getch();
                system("cls");
                break;

               case 'r' :

                obj.del();
                getch();
                system("cls");
                break;

                case 'R' :

                obj.del();
                getch();
                system("cls");
                break;

                default :

                cout<<"\n Invalid selection ";
                getch();
                system("cls");
                break;
            }
        }
}
