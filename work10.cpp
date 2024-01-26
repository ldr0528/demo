#include <iostream>

const int MAX_SIZE = 100;

struct SeqList {
    int data[MAX_SIZE];
    int length;
};

// ��ʼ��˳���
void initSeqList(SeqList& seqList) {
    seqList.length = 3;
    seqList.data[0] = 1;
    seqList.data[1] = 2;
    seqList.data[2] = 3;
}

// ����Ԫ�ص�ָ��λ��
bool insertElement(SeqList& seqList, int position, int value) {
    if (position < 1 || position > seqList.length + 1 || seqList.length == MAX_SIZE) {
        return false; // λ�ò��Ϸ���˳�������
    }

    // ����ƶ�Ԫ���ڳ�����λ��
    for (int i = seqList.length - 1; i >= position - 1; i--) {
        seqList.data[i + 1] = seqList.data[i];
    }

    // ������Ԫ��
    seqList.data[position - 1] = value;
    seqList.length++;

    return true;
}

// ɾ��ָ��λ�õ�Ԫ��
bool deleteElement(SeqList& seqList, int position) {
    if (position < 1 || position > seqList.length) {
        return false; // λ�ò��Ϸ�
    }

    // ��ǰ�ƶ�Ԫ�ظ���ɾ��λ��
    for (int i = position - 1; i < seqList.length - 1; i++) {
        seqList.data[i] = seqList.data[i + 1];
    }

    seqList.length--;

    return true;
}

// ���˳���
void printSeqList(const SeqList& seqList) {
    for (int i = 0; i < seqList.length; i++) {
		std::cout.width(3); // ���ÿ��Ϊ3
        std::cout << seqList.data[i];
    }
    std::cout << std::endl;
}

int main() {
    SeqList seqList;
    initSeqList(seqList);

    int insertValue, deletePosition;

    // ��ȡҪ�����Ԫ�غ�λ��
    std::cin >> insertValue;

    // ����Ԫ��
    if (!insertElement(seqList, 2, insertValue)) {
        std::cout << "false" << std::endl;
        return 0;
    }

    // ���˳���
    printSeqList(seqList);

    // ��ȡҪɾ����λ��
    std::cin >> deletePosition;

    // ɾ��Ԫ��
    if (!deleteElement(seqList, deletePosition)) {
        std::cout << "false" << std::endl;
        return 0;
    }

    // ���˳���
    printSeqList(seqList);

    return 0;
}

