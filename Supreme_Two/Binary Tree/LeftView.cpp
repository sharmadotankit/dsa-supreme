#include<iostream>
#include<vector>
#include<queue>

using namespace std;


class Node{
  public:
	int data;
	Node* left;
	Node* right;

	Node(int val) {
	  this->data = val;
	  this->left = NULL;
	  this->right = NULL;
	}
};

Node* createTree(){
    cout<<"Enter the value for Node:";
    int val ;
    cin>>val;

    if(val==-1){
        return NULL;
    }


    Node* root = new Node(val);

    cout<<"Entering in the left of: "<<val<<endl;
    root->left = createTree();

    cout<<"Entering in the right of: "<<val<<endl;
    root->right = createTree();
    return root;
}


void levelOrderTraversal(Node* root) {
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	//asli traversal start krete h 

	while(!q.empty()) {
		Node* front = q.front();
		q.pop();

		if(front == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			//valid node wala case
			cout << front->data << " ";

			if(front->left != NULL) {
				q.push(front->left);
			}
			if(front->right != NULL) {
				q.push(front->right);
			}
		}
	}
}


void printLeftView(Node* root,int level,vector<int>& leftView){
    if(root==NULL){
        return;
    }

    if(level==leftView.size()){
        leftView.push_back(root->data);
    }

    printLeftView(root->left,level+1,leftView);
    printLeftView(root->right,level+1,leftView);
}

void printRightView(Node* root,int level,vector<int>& rightView){
    if(root==NULL){
        return;
    }

    if(level==rightView.size()){
        rightView.push_back(root->data);
    }

    printRightView(root->right,level+1,rightView);
    printRightView(root->left,level+1,rightView);
    
}




int main(){
    Node* root = createTree();
    // 10 20 40 -1 -1 50 70 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
    cout<<root;
    levelOrderTraversal(root);
    vector<int> leftView;
    printLeftView(root,0,leftView);

    cout<<"Print left view";
    for(int i=0;i<leftView.size();i++){
        cout<<leftView[i]<<" ";
    }

    // vector<int> rightView;
    // printRightView(root,0,rightView);
    //  cout<<"Print right view";
    // for(int i=0;i<rightView.size();i++){
    //     cout<<rightView[i]<<" ";
    // }


    return 0;
}