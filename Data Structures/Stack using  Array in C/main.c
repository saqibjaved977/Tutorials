#include <stdio.h>
#include "stackar.h"
#include "sta.h"

int main( )
{
    Stack S;
    int i;

    S = CreateStack( 12 );
    for( i = 0; i < 10; i++ )
        Push( i, S );

    while( !IsEmpty( S ) )
    {
        printf( "%d\n", Top( S ) );
        Pop( S );
    }

    DisposeStack( S );
    return 0;
}
