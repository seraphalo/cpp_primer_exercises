/**
 * Very interesting.
 * If I return -1 in main, command `echo $?` gives me 255.
 * If I return -2, then it gives me 254.
 * I didn't know this.
 */

int main(){
	return -1;
}