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
int compare_areas(const void *a, const void *b) {
    triangle *triangleA = (triangle *)a;
    triangle *triangleB = (triangle *)b;
    
    // Calculate semi-perimeter
    double sA = (triangleA->a + triangleA->b + triangleA->c) / 2.0;
    double sB = (triangleB->a + triangleB->b + triangleB->c) / 2.0;
    
    // Calculate areas
    double areaA = sqrt(sA * (sA - triangleA->a) * (sA - triangleA->b) * (sA - triangleA->c));
    double areaB = sqrt(sB * (sB - triangleB->a) * (sB - triangleB->b) * (sB - triangleB->c));
    
    // Compare areas
    if (areaA < areaB) return -1;
    if (areaA > areaB) return 1;
    return 0;
}

// Function to sort triangles by area
void sort_by_area(triangle *tr, int n) {
    qsort(tr, n, sizeof(triangle), compare_areas);
}

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
