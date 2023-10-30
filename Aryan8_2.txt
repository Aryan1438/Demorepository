#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int hight;
    int width;
    int lenght;
    
    
}

typedef struct box box;

int get_volume(box b) {
	
    return ((boxhight)*(box width)*(box lenght));
    
}

int is_lower_than_max_height(box b) {
	
    int check=0;
    if(b.hight<MAX_HIGHT)
    return check=1;
    else {
    return check=0;
    }
    
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}