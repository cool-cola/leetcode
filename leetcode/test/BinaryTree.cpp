#include "BinaryTree.h"

template <class T>
CBinaryTree<T>::CBinaryTree()
{
	m_Root = NULL;
}

template <class T>
CBinaryTree<T>::~CBinaryTree()
{
	
}

//************************************************************************
//Function
template <class T>
void CBinaryTree<T>::setRoot(SNode* vRoot) const
{
	m_Root = vRoot;
}

//************************************************************************
//Function
template <class T>
SNode<T>* CBinaryTree<T>::constructBinaryTree()
{

}

//************************************************************************
//Function
template <class T>
bool CBinaryTree<T>::insert(T vData)
{
	if (m_Root == NULL)
	{

	}


}

//************************************************************************
//Function
template <class T>
bool CBinaryTree<T>::search(T vData, T vNewData)
{
	if (m_Root == NULL) return false;

	if (m_Root->Data == vData) 
	{
		m_Root->Data = vNewData;
		return true;
	}

	search(m_Root->LChild, vData, vNewData);
	search(m_Root->RChild, vData, vNewData);
}

