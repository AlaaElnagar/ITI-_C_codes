
#include <stdlib.h>
#include<stdio.h>
typedef struct node{

s32 data;

struct node *nx;



}node;



node *list;



node *Add_back_Node(s32 val,node *My_List){

if (My_List==NULL){
//printf("s1\n");
My_List=(node *)malloc(sizeof(node));
My_List->nx= NULL;
My_List->data =val;
return(My_List);
}

else if (My_List!=NULL) {
//printf("s2\n");
node *My_New_List;

My_New_List=(node *)malloc(sizeof(node));

My_New_List->data=val;

My_New_List->nx= NULL;

u8 flag=1;

node *Search_List=My_List;

while (flag){

if (Search_List->nx==NULL){
Search_List->nx=My_New_List;

flag=0;
}

else{
Search_List=Search_List->nx;

}

}
return(My_List);
}



}



node *Add_Front_Node(s32 val,node *My_List){

if (My_List==NULL){

My_List=(node *)malloc(sizeof(node));
My_List->nx= NULL;
My_List->data =val;
return(My_List);
}

else {

static node *My_New_List;

My_New_List=(node *)malloc(sizeof(node));

My_New_List->data=val;

My_New_List->nx= My_List;

u8 flag=1;


return(My_New_List);

}



}










//.........................Delet_List contains bug dont delete the  0 element


void Delet_Node(u8 position,node *My_List){

/*
u8 size=Ret_List_Size(My_List);

if (position>size){

printf("SORRY Out of range pOSITION\n");

}

*/

 if (My_List==NULL){

printf("sorry Your list is empty\n");
}
//If the node at the end 
else if (My_List->nx==NULL){
My_List=NULL;
free(My_List);

}


else if (position==0){

node *Delet_List=My_List;
My_List=Delet_List->nx;


Delet_List=NULL;
free(Delet_List);

}


else {
u8 flag=1;
u8 count=0;
node *Search_List=My_List;
node *Delet_List=NULL;

while (flag){

if (count==position-1&&Search_List!=NULL){
Delet_List=Search_List->nx;
Search_List->nx=Search_List->nx->nx;


Delet_List=NULL;
free(Delet_List);

flag=0;
}
else{

Search_List=Search_List->nx;

count++;
}

}



}


}


u8 Ret_List_Size(node *My_List){


u8 count=1;
node *Search_List=My_List;

while (Search_List->nx!=NULL){


Search_List=Search_List->nx;


count++;
}


return(count);


}


u8 Ret_Postion_Data(u8 position,node *My_List){


u8 size=Ret_List_Size(My_List);
node *Get_List=NULL;

if (position>size){

printf("SORRY Out of range pOSITION\n");
return(0);
}




else if (position==0){

return(My_List->data);

}

else {
u8 flag=1;
u8 count=0;
node *Search_List=My_List;


while (flag){

if (count==position-1){
Get_List=Search_List->nx;


flag=0;
}
else{

Search_List=Search_List->nx;

count++;
}



}}

return(Get_List->data);
}




node *Empty_node(u8 val){
node *Empty_List=NULL;
Empty_List=(node *)malloc(sizeof(node));
Empty_List->nx= NULL;
Empty_List->data =val;
return(Empty_List);


}



node *Add_Node_At_Position(u8 position,s32 val,node *My_List){

node *My_New_List=Empty_node(val);

u8 flag=1;
u8 count=0;
node *Search_List=My_List;
node *Get_List=NULL;

while (flag){

if (count==position-1){
Get_List=Search_List->nx;
My_New_List->nx=Get_List;

Search_List->nx=My_New_List;


flag=0;
return(My_List);
}
else{

Search_List=Search_List->nx;

count++;
}

}




}



























/*

node *Add_Node_At_Position(u8 position,s32 val,node *My_List){

node *temp;

u8 size=Ret_List_Size(My_List);

if (position>size){

printf("SORRY Out of range pOSITION\n");
return(0);
}


else if (My_List==NULL){

My_List=(node *)malloc(sizeof(node));
My_List->nx= NULL;
My_List->data =val;
return(My_List);
}



else {
u8 flag=1;
u8 count=0;
node *Search_List=My_List;
node *Delet_List=NULL;     //Delete

while (flag){

if (Search_List->nx==NULL){

node *My_New_List;

My_New_List=(node *)malloc(sizeof(node));

My_New_List->data=val;

My_New_List->nx= NULL;

u8 flag1=1;

node *Search_List=My_List;

while (flag1){

if (Search_List->nx==NULL){
Search_List->nx=My_New_List;

flag1=0;
return(My_List);
break;
}
}
}

else if (count==position-1&&Search_List!=NULL){

//create node 
node *My_New_List;

My_New_List=(node *)malloc(sizeof(node));

My_New_List->data=val;

My_New_List->nx= NULL;

u8 flag1=1;

node *Search_List=My_List;

while (flag1){

if (Search_List->nx==NULL){
Search_List->nx=My_New_List;

flag1=0;
return(My_List);
break;
}
}

node *Temp_List=
Delet_List=Search_List->nx;
Search_List->nx=Search_List->nx->nx;


Delet_List=NULL;
free(Delet_List);

flag=0;
}
else{

Search_List=Search_List->nx;

count++;
}



}



}
}


*/















