#include <stdio.h>
#include <curses.h>
#include <unistd.h>


main ( void )
{
    WINDOW *ablak;
    ablak = initscr ();

    int x = 0;
    int y = 0; 
   
    int xnov = 1; 
    int ynov = 1; 

    int mx; 
    int my; 
    getmaxyx ( ablak, my , mx ); 
    int height[my];
    int width[mx];
    
    for(int i=0;i<mx;i++){
        width[i]=1;
    }
    
     for(int i=0;i<my;i++){
    height[i]=1;
    }

    width[0]=-1;
    height[0]=-1;
    width[mx-1]=-1;
    height[my-1]=-1;
    
    for ( ;; ) {

        
 
        mvprintw ( y, x, "0" );

        refresh ();
        usleep ( 100000 );

        x = x + xnov; 
        y = y + ynov; 

        xnov*=width[x];
        ynov*=height[y];
    }

    return 0;
}
