#include <stdio.h>
#include <stdlib.h>
struct node {
	int salary;
	long phone;
	char *name;
	char *surname;
	struct node *next;
};

void print_list(struct node *n){
	while (n!= NULL) {
		printf("%s",n->name);
		printf("  %s",n->surname);
		printf("  %d",n->salary);
		printf("  %ld",n->phone);
		printf("\n");
		n = n->next;
	}
}

void free_mem(struct node *n){
	//TODO
}

struct node *create_node(char* nam1,char* nam2,int cnt1,int cnt2,struct node *nxt){
	struct node *new_node;
	new_node = (struct node *) malloc(1 * sizeof(struct node));
	/* contents passed from the function */
	new_node->name = nam1;
	new_node->surname = nam2;
	new_node->salary = cnt1;
	new_node->phone = cnt2;
	new_node->next = nxt;
	return new_node;
}
/* adds a new node to the front of the list *
 * @new_node:The new node to be added * 
 * @list:The list to which we are adding a node */
struct node *add_to_front(struct node *list,struct node *new_node){
	/*Have the node pointing to the start of the list */
	new_node->next = list;
	/*Make new node the head of our list */
	list = new_node;
	return list;
}
int main(int argc, const char *argv[])
{	
	struct node *list_head = NULL;
	int t = 0;
	int sal;//salary
	long pho;//phone
	char *nam;//name
	char *surnam;//surname
	int n;
	nam  = (char *) malloc(1 * sizeof(char));
	surnam  = (char *) malloc(1 * sizeof(char));
	while (1) {
	if (t==0){
		printf("Add a new employee\n");
		printf("Please enter his/her name\n");
		scanf("%s",nam);
		printf("Please enter his/her surname\n");
		scanf("%s",surnam);
		printf("Please enter his/her salary\n");
		scanf("%d",&sal);
		printf("Please enter his/her phone number\n");
		scanf("%ld",&pho);
		list_head = create_node(nam,surnam,sal,pho,NULL);
		printf("Employee added");
		t++;
	}
	else
	{	printf("What do you want to do?\n");
		printf("1 for adding a new employee\n");
		printf("2 for printing out the list\n");
		printf("3 for quiting the program\n");
		scanf("%d",&n);
		if (n==1){
		printf("Please enter his/her name\n");
		scanf("%s",nam);
		printf("Please enter his/her surname\n");
		scanf("%s",surnam);
		printf("Please enter his salary\n");
		scanf("%d",&sal);
		printf("Please enter his phone number");
		scanf("%ld",&pho);
		list_head = add_to_front(list_head,create_node(nam,surnam,sal,pho,NULL));
		printf("Employee added\n");
		}
		else if (n==2){
		print_list(list_head);
		printf("List printed\n");
		}
		else if (n==3){
		break;
		}
	}
	}
	free_mem(list_head);
	return 0;
}




