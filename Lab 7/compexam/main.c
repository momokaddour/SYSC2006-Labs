
struct int m = 0;
int mix (int n) {
	if (n==0 || n==1){
		m = 1;
		}
	else {
		m = mix(n-2);
		m = m + mix(n-1);
		}
	}
return m;

int main (void){
	int mixo = mix(20);
	printf("%d", mixo);
	}
