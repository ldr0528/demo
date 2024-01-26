#include <iostream>

const int MAX_SIZE = 100;

struct SeqList {
    int data[MAX_SIZE];
    int length;
};

// 初始化顺序表
void initSeqList(SeqList& seqList) {
    seqList.length = 3;
    seqList.data[0] = 1;
    seqList.data[1] = 2;
    seqList.data[2] = 3;
}

// 插入元素到指定位置
bool insertElement(SeqList& seqList, int position, int value) {
    if (position < 1 || position > seqList.length + 1 || seqList.length == MAX_SIZE) {
        return false; // 位置不合法或顺序表已满
    }

    // 向后移动元素腾出插入位置
    for (int i = seqList.length - 1; i >= position - 1; i--) {
        seqList.data[i + 1] = seqList.data[i];
    }

    // 插入新元素
    seqList.data[position - 1] = value;
    seqList.length++;

    return true;
}

// 删除指定位置的元素
bool deleteElement(SeqList& seqList, int position) {
    if (position < 1 || position > seqList.length) {
        return false; // 位置不合法
    }

    // 向前移动元素覆盖删除位置
    for (int i = position - 1; i < seqList.length - 1; i++) {
        seqList.data[i] = seqList.data[i + 1];
    }

    seqList.length--;

    return true;
}

// 输出顺序表
void printSeqList(const SeqList& seqList) {
    for (int i = 0; i < seqList.length; i++) {
		std::cout.width(3); // 设置宽度为3
        std::cout << seqList.data[i];
    }
    std::cout << std::endl;
}

int main() {
    SeqList seqList;
    initSeqList(seqList);

    int insertValue, deletePosition;

    // 读取要插入的元素和位置
    std::cin >> insertValue;

    // 插入元素
    if (!insertElement(seqList, 2, insertValue)) {
        std::cout << "false" << std::endl;
        return 0;
    }

    // 输出顺序表
    printSeqList(seqList);

    // 读取要删除的位置
    std::cin >> deletePosition;

    // 删除元素
    if (!deleteElement(seqList, deletePosition)) {
        std::cout << "false" << std::endl;
        return 0;
    }

    // 输出顺序表
    printSeqList(seqList);

    return 0;
}

