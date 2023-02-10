#include <iostream>
#include "TLL_Class.h"
using namespace std;
int main(){
	int data,choose;
	TLL<int> get;
while(true){
	cout<<"Choose from bellow.\n1) Add to tree.\n2) Delete from tree.\n3) Display pre order.\n4) Display in order."<<endl;
	cout<<"5) Display post order.\n6) Display depth first.\n7) Clear.\n8) is it search tree."<<endl;
	cout<<"9) Display in array in order.\n10) ordered tree.\n11) Delete node.\n12) Add to array.\n13) Search."<<endl;
	cout<<"14) Number of items.\n15) Full Leafs and nonleafs tree.\n16) Leafs tree.\n17) Non leafs tree."<<endl;
	cin>>choose;
	if(choose==1){
		cout<<"Enter the data :"<<endl;
		cin>>data;
		get.addtotree(data);
	}
	else if(choose==2){
		cout<<endl;
	}
	else if(choose==3){
		if(get.root!=0){
		cout<<"The item in tree are :"<<endl;
			get.preorder(get.root);	
	}
		else 
		cout<<"The tree is empty."<<endl;
	}
	else if(choose==4){
		if(get.root!=0){
		cout<<"The item in tree are :"<<endl;
			get.inorder(get.root);	
	}
		else 
		cout<<"The tree is empty."<<endl;	
	}
	else if(choose==5){
			if(get.root!=0){
		cout<<"The item in tree are :"<<endl;
			get.postorder(get.root);	
	}
		else 
		cout<<"The tree is empty."<<endl;
	}
	else if(choose==6){
		if(get.root!=0){
		cout<<"The item in tree are :"<<endl;
//		get.depthfirst();			
	}

	}
	else if(choose==7){
		get.deletetree(get.root);
	}
	else if(choose==8){
		bool is=get.issearch(get.root);
		if(is==true)
		cout<<"It's search tree."<<endl;
		else
		cout<<"Not search tree."<<endl;
	}
	else if(choose==9){
		get.dislpays();
	}
	else if(choose==10){
		get.orderstree();
	//get.array(get.root,get.arr,0);
	}
	else if(choose==11){
		get.deletenode();
	}
	else if(choose==12){
		get.addtoarray(get.root);
	}
	else if(choose==13){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
		if(get.search(data))
		cout<<"It's found."<<endl;
		else
		cout<<"Not found."<<endl;
	}
	else if(choose==14){
		cout<<"The number of items in Tree are : "<<get.recount()<<endl;
	}
	else if(choose==15){
		get.leaftree(get.root);
	}
	else if(choose==16){
		cout<<"The leafs tree numbers are :"<<get.releaf()<<endl;
	}
	else if(choose==17){
		cout<<"The non leafs tree numbres are :"<<get.renonleaf()<<endl;
	}
}
system("pause");
	return 0;
}
