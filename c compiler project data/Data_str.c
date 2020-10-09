#include <stdio.h>
#include<stdlib.h>


//list creation from the end
/*

typedef struct node{


int data;

struct node *nx;




}node;

node *list;

node *create_node(node*list,int val);

node *head;


int main(){

for  (int i=0;i<10;i++){
list=create_node(list,i);

}

}


node *create_node(node*list,int val){
// empty list 
if (list==NULL){
list=(node*) malloc(sizeof(node));


list->data=val;
printf("here is the first value %d:\n",list->data);
list->nx=NULL;

return list;
}

else {
//not empty lsit 

head=(node*) malloc(sizeof(node));

head->data=val;

list-> nx=head;


printf("here is the  value %d:\n",head->data);
head->nx=NULL;


return head;



}

}


*/


//list creation from the start 

/*
typedef struct node{


int data;

struct node *nx;




}node;

node *list;

node *create_node(node*list,int val);

node *head;


int main(){

for  (int i=0;i<10;i++){
list=create_node(list,i);

}

}


node *create_node(node*list,int val){
// empty list so creat list
if (list==NULL){
list=(node*) malloc(sizeof(node));


list->data=val;
printf("here is the first value %d:\n",list->data);
list->nx=NULL;

return list;
}

else {
//not empty lsit creat new list and link

head=(node*) malloc(sizeof(node));

head->data=val;

head->nx=list;

list=head;


printf("here is the  value %d:\n",list->data);
//head->nx=NULL;


return list;



}

}



*/

//printing list

/*
typedef struct node{


int data;

struct node *nx;




}node;

node *store;

node *list;

node *create_node(node*list,int val);

node *head;


int main(){
//list intialization
for  (int i=0;i<10;i++){
list=create_node(list,i);

}


//list printing
int count=1;
while ((store->nx)!=NULL){
//store variable to store main list address to print it 
store=store->nx;

printf("%d",store->data);
count+=1;
}

printf("\nyour list size is %d list",count);

}


node *create_node(node*list,int val){
// empty list 
if (list==NULL){

list=(node*) malloc(sizeof(node));
store=list;

list->data=val;
printf("here is the first value %d:\n",list->data);
list->nx=NULL;

return list;
}

else {
//not empty lsit 

head=(node*) malloc(sizeof(node));

head->data=val;

list-> nx=head;


printf("here is the  value %d:\n",head->data);
head->nx=NULL;


return head;



}

}




















*/


//add node

//.........................................................

/*
typedef struct node{


int data;

struct node *nx;




}node;

node *store=NULL;

node *list=NULL;

node *head=NULL;

node *head1=NULL;

node *create_node(node*list,int val);
node *add_list (int pos,int val);




int main(){
//list intialization
for  (int i=0;i<10;i++){
list=create_node(list,i);

}

store=add_list (4,50);

printf("store = %d\n",*(store->nx));
//list printing
node *store1=store;
while ((store1->nx)!=NULL){
//store variable to store main list address to print it 
store1=store1 -> nx;

printf("%d",store1->data);
}




}


node *create_node(node*list,int val){
// empty list 
if (list==NULL){

list=(node*) malloc(sizeof(node));
store=list;

list->data=val;
printf("here is the first value %d:\n",list->data);
list->nx=NULL;

return list;
}

else {
//not empty lsit 

head=(node*) malloc(sizeof(node));

head->data=val;

list-> nx=head;


printf("here is the  value %d:\n",head->data);
head->nx=NULL;


return head;



}

}





node *add_list (int pos,int val){
//creating new node


head1=(node*) malloc(sizeof(node));

head1->data=val;
head1->nx=NULL;


node *increment=store;

node *increment1=NULL;
node *increment2=NULL;

for (int i=0;i<pos-1;i++){

increment= increment ->nx;

}


increment1=increment;     // head of the node 


increment2=increment->nx; //tail of the node



head1->nx = increment2->data;

increment1=head1;






return(store);

}




*/






























 







typedef struct node{


int data;

struct node *nx;




}node;

node *list;

node *create_node(node*list,int val);

node *head;


int main(){

for  (int i=0;i<10;i++){
list=create_node(list,i);

}

}


node *create_node(node*list,int val){
// empty list 
if (list==NULL){
list=(node*) malloc(sizeof(node));


list->data=val;
printf("here is the first value %d:\n",list->data);
list->nx=NULL;

return list;
}

else {
//not empty lsit 

head=(node*) malloc(sizeof(node));

head->data=val;

list-> nx=head;


printf("here is the  value %d:\n",head->data);
head->nx=NULL;


return head;



}

}

void push(int val ,node *list){

// empty list 
if (list==NULL){
list=(node*) malloc(sizeof(node));


list->data=val;
printf("here is the first value %d:\n",list->data);
list->nx=NULL;

return list;
}

else {
//not empty lsit 

head=(node*) malloc(sizeof(node));

head->data=val;

list-> nx=head;


printf("here is the  value %d:\n",head->data);
head->nx=NULL;



}


node * pop(node*list){

node *inc;

inc=list;
int x=1;
while (x){

inc=inc->nx
if (list->nx==NULL){
free(list)
x=0;
}
}


// empty list 
if (list==NULL){


list=(node*) malloc(sizeof(node));


list->data=val;
printf("here is the first value %d:\n",list->data);
list->nx=NULL;

return list;
}

else {
//not empty lsit 

head=(node*) malloc(sizeof(node));

head->data=val;

list-> nx=head;


printf("here is the  value %d:\n",head->data);
head->nx=NULL;



}
















