#include <stdio.h>
#include "queue.h"
#include "q.h"

int main( )
{
    Queue Q;
    int i;

    Q = CreateQueue( 12 );

    for( i = 0; i < 12; i++ )
        Enqueue( i, Q );

	//PrintQ(Q);

    
	while( !IsEmpty( Q ) )
    {
        printf( "%d\n", Front( Q ) );
        Dequeue( Q );
    }
   
    DisposeQueue( Q );
    return 0;
}
