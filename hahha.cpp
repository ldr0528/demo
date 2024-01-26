#include<iostream>

const int MAX_SIZE = 100;

struct SeqList{
	int data[MAX_SIZE];
	int length;
};

void initSeqList(SeqList &L){
	L.length = 3;
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
}

bool insertElement(SeqList& L,int position,int value){
	if(position<1||position>L.length+1||L.length == MAX_SIZE)
	{
		return false;
	}
	
	for(int i=L.length-1;i>=position-1;i--)
	{
		L.data[i+1]=L.data[i];
	}
	
	L.data[position-1]=value;
	L.length++;
}

bool deleteElement(SeqList &L,int position){
	if(position<1||position>L.length){
		return false;
	}
	
	for(int i=position-1;i<L.length-1;i++)
	{
		L.data[i]=L.data[i+1];
	}
	
	return true;
}

void printSeqList(const SeqList& L){
	for(int i=0;i<L.length;i++)
	{
		std::cout.width(3);
		std::cout<<L.data[i];
	}
}

int main()
{
	SeqList L;
	initSeqList(L);
	
	int insertValue,insertPosition,deletePosition;
	
	// 读取要插入的元素和位置
    std::cin >> insertValue >> insertPosition;
	
	if(!insertElement(L,insertPosition,insertValue))
	{
		std::cout<<"false"<<std::endl;
	}
	
	printSeqList(L);
	
	// 读取要删除的位置
    std::cin >> deletePosition;
	
	if (!deleteElement(L, deletePosition)) {
        std::cout << "false" << std::endl;
        return 0;
    }
    
    // 输出顺序表
    printSeqList(L);

    return 0;
}



