struct node {
  int val;
  struct node *next;
};

int addTwoNumbers(struct node* l1, struct node* l2, struct node** result) {
  int carry = 0;
  struct node *head = NULL;
  struct node *curr = NULL;
  while (l1 != NULL || l2 != NULL) {
    int sum = 0;
    if (l1 != NULL) {
     //insert code here
    }
    if (l2 != NULL) {
      sum += l2->val;
      l2 = l2->next;
    }
    sum += carry;
    carry = sum / 10;
    sum = sum % 10;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    // insert code here
    if (head == NULL) {
      head = newNode;
    } else {
      curr->next = newNode;
    }
    curr = newNode;
  }
  if (carry > 0) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->val = carry;
    newNode->next = NULL;
    curr->next = newNode;
  }
  *result = head;
  return 0;
}
int main () {
  struct node *l1 = NULL;
  struct node *l2 = NULL;
  struct node *result = NULL;
  addTwoNumbers(l1, l2, &result);
  return 0;
}