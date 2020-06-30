#include <stdio.h>
#include <malloc.h>

struct BST{
    int data;
    struct BST *right;
    struct BST *left;
    int height; //For AVL tree
};

typedef struct BST BST;

BST *addNode(BST *root, int data);
BST *deleteNode(BST *root, int data);
BST *findMinNode(BST *root);
int numberOfLeaf(BST *root);

BST *avlInsert(BST *root, int data);
int max(int x, int y);
int avlHeight(BST *root);
int getBalance(BST *root);
BST *rightRotate(BST *root);
BST *leftRotate(BST *root);

int numberOfNodes(BST *root);
int heightOfBST(BST *root);
void traverseTreeInfix(BST *root);
void traverseTreePrefix(BST *root);
void traverseTreePostfix(BST *root);

int main() {
    int data=0, delete=0;

    BST *root = NULL;
    BST *root2 = NULL;


    /*
    printf("Cikmak icin -1 girin \n");
    while(data != -1){
        printf("Agaca deger girin : \n");
        scanf("%d",&data);

        if(data == -1)
            break;

        root = addNode(root, data);
    }
    */
    root = avlInsert(root, 10);
    root = avlInsert(root, 20);
    root = avlInsert(root, 30);
    root = avlInsert(root, 40);
    root = avlInsert(root, 59);
    root = avlInsert(root, 25);



    printf("Infix   : ");
    traverseTreeInfix(root);
    printf("\nPrefix  : ");
    traverseTreePrefix(root);

    printf("\n\nNumber Of Leaf = %d\n",numberOfLeaf(root));

    root2 = addNode(root2, 57);
    root2 = addNode(root2, 45);
    root2 = addNode(root2, 75);
    root2 = addNode(root2, 50);
    root2 = addNode(root2, 60);
    root2 = addNode(root2, 87);

    printf("\nMin value : %d \n", findMinNode(root2)->data);

    printf("Give the value that you want to delete : \n");
    scanf("%d",&delete);
    deleteNode(root2, delete);

    printf("Infix   : ");
    traverseTreeInfix(root2);
    printf("\nPrefix  : ");
    traverseTreePrefix(root2);
    printf("\nPostfix : ");
    traverseTreePostfix(root2);

    printf("\nNumber of Nodes : %d", numberOfNodes(root2));

    printf("\nHeight of the TREE : %d", heightOfBST(root2));

    return 0;
}

BST *addNode(BST *root, int data){

    if(root == NULL){
        root = (BST *)malloc(sizeof(BST));

        root->left = NULL;
        root->right = NULL;
        root->data = data;
        root->height = 0;

        return root;
    }

    if(root->data < data)
        root->right = addNode(root->right, data);

    else
        root->left = addNode(root->left, data);
}

void traverseTreeInfix(BST *root){

    if(root == NULL)
        return;

    traverseTreeInfix(root->left);
    printf("%d ", root->data);
    traverseTreeInfix(root->right);
}

void traverseTreePrefix(BST *root){

    if(root == NULL)
        return;

    printf("%d ", root->data);

    traverseTreePrefix(root->left);
    traverseTreePrefix(root->right);
}

void traverseTreePostfix(BST *root){

    if(root == NULL)
        return;

    traverseTreePostfix(root->left);
    traverseTreePostfix(root->right);

    printf("%d ",root->data);
}

int numberOfNodes(BST *root){

    if(root==NULL)
        return 0;

    else
        return numberOfNodes(root->left) + numberOfNodes(root->right) + 1;
}

int heightOfBST(BST *root){

    if(root==NULL)
        return -1;

    else{
        int lHeight=0, rHeight=0;

        lHeight = heightOfBST(root->left);
        rHeight = heightOfBST(root->right);

        if(lHeight > rHeight)
            return lHeight + 1;
        else
            return rHeight + 1;
    }
}

BST *deleteNode(BST *root, int data){

    if(root == NULL)
        return root;

    if(data < root->data)
        root->left = deleteNode(root->left, data);

    else if(data > root->data)
        root->right = deleteNode(root->right, data);

    else{
        if(root->right==NULL && root->left == NULL)
            return NULL;

        else if(root->right != NULL && root->left != NULL){

            BST *temp = findMinNode(root->right);

            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);

            return root;
        }

        else{
            if(root->right != NULL)
                return root->right; //TODO free() kullanarak node'u silmedik. Temp oluşturup silmeliyiz...
            else
                return root->left;  //TODO free() kullanarak node'u silmedik. Temp oluşturup silmeliyiz...
        }
    }
}

int max(int x, int y){

    if(x > y)
        return x;
    else
        return y;
}

BST *findMinNode(BST *root){

    if(root->left == NULL)
        return root;

    else{
        return findMinNode(root->left);
    }
}

BST *rightRotate(BST *root){

    BST * y = root->left;
    BST * T2 = y->right;

    root->left = T2;
    y->right = root;

    root->height = max(heightOfBST(root->right), heightOfBST(root->left)) + 1;
    y->height = max(heightOfBST(y->right), heightOfBST(y->left)) + 1;

    return y;
}

BST *leftRotate(BST *root){

    BST * y = root->right;
    BST * T2 = y->left;

    root->right = T2;
    y->left = root;

    root->height = max(avlHeight(root->right), avlHeight(root->left)) + 1;
    y->height = max(avlHeight(y->left), avlHeight(y->right)) + 1;

    return y;
}

int numberOfLeaf(BST *root){
    if(root == NULL)
        return 0;

    else if(root->right == NULL && root->left == NULL)
        return 1;

    else{
        return numberOfLeaf(root->left)+numberOfLeaf(root->right);
    }
}

int avlHeight(BST *root){

    if(root == NULL)
        return -1;

    return root->height;
}

int getBalance(BST *root){
    if(root == NULL)
        return 0;

    return avlHeight(root->left) - avlHeight(root->right);
}

BST *avlInsert(BST *root, int data){

    //Normal adding
    if(root == NULL)
        return addNode(root, data);

    //Normal adding for traverse
    if(data < root->data)
        root->left = avlInsert(root->left, data);
    else if(data > root->data)
        root->right = avlInsert(root->right, data);
    else//Equal keys are not allowed in BST says Oguz hodja!
        return root;

    //After we finished adding values to the TREE, we re-arrange all the nodes heights recursively.
    root->height = 1 + max(avlHeight(root->left), avlHeight(root->right));

    //Calculate the balance for all nodes and check
    int balance = getBalance(root);

    //If the balance is broken we have 4 cases:
    if(balance > 1 && data < root->left->data)
        return rightRotate(root);

    if(balance > 1 && data > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if(balance < -1 && data > root->right->data)
        return leftRotate(root);

    if(balance < -1 && data < root->right->data){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }


    return root;
}