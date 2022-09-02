#include<stdio.h>
struct nut{
	int gtri;
	nut *tiep;
};
typedef nut Node;
Node *dau;

void khoitao(Node *&dau){
	dau = NULL;
}
void nhapds( Node *&dau){
	Node *p;
	Node *q;
		q=NULL;
	int tam; 
	do {
		printf("\n nhap 1 so nguyen, 0: dung: ");
		scanf("%d",&tam);
		if (tam != 0){
			p=new Node;
			p->gtri=tam;
			p->tiep=NULL;
			 if (dau==NULL)
			 	dau=p;
			 else 
			 q->tiep=p;
			 q=p;
		}
	}
	while (tam!=0);
}
void duyetlap(Node *dau)
{
	Node *p;
	p=dau;
	printf("\n");
	while (p!=NULL)
	{
		printf(" %3d ",p->gtri);
		p=p->tiep;
	}
}
int demledq(Node *dau){
	if (dau==NULL)
	return 0;
	else 
	return dau->gtri % 2 != 0 ? 1 + demledq(dau->tiep) : demledq(dau->tiep) ;
}
int sopt(Node *dau){
	int dem=0;
	Node *p = dau;
	while (p!= NULL){
		 dem++;
		 p=p->tiep;
		}
		return dem;
}
void Inkecuoi(Node *dau, int n)
{	
	int m=0;
	Node *p =dau;
	printf("\n");
	int vitri = n-1;
	while (p!=NULL)
	{
		m++;
		if(m==vitri){
			printf("\nPhan tu thu ke cuoi cua danh sach la: %d",p->gtri);
		}
		p=p->tiep;		
	}
	
}
void xoadau( Node *&dau){
	Node *p;
	if(dau!=NULL) {
		p=dau;
		dau=dau->tiep;
		delete(p);
	}
}
void xoa(Node *&dau, int X)
{
	Node *q,*p;
		q=NULL;
		if(dau!=NULL)
		{	// Tim nut mang gia tri X
			p=dau;
			while (p!=NULL && p->gtri!=X)
			{
				q=p;p=p->tiep;
			}
			if(p!=NULL) // Co nut mang gia tri la X
				if(p==dau) xoadau(dau);
				else 
				{
					q->tiep=p->tiep;
					delete p;
				}
			
		}
}
//void xoaindex(Node *&dau, int index)
//{	
//	int m=0;
//	Node *p =dau;
//	Node *q =NULL;
//	printf("\n");
//	while (p!=NULL)
//	{
//		m++;
//		if(m==index){
//			q->tiep=p->tiep;
//			delete p;
//		}
//		p=p->tiep;		
//	}
//}
//void xoa_cuoi(list &l){
//     if(l.head==NULL){
//                          return;}
//    if(l.head->link==NULL){
//        xoa_dau(l);
//                         return;}
// for(node *k=l.head;k!=NULL;k=k->link){
//
//     if(k->link==l.tall){
//       delete l.tall;
//         k->link=NULL;
//         l.tall=k;
//         return;
//     }
//}
//
//}
void xoaindex(Node *&dau, int n)//Xoa phan tu tai vi tri duoc chi dinh
 
{
    if(n<0)
        return;
    if(n==1)
        xoadau(dau); 
        Node* p=dau;
        int count=0;
        int a;
        while(p->tiep!=NULL)
        {
            p=p->tiep;
            count++;
        }
        if(count==n)
        {
        a=p->gtri;
        xoa(dau,a);
        }
}
int main(){
	khoitao(dau);
	nhapds(dau);
	printf("\nSo luong phan tu le nhap vao: %d",demledq(dau));
	Inkecuoi(dau,sopt(dau));
	xoaindex(dau,4);
	duyetlap(dau);
	//xoaIndex(dau,3);
	//xoa(dau,7);
	//duyetlap(dau);
//	if(sapxep(dau)==0) printf("\nyes");
//	else printf("\nnooo");
//	printf("\n%d",sapxep(dau));
}
