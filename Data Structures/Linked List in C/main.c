#include<stdio.h>
#include "l.h"

void printlist(List L)
{
	Position P;
	P=Header(L);
	if(IsEmpty(L))
	{
		printf("List is empty\n");
	}
	else
	{
		do{
			P=Advance(P);
			printf("%d   ", Retrieve(P));
			
		}while(!IsLast(P, L));
	}
	
	printf("\n");
}

int main()
{

    List L;
    Position P;
    int i;

    L = MakeEmpty( NULL );
    P = Header( L );
	printf("in start\n");
    printlist( L );

   
    Insert( 45, L, P );
    printlist( L );
    P = Advance( P );
    
	Insert( 455, L, P );
	printlist( L );
	P=Advance(P);
	
    Delete( 45, L );

    printlist( L );

    DeleteList( L );

    return 0;
}