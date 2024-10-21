
byte orientation(byte orient, char turning){
  if (turning== 'L'){
        orient=orient-1;
        if (orient==-1|| orient== 255)
            orient=3;
  }
    else if(turning== 'R'){
        orient=orient+1;
        if (orient==4|| orient==255)
            orient=0;
    }
    else if(turning== 'B'){
        if (orient==0)
            orient=2;
        else if (orient==1)
            orient=3;
        else if (orient==2)
            orient=0;
        else if (orient==3)
            orient=1;
    }

    return(orient);
}

byte updateCoordinates(){//byte x, byte y, byte orient){
    
    if (orient==0)
        y=y+1;
    if (orient==1)
        x=x+1;
    if (orient==2)
        y=y-1;
    if (orient==3)
        x=x-1;

    //return(x,y);
}
