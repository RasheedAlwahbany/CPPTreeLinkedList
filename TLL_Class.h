#include <iostream>
#include "Queue.h"
using namespace std;
template <class T>
class Nodes{
	public:
		int info;
		Nodes<T>* left;
		Nodes<T>* right;
		Nodes(){
			right=left=0;
		}
		Nodes(int data,Nodes<T>* n=0,Nodes<T>* p=0){
			info=data;
			right=n;
			left=p;
		}
};
template <class T>
class TLL{
	public:
		Nodes<T>* root;
		T *arr=new T[counter];
		//T *a=new T[counter];
		T counter,g,leaf,nonleaf;
		TLL(){
			root=0;
			counter=0;
			g=leaf=nonleaf=0;
		}
		bool isempty(){
			return root==0;
		}
		void addtotree(int data){
			if(!isempty()){
				Nodes<T>* tmp=root;
				Nodes<T>* parent=0;
				while(tmp!=0){
					parent=tmp;
				if(data<tmp->info)
					tmp=tmp->left;
				else
				tmp=tmp->right;
		
			}
			if(data<parent->info)
			parent->left=new Nodes<T>(data);
			else
			parent->right=new Nodes<T>(data);
			}
			else
			root=new Nodes<T>(data);
			cout<<"Add successfully."<<endl;
			if(g==0)
			++counter;
		}
		T recount(){
			return counter;
		}
	void visit(Nodes<T>* tmp){
			cout<<tmp->info<<endl;
				
		}
		void orderstree(){
			if(!isempty()){
				root=0;				
				T num1;
				g=1;
				T k=counter/2;
				num1=arr[g];
				for(int i=0;i<=counter;i++){
					if(arr[i]!=arr[k]){
					addtotree(num1);
					num1=arr[i];	
				}
				}
			}
		}
	
		void dislpays(){
			if(!isempty()){
				cout<<"The items in array are :"<<endl;
				int i=0;
				while(i<counter){
				cout<<arr[i]<<endl;
				++i;
			}
		}
		else 
		cout<<"The tree is empty."<<endl;
		}
/*		void depthfirst(){
			if(!isempty()){
				Queue<T>  get;
				Nodes<T>* tmp=root;
				if(tmp!=0)
				{
					get.equeue(tmp->info);
				while(tmp!=0){
					//tmp=get.pop();
					tmp=get.dequeue();
					visit(tmp);
					if(tmp->left!=0)
					{
						get.enqueue(tmp->left);
					}
					 if(tmp->right!=0){
						get.enqueue(tmp->right);
					}
				}
				}
			}
		}

*/
		void preorder(Nodes<T>* tmp){
			if(!isempty()){
			if(tmp!=0){
				visit(tmp);
				preorder(tmp->left);
				preorder(tmp->right);
			}
		}
		else
		cout<<"The tree is empty."<<endl;
		}
		void inorder(Nodes<T>* tmp){
			if(!isempty()){
			if(tmp!=0){
				inorder(tmp->left);
				visit(tmp);
				inorder(tmp->right);
			}
		}
		else 
		cout<<"The tree is empty."<<endl;
		}
	void postorder(Nodes<T>* tmp){
		if(!isempty()){
		if(tmp!=0){
			postorder(tmp->left);
			postorder(tmp->right);
			visit(tmp);
		}
		}
		else 
		cout<<"The tree is empty."<<endl;
	}
/*	int counts=0;
bool searchtree(Nodes<T>* tmp)
	{
	
		if(tmp!=0){
		
		searchtree(tmp->left);
		arr[counts]=tmp->info;
		searchtree(tmp->right);
	}
	else{
		bool is=true;
		for(int i=0;i<counts;i++){
			if(arr[i]<arr[i+1])
			is=true;
			else 
			is =false;
		}
		return is;
	}
}*/

	void deletetree(Nodes<T>* tmp){
			if(tmp!=0){
			deletetree(tmp->left);
					delete tmp;
			deletetree(tmp->right);
			if(tmp->info==root->info)
			root=0;
			if(counter>0)
			counter--;
		}
	}
void deletenode(){
	if(!isempty()){
		int data=root->info;
		Nodes<T>* tmp=root;
		Nodes<T>* tmp2;
		while(tmp!=0){
			if(root->info==data)
				tmp2=tmp;
				tmp=tmp->right;
				tmp->left=tmp2->left;
				root=tmp;
				delete tmp2;
		}
	cout<<"Clear successfully."<<endl;
	}
	
}

		bool issearch(Nodes<T>* tmp){
			if(!isempty()){
			if(tmp!=0){
				static bool is=true;
				issearch(tmp->left);
				if(tmp->right!=0&&tmp->left!=0){
				if(tmp->info<tmp->right->info&&tmp->left->info<tmp->info)
				is=true;
				else{
				is=false;
				return is;
			}
			}
				issearch(tmp->right);
				return is;
			}
		}
		else 
		cout<<"The tree is empty."<<endl;
		return false;
		}
		void addtoarray(Nodes<T>* tmp){
			static int i=0;
			if(!isempty()){
			if(tmp!=0){
				addtoarray(tmp->left);
				arr[i]=tmp->info;
				++i;
				addtoarray(tmp->right);
				}
			}
			else 
			cout<<"The tree is empty."<<endl;
		}
		bool search(T data){
			if(!isempty()){
				Nodes<T>* tmp=root;
				while(tmp!=0){
					if(tmp->info==data)
					return true;
					else if(tmp->info>data){
						tmp=tmp->left;
					}
					else
					tmp=tmp->right;
				}	
			}
			return false;
		}
/*		void array(Nodes<T>* p,T* a,T i){
	//		if(i<=counter){
			array(p->left,a,i);
			a[i]=p->info;
			i++;
			array(p->right,a,i);
		}
	//}
*/
	int releaf(){
		return leaf;
	}
	int renonleaf(){
		return nonleaf;
	}
void leaftree(Nodes<T>* tmp){
	if(tmp!=0){
		if(tmp->left==0&&tmp->right==0)
		++leaf;
		else{
			leaftree(tmp->left);
			++nonleaf;
			leaftree(tmp->right);
		}
	}
}
};
