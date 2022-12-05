int addition (int a, int b) {
	return a + b ;
}
int Soustraction (int a, int b) {
	return a - b ;
}
double DivisionDecimal (int a, int b) {
	return (double) (a / b );
}
double DivisionEntier (int a, int b) {
	return a / b ;
}
int Puissance (int a, int e) {
	int r = 1;
	if(e==0){
		return 1; 
	}else if(a==0){
		return 0
	}else{
		for(int = 1, i<=e; ++i){
			r = r * a;
		}
		return r;
	}
}
int Fibonacci (int n) {
	int c = 2;
	int f1 = 1
	int f2 = 0;
	int r = 0;
	while(c < n) {
		r = f1 + f2;
		f1 = f2;
		f2 = r;
		++c;
	}
	return r;
}

