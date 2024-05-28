#include<stdio.h>
#include<stdlib.h>

typedef struct mahasiswa{ // untuk membuat tipe data msiswa yang dalamnya terdiri dari nrp,nama,umur,dan email

	int nrp;
//	char nama [100];
//	int umur;
//	char email [100];
	msiswa* data;
	struct mahasiswa* next;
	struct mahasiswa* prev;
} msiswa;
 
typedef struct{ // untuk membuat tipe data lilis yang menunjukan head dan tail suatu data

	msiswa* head;
	msiswa* tail;
}lilis; 

struct mahasiswa* GetNewNode(msiswa x) {
	msiswa* box=(msiswa*) malloc(sizeof(msiswa));
	box->data = x;
	box->prev = NULL;
	box->next = NULL;
	return box;
}


void InsertAtHead(msiswa x,lilis** sen) {
	msiswa* box = GetNewNode(x);
	if(head == NULL) {
		head = box;
		return;
	}
	head->prev = box;
	box->next = head; 
	head = box;
}

//Inserts a Node at tail of Doubly linked list
//void InsertAtTail(int x) {
//	struct Node* temp = head;
//	struct Node* newNode = GetNewNode(x);
//	if(head == NULL) {
//		head = newNode;
//		return;
//	}
//	while(temp->next != NULL) temp = temp->next; // Go To last Node
//	temp->next = newNode;
//	newNode->prev = temp;
//}
//
////Prints all the elements in linked list in forward traversal order
//void Print() {
//	struct Node* temp = head;
//	printf("Forward: ");
//	while(temp != NULL) {
//		printf("%d ",temp->data);
//		temp = temp->next;
//	}
//	printf("\n");
//}

//Prints all elements in linked list in reverse traversal order. 
void ReversePrint(lilis*sen) {
	msiswa* temp = sen -> head;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main() {

	/*Driver code to test the implementation*/
	head = NULL; // empty list. set head as NULL. 
	
	// Calling an Insert and printing list both in forward as well as reverse direction. 
	InsertAtHead(2);  ReversePrint();
	InsertAtHead(4);  ReversePrint();
	InsertAtHead(6);  ReversePrint();
	InsertAtHead(8);  ReversePrint();
	
}
