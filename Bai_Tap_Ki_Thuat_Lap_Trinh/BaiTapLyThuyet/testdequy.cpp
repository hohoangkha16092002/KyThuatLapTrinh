float tongS(int n){
	if(n==1) return 1;
	else return 
}
float tongS1(int n){
	float tong=0;
	int s=0;
	for(int i=0;i<=n;i++){
		s+=i;
		tong+=(float)1/(s);
	}
}
int main(){
	cout << tongS1(3);
}
