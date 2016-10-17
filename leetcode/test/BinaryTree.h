#pragma once

template <class T>
struct SNode
{
	T Data;
	SNode<T>* LChild;
	SNode<T>* RChild;

	SNode() : LChild(NULL), RChild(NULL){}
	SNode(const T &vData, SNode* vLChild=NULL, SNode* vRChild=NULL) : Data(vData), LChild(vLChild), RChild(vRChild){}
	~SNode() {}
};

template <class T>
class CBinaryTree
{
public:
	CBinaryTree();
	~CBinaryTree();

	bool search(T vData, T vNewData);
	bool insert(T vData);
	SNode<T>* constructBinaryTree();

private:
	SNode<T>* m_Root;
};






