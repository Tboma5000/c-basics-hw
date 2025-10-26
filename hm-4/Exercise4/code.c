#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int age;
    float gpa;
    struct Student *next;
    struct Student *prev;
};

struct Student *addToEnd(struct Student *root, char *name, int age, float gpa) {
    struct Student *node = malloc(sizeof(struct Student));
    struct Student *p = root;

   	while (p->next) {
      	 p = p->next;
   	 }
	if (!p->prev) {
	  strcpy(root->name, name);
   	  root->age = age;
 	  root->gpa = gpa;
	  root->next = NULL;
	  root->prev = root;  
	} else {
	   strcpy(node->name, name);
 	   node->age = age;
 	   node->gpa = gpa;
 	   node->next = NULL;
	
	
    p->next = node;
	node->prev = p;
	}
    return root;
}

void findByName(struct Student *root) {
	char name[20];
	printf("Enter a name of student: \n");
	scanf(" %s", name);
	printf("\n");
 	for (struct Student *p = root; p; p = p->next) {
		if (name[0] == p->name[0]) {
			for (int i=1; i<strlen(name); i++) {
				if (name[i] == p->name[i]) {
					continue;
				} else {
					return;
				}
			}
       			printf("%s age: %d   gpa: %f \n", p->name, p->age, p->gpa);
		}
	}
}

void printList(struct Student *root) {
    for (struct Student *p = root; p; p = p->next) {
        printf("%s age: %d   gpa: %f \n", p->name, p->age, p->gpa);
    }
}

void freeList(struct Student *root) {
    while (root) {
        struct Student *to_remove = root;
        root = root->next;
        free(to_remove);
    }
}

void students(struct Student *root) {
	printf("To exit enter x\n");
	for (struct Student *p = root; p;) {
		char choose = ' ';
		printf("Do you want to see previos or next student?(p/n): \n");
		scanf(" %c", &choose);
		printf("\n");
		if (choose == 'x') {
			break;
		} else if (choose == 'p' && p->prev) {
			p = p->prev;			
       			printf("%s age: %d   gpa: %f \n", p->name, p->age, p->gpa);
		} else if (choose == 'n' && p->next) {
			p = p->next;			
       			printf("%s age: %d   gpa: %f \n", p->name, p->age, p->gpa);
		} else if (choose == 'n' && !p->next) {
			printf("It`s end of list\n");
			continue;
		} else if (choose == 'p' && !p->prev) {
			printf("It`s end of list\n");
			continue;
		} else {
			printf("Wrong answer\n");
			continue;
		}
		printf("\n");
	}
}

int main(void) {
    // fix this
    struct Student *list = malloc(sizeof(struct Student));
    list = addToEnd(list, "Jozef", 20, 85.3);
    list = addToEnd(list, "Alex", 23, 92.3);
    list = addToEnd(list, "Andreas", 25, 95.3);
    list = addToEnd(list, "Michael", 19, 84.3);

    printf("Students list: ");
    printList(list);

    // TODO: findBy name
	findByName(list);
    // TODO: make relation to previous value
	students(list);	

    freeList(list);

    return 0;
}
