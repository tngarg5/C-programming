//Sort the triangles by area of triangle


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    
    int area[n];
    int sorted[n];
    for(int i =0; i<n; i++){
        int p = (tr[i].a+tr[i].b+tr[i].c)/2;
        area[i] = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }   
    
    for(int i=1; i<n; i++){
        
        int key = area[i];
        int x =tr[i].a;
        int y =tr[i].b;
        int z =tr[i].c;
        
        int j;
        j = i-1;
        
        while(j>=0 && area[j]>key){
            area[j+1] = area[j];
            tr[j+1].a = tr[j].a;
            tr[j+1].b = tr[j].b;
            tr[j+1].c = tr[j].c;
            j = j-1;
        }
        area[j+1]=key;
        tr[j+1].a = x;
        tr[j+1].b = y;
        tr[j+1].c = z;
        
    } 
    }

	/**
	* Sort an array a of the length n
	*/


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
