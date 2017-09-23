#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 20

struct TCoordenada {
    double x;
    double y;
};

int main(int argc, char *argv[]){
    double t =   0.;
    struct TCoordenada1 a1 = {  0., -10. },
                       v1 = {  5.,  10. },
                       s1 = {  0.,   0. };
	struct TCordenada2 
						a2 = {  0., -10. },
                       v2 = {  5.,  10. },
                       s2 = {  0.,   0. };
		

    initscr();
    curs_set(0);

    /* Pasen los años */
    for (t=0.; s.y>=0. ; t+= DELTA){

        /* actualizar la fisica */
        
        //Tanque 1
        v1.y1 += a1.y1 * DELTA;
        s1.y1 += v1.y1 * DELTA;

        v1.x1 += a1.x1 * DELTA;
        s1.x1 += v1.x1 * DELTA;
        
        
        //Tanque 2
        v2.y2 += a2.y2 * DELTA;
        s2.y2 += v2.y2 * DELTA;

        v2.x2 += a2.x2 * DELTA;
        s2.x2 += v2.x2 * DELTA;

		

        /* Representar */
        clear();
        mvprintw(YC-s1.y, XC+s1.x, "O");
        mvprintw(YC-s1.y, XC+s1.x, "1");
        refresh();
        usleep(100000);

    }

    usleep(2000000);
    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}
