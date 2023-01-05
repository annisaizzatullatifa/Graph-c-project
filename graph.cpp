#include "graph.h"

void createGraph(Graph &G){
    first(G) = NULL;
}

adrNode newNode(char X){
    adrNode p = new Node;

    info(p) = X;
    child(p) = NULL;
    next(p) = NULL;
    return p;
}

void addNode(Graph &G, adrNode p){
    if(first(G) == NULL){
        first(G) = p;
    }else{
        adrNode n;
        n = first(G);
        while(next(n) != NULL){
            n = next(n);
        }
        next(n) = p;
    }
}
adrNode findNode (Graph G, char X){
    if(first(G) == NULL){
        return NULL;
    }else{
        adrNode n;
        n = first(G);
        while(n != NULL){
            if(info(n) == X){
                return n;
            }
            n = next(n);
        }
    }
}
void addEdge(Graph &G, char x, char y){
   if (findNode(G, x) == NULL){
    cout << "data tidak ada" << endl;
   }else{
        if(child(findNode(G, x)) == NULL){
            child(findNode(G,x))= newNode(y);
        }else{
            adrNode n;
            n = child(findNode(G,x));
            while(next(n) != NULL){
                n = next(n);
            }
            next(n) = newNode(y);
        }
   }
}
bool isConnected(Graph G, char x, char y){
    if(findNode(G,x)== NULL){
        cout << "data tidak ada" << endl;
        return false;
    }else{
        adrNode cekAnak;
        cekAnak = child(findNode(G,x));
        while(cekAnak != NULL){
            if(info(cekAnak) == y){
            return true;
            }
            cekAnak = next(cekAnak);
        }
        return false;
    }
}
void printGraph(Graph &G){
    if(first(G) == NULL){
        cout << "tidak ada data" << endl;
    }else{
        adrNode n;
        n = first(G);
        while(n != NULL){
            cout << "node" << info(n)<< ":";
            adrNode n_Anak = child(n);
            while(n_Anak != NULL){
                cout << " - " << info(n_Anak);
                n_Anak = next(n_Anak);
            }
            cout << endl;
            n = next(n);
        }
    }
}
