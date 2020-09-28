#include <stdio.h>

struct daftar_menu{
	char nama[50];
	int harga;
};
typedef struct daftar_menu daftar_menu;

int main() {
	int a,b;
	daftar_menu list[a];
	
	printf("Masukkan Banyak Daftar Menu : ");
	scanf(" %d",&a);
	
	for(b=0;b<a;b++){
		printf("\nMakanan ke - %d\n",b+1);
		printf("\t- Nama Makanan : ");
		scanf(" %[^\n]%*c",&list[b].nama);
		printf("\t- Harga : ");
		scanf("%d",&list[b].harga);
	}
	
		printf("\nData yang berhasil diinput \n");
	
	for(b=0;b<a;b++){
		printf("%d. \t%s = \t%d\t \n",b+1,list[b].nama,list[b].harga);
	
	}
		printf("\nSelesai");
		
	return 0;
}
