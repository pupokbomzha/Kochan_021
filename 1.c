void push(struct node* head, int data)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node)); //не был приведён тип указателя, который возвращает malloc()
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}

void push_test()
{
	newNode* head = build();      // вместо List -- newNode*
	push(&head, 1);               // перед head -- & 
}