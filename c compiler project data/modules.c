#include <stdio.h>

#include "STD_Types.h"
#include "creat_list.h"


node *Add_back_Node(s32 val,node *My_List);

node *Add_Front_Node(s32 val,node *My_List);



//add list any position
//backup list
//copy list  

void Delet_Node(u8 position,node *My_List);
u8 Ret_List_Size(node *My_List);
u8 Ret_Postion_Data(u8 position,node *My_List);

node *Add_Node_At_Position(u8 position,s32 val,node *My_List);   // starts with 0 position and contains bug with position zerro 
node *Empty_node(u8 val);

void main(){


for (u8 i=0;i<10;i++){

list=Add_Front_Node(i,list);

}
//u8 size= Ret_Postion_Data(60,list);

//printf("your test data is :%d  \n",size);


//Delet_Node(9,list);  
//Delet_List(7,list);
//Delet_List(2,list);
Add_Node_At_Position(9,200,list);

for (u8 i=0;i<10;i++){

printf("%ld \n",list->data);
list=list->nx;
}



}












