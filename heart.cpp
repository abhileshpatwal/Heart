#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<windows.h>

/*
void ShowConsoleCursor(bool showFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}
*/

void I(int n)
{
	system("cls");
	int i,j;
	char ch=73;
	gotoxy(15,5);
	for(i=1;i<=n;i++)
		cout<<ch;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		gotoxy(15,i+5);
		for(j=1;j<=n;j++)
		{
			if(j==n/2)
				cout<<ch<<ch;
			else
				cout<<" ";
		}
		cout<<endl;
	}
	gotoxy(15,n+5);
	for(i=1;i<=n;i++)
		cout<<ch;
	cout<<endl;
	sleep(3);
}

void heart(int n, char name[50])
{
	system("cls");
	system("COLOR 4");
	int i,j,len,z;
	char ch=3;
	len=strlen(name);
	z=n/2;
	for(i=n/2;i<=n;i+=2)
	{
		gotoxy(10,z++);
		for(j=1;j<n-i;j+=2)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<ch;
		for(j=1;j<=n-i;j++)
			cout<<" ";
		for(j=1;j<=i;j++)
			cout<<ch;
		cout<<endl;
	}

	for(i=n;i>=1;i--)
	{
		gotoxy(10,z++);
		for(j=i;j<n;j++)
			cout<<" ";
		if(i==n)
		{
			for(j=1;j<=(n*2-len)/2;j++)
				cout<<ch;
			cout<<name;
			if(len%2==1)
                for(j=1;j<=(n*2-len)/2;j++)
                    cout<<ch;
            else
                for(j=1;j<(n*2-len)/2;j++)
                    cout<<ch;
		}
		else
		{
			for(j=1;j<=(i*2)-1;j++)
				cout<<ch;
		}
		cout<<endl;
	}
}

void U(int n)
{
	system("cls");
	system("COLOR 9");
	int i,j;
	char ch=85;
	for(i=1;i<=n;i++)
	{       gotoxy(15,i+5);
		for(j=1;j<=n;j++)
		{
			if(j==1 || j==n)
				cout<<ch;
			else
				cout<<" ";
		}
		cout<<endl;

	}
	gotoxy(15,n+5);
	for(i=1;i<=n;i++)
		cout<<ch;
	sleep(3);
}

void main()
{
    //  ShowConsoleCursor(false);
	system("cls");
	_setcursortype(_NOCURSOR);
	int n;
	char name[50];
	system("COLOR 9");
	gotoxy(40,20);
	cout<<"Made By:";
	gotoxy(40,21);
	cout<<"ABHILESH PATWAL";
	gotoxy(5,9);
	cout<<"Blue Eyes Software Solutions";
	sleep(2); gotoxy(5,9); clreol();
	cout<<"Presents";
	sleep(2); gotoxy(5,9); clreol();
	cout<<"For Crazy Programming Lovers";
	sleep(2);
	system("cls");
	gotoxy(5,9);
	cout<<"Enter Your Shoe Size: ";
	cin>>n;
	gotoxy(5,11);
	cout<<"Enter your name: ";
	gets(name);
	strupr(name);
	I(n);
    for(int i=1;i<=10;i++)
    {
        heart(n,name);
        Beep(167,500);
        sleep(1);
    }
	U(n);
}
