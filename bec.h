#ifndef _bec_h_
#define _bec_h_

typedef struct Info {
        int info[4];
        struct Info *next;
} Info;

typedef struct Tree{
        int key[4];
        struct Tree *sub[5];
        Info *info;
        int infosize[4];
        struct Tree *parent;
        int size;
} Tree;


void add(Tree **, Tree **, int, int, Tree *);

void split(Tree **, Tree *);

void show(Tree *, int);

void clearn(Tree **);

void show0(Tree *);

void del(Tree **, int);

Tree *find(Tree *, int, Tree **);

void help(Tree *);

Tree **splitDelpreLast(Tree **, int);

int parf(Tree *, Tree **);

void pereform(Tree **);

void delLeaf1(Tree **, Tree **, Tree *, int, int);

Tree *SpecialFindBec(Tree *tree);

void BypassFunc(Tree *tree);

#endif
