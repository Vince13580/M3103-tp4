#ifndef NODE_HPP
#define NODE_HPP

#include <memory>

template <typename T>
class CNode
{
private:
    T m_Data;
    std::shared_ptr<CNode>m_LC ;
    std::shared_ptr<CNode>m_RC ;
public:
    //constructor
    CNode (const T &  val = T(), const std::shared_ptr<CNode> & ptrPrev = nullptr, const std::shared_ptr<CNode> & ptrNext = nullptr);
    //destructor
    ~CNode ();

    //getter / setter
    const T &GetData () const;
    const std::shared_ptr<CNode> & GetDroite () const;
    const std::shared_ptr<CNode> & GetGauche () const;
    void SetData (const T & val);
    void SetNextNode (const std::shared_ptr<CNode> &);
    void SetPrevNode (const std::shared_ptr<CNode> &);
};


template <typename T>
CNode<T>::CNode (const T & val, const std::shared_ptr<CNode> & ptrPrev, const std::shared_ptr<CNode> & ptrNext ) :
    m_Data (val),m_LC  (ptrPrev),m_RC  (ptrNext)
{
}

template <typename T>
CNode<T>::~CNode ()
{
    //deletem_RC ;
    //cout << m_Data << endl;
}

template <typename T>
const T & CNode<T>::GetData () const
{
    return m_Data;
}

template <typename T>
const std::shared_ptr<CNode<T>> &CNode<T>::GetGauche() const
{
    return m_LC ;
}

template <typename T>
const std::shared_ptr<CNode<T>> & CNode<T>::GetDroite () const
{
    return m_RC ;
}


template <typename T>
void CNode<T>::SetData (const T & val)
{
    m_Data = val;
}

template <typename T>
void CNode<T>::SetNextNode (const std::shared_ptr<CNode> & ANode)
{
   m_RC  = ANode;
}

template <typename T>
void CNode<T>::SetPrevNode(const std::shared_ptr<CNode> & ANode)
{
   m_LC  = ANode;
}

#endif // NODE_HPP
