
	// string--12
	//example of extern variable..

	void func1();
	void func2();
	void func3();

	void main()
	{
		extern int a;
		clrscr();
		printf("Enter n:");
		scanf("%d",&a);
		func1();
		printf("\n after calling func1()\n a=%d",a);
		getch();
	}
	void func1()
	{
		extern int a;
		printf("\n inside func1 a=%d",a);
		a+=10;
		func2();
	}
	void func2()
	{
		extern int a;
		printf("\n inside func2 a=%d",a);
		a+=10;
		func3();
	}
	void func3()
	{
		extern int a;
		printf("\n inside func1 a=%d",a);
		a+=10;
		func3();
	}
       int a;