/********************************************************************
Structure
********************************************************************/
typedef struct ant_s 
{
    char*               name;
    unsigned long       step;
    char                direction[2];
    unsigned long       x_axis;
    unsigned long       y_axis;
} ant_t;

/********************************************************************
Function
********************************************************************/
ant_t   new_ant(char* p_name, unsigned long p_startx, unsigned long p_starty) ;
void  turn_left(ant_t* a);
void  turn_right(ant_t* a);
void  move(ant_t* a);
