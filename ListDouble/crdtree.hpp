#ifndef CRDTREE_H
#define CRDTREE_H
#include <iostream>
#include <memory>

#include "node.hpp"


template <typename T>
class CRDTree
{
private:
    std::shared_ptr<CNode<T>> m_Root;

public:
    CRDTree (const T & Val){
        std::shared_ptr<CNode <T>> tmp (new CNode<T> (Val));
            m_Root = tmp;
    }
    ~CRDTree () {}


    void Show () const{
        if (!m_Root) return;
            std::cout <<m_Root->GetData();
            show(m_Root->GetGauche());
            std::cout <<m_Root->GetData();

        }
    void Add (const std::shared_ptr<CNode<T>> & ptr, const T &Val){
        if (ptr->GetGauche() = nullptr){
            std::shared_ptr<CNode <T>> tmp (new CNode<T> (Val));
                ptr.SetPrevNode();
        }
        else if (ptr->GetDroit) {
            std::shared_ptr<CNode <T>> tmp (new CNode<T> (Val));
                ptr.SetNextNode();

        }
        else{
            unsigned hasard = rand() %2;
            if (hasard =1)
                m_Root->GetGauche()->Add (ptr,m_Root);
            else
                m_Root->GetDroit()->Add (ptr,m_Root);


        }


    }



};





#endif // CRDTREE_H
