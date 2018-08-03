#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float matrix[10][10],row,col,r,c,r0,c0;
cout<<"enter the rxo";
cin>>r0>>c0;
cout<<"enter the matrix";

//taking matrix

for(row=0;row<r0;row++)
{
for(col=0;col<c0;col++)
{
cin>>matrix[row][col];
}
}

//processing

for(row=0;row<r0;row++) //basicfor1
{
for(col=0;col<c0;col++) //basicfor2
{
if(row==col)   //making row=col=1
{
r=row;
c=col;
int temp;
temp=matrix[row][col];
while (c<c0)
{
matrix[r][c]=matrix[r][c]/temp;
c++;
}//while1
c=0;
int temp2;
temp2=matrix[row+1][col];
while(r+1<r0)
{
matrix[r+1][c]=matrix[r+1][c]-matrix[row][c]*temp2; //subtracting
c++;
if(c==c0)
{
c=0;
r++;
temp2=matrix[r+1][col];
}
}//while2
}//if
}//basic for1
}//basic for2

//output
for(row=0;row<r0;row++)
{
for(col=0;col<c0;col++)
{
cout<<matrix[row][col]<<"\t";
}
cout<<"\n";
}
int rank=r0,count;
//calculating rank
for(row=0;row<r0;row++)
{
for(col=0;col<c0;col++)
{
if(matrix[row][col]==0||)
{
count++;
}
if(count==c0)
{
rank=rank-1;
}
}
count=0;
}

cout<<"the rank is "<<rank;

getch();
}
