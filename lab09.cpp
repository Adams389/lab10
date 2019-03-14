#include <iostream>
#include <string>
#include <cstandardlib>
using namespace std;

struct Node {
	Product data;
	Node *next;
};

struct Product{
	string title;
	string manufacture;
	int quantity;
	double price;
};


struct Cart {
	Node *items;	
};
void add_to_end_of_list(Product *p, (Node *) &head){
	Node *n = new Node;
	n -> data = p;
	n -> next= NULL;
	if (head == NULL){
		head = n;
	}else{
		Node *old_end_of_list = head;
		while (old_end_of_list->next != NULL){
			old_end_of_list = old_end_of_list->next;
		}
		old_end_of_list->next= n;
	}
}
		
void add_item(Item i, Cart *c, Node *inventory){
	Product *product_try_add = NULL;
	for (Node *n = inventory_head; n != NULL; n = n->next){
		if (n->data.name == i.name){
			if (n->quantity > 0){
				product_try_add = n;
			}else{
				cout<<"not enough stock"<<i.name<<endl;
				exit(1);
			}
			break;
		}
	}
}

void print_list(Node *head){
	for (Node *n = head; n != NULL; n = n->next){


int main(){
	Product orange_chicken = {"Orange Chicken", "Trader Joe's", 3, 4.5};
	Product mouse = {"Mouse", "Logitech", 1, 7.50};
	Product Lawtons_soul = {"Lawton's soul", "UCSB", 1, 0.01}

	Node *first_node = new Node;
	Node *second_node = new Node;
	Node *third_node = new Node;
	first_node->data = orange_chicken;
	second_node->data = mouse;
	third_node->data = Lawtons_soul;
	first_node->next = second_node;
	second_node ->next = third_node;
	third_node->next = NULL;
	
	Node *head_of_inventory_list= first;

	Item i = {"orange chicken"};

	Cart c;


	return 0;
}
