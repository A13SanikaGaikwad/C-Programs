/*4
Write a program to create an array for 10 players.For each player store name,no.of matches played,runs,wickets takes.
a.create function to accept the information of each player.
b.create function to display the information of all the players.
c.Display the information of player who made maximum runs and the one who take maximum number of wickets.
*/

#include<stdio.h>
struct players
{
	char PlayerName[10];
	int noOfMatchesPlayed;
	int runs;
	int wickets;
};
void Accept(struct players*,int);
void Display(struct players*,int);
void maximum_run(struct players*,int);
void maximum_wicket(struct players*,int);
void main()
{
	int no;
	printf("Enter the no.of players: ");
	scanf("%d",&no);
	struct players p[no];
	Accept(p,no);
	Display(p,no);
	maximum_run(p,no);
	maximum_wicket(p,no);
}
void Accept(struct players*p,int s)
{
	int i;
	printf("\n.......Enter the information of each player.......");
	printf("\nName, No.of matches played, Runs scored, Wickets taken:\n\n");
	for(i=0;i<s;i++)
	{
	    scanf("%s %d %d %d",p[i].PlayerName,&p[i].noOfMatchesPlayed,&p[i].runs,&p[i].wickets);
	}	
}
void Display(struct players*p,int s)
{
	int i;
	printf("\n........Display the information of all the players.......\n");
	printf("\nName\t\tNo.of Matches Played\t\tRuns\t\tWicktes\n");
	for(i=0;i<s;i++)
	{
		
		printf("%s\t\t%d\t\t\t\t%d\t\t%d\n",p[i].PlayerName,p[i].noOfMatchesPlayed,p[i].runs,p[i].wickets);
	}
}
void maximum_run(struct players*p,int s)
{
	int max_run=p[0].runs;
	char str[10];
	int i;
	for(i=0;i<s;i++)
	{
		if(max_run<p[i].runs)
		max_run=p[i].runs;
	}
	for(i=0;i<s;i++)
	{
		if(p[i].runs==max_run)
	    strcpy(str,p[i].PlayerName);
	}
	printf("\n Maximum Runs is %d and their name is %s",max_run,str);
}
void maximum_wicket(struct players*p,int s)
{
	int max_wicket=p[0].wickets;
	char str[10];
	int i;
	for(i=0;i<s;i++)
	{
		if(max_wicket<p[i].wickets)
		max_wicket=p[i].wickets;
	}
	for(i=0;i<s;i++)
	{
		if(p[i].wickets==max_wicket)
	    strcpy(str,p[i].PlayerName);
	}
	printf("\n Maximum Wicket is %d and their name is %s",max_wicket,str);
}

