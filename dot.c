double dot(double a[], double b[], int length) {
	int i;
	double sum=0;   
	for (i=0; i< length; i++) { 
			sum+=a[i]*b[i];
	}
	return sum;
	}
