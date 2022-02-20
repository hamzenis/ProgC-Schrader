/*
 * File: 12-linkedlist.c
 * Project: Einführung in C - Schrader
 * Created Date: 2022-02-01, 3:38:26 pm
 * Author: Hamzenis Kryeziu
 * E-Mail: hamzenis.kryeziu@stud.fra-uas.de
 * -----
 * Last Modified: 2022-02-20, 11:32:30 pm
 * Modified By: Hamzenis Kryeziu
 * -----
 * Copyright (c) 2022 
 * 
 * Free for use
 * -----
 * HISTORY:
 * Date              		By		Comments
 * ------------------		----	----------------------------------------------------------
 * 2022-02-20, 11:32:10 pm	H.K.	Neue Funktion
 * 2022-02-01, 3:38:26 pm	H.K.	-start-
 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
    int day;
    int month;
    int year;
    char event[80];
};

// Define structure of a node

struct LinkedListNode {
    struct Data nodedata;
    struct LinkedListNode* next;    //pointer to next node in list
};

// define NodePointer as a pointer to a node in the list
typedef struct LinkedListNode* NodePointer; //define NodePointer  of
                                            //data type struct LinkedList

NodePointer createNode() {
    //creates a new empty node

    NodePointer ptrNewNode;     // declare a node

    // allocate memory for new node
    ptrNewNode = (NodePointer)malloc(sizeof(struct LinkedListNode));

    // check if allocation of memory was successful
    if (ptrNewNode == NULL) {
        fprintf(stderr, "\nUnable to allocate memory ");
        exit(-1);
    }

    ptrNewNode->next = NULL;    // make next point to NULL
    return ptrNewNode;          //return the address of the new node
}

NodePointer addNodeEndOfList(NodePointer head,
    int year,
    int month,
    int day,
    char* event) {

    NodePointer ptrNewNode; //pointer to newly created node
    NodePointer ptrNode;    //used as pointer to nodes

    ptrNewNode = createNode();  //create new node and fill it with values
    ptrNewNode->nodedata.year = year;    // fill with values
    ptrNewNode->nodedata.month = month;
    ptrNewNode->nodedata.day = day;
    strcpy(ptrNewNode->nodedata.event, event);

    // if list is empty make node the head of list
    if (head == NULL) {
        head = ptrNewNode;     //when linked list is empty
    }
    else {
        //go to end of list
        ptrNode = head;//assign head to p
        //now traverse the list until p is the last node.
        //The last node always points to NULL.
        while (ptrNode->next != NULL) {
            ptrNode = ptrNode->next;
        }
        //Point the previous last node to the new node created.
        ptrNode->next = ptrNewNode;
    }
    return head;    // return the address of first node
}

NodePointer addNodeSort(NodePointer head,
    int year,
    int month,
    int day,
    char* event) {

    NodePointer ptrNewNode; //pointer to newly created node
    NodePointer ptrNode;    //used as pointer to nodes

    ptrNewNode = createNode();  //create new node and fill it with values
    ptrNewNode->nodedata.year = year;    // fill with values
    ptrNewNode->nodedata.month = month;
    ptrNewNode->nodedata.day = day;
    strcpy(ptrNewNode->nodedata.event, event);

    //go to end of list
    ptrNode = head;//assign head to p
    //now traverse the list until p is the last node.
    //The last node always points to NULL.
    while (ptrNode->next != NULL) {
        if (ptrNode->nodedata.year >= ptrNewNode->nodedata.year && ptrNode->nodedata.month >= ptrNewNode->nodedata.month && ptrNode->nodedata.day >= ptrNewNode->nodedata.day) {
            printf("TESTTESTTEST");
            break;
        }
        ptrNode = ptrNode->next;
    }

    NodePointer temp;
    NodePointer temp2;



    while (ptrNode->next != NULL) {
        temp = ptrNode->next;
        ptrNode->next = ptrNewNode;
        ptrNode = ptrNode->next;
        temp2 = ptrNode->next;
        ptrNode->next = temp;
    }

    //Point the previous last node to the new node created.
    //ptrNode->next = ptrNewNode;

    return head;    // return the address of first node



}

void printList(NodePointer head) {
    NodePointer ptrNode;
    ptrNode = head;
    while (ptrNode != NULL) {
        // print data of node
        printf("\n\%d-%02d-%02d - %s",
            ptrNode->nodedata.year,
            ptrNode->nodedata.month,
            ptrNode->nodedata.day,
            ptrNode->nodedata.event);
        // traverse to next node
        ptrNode = ptrNode->next;
    }
}

 


int main() {
    NodePointer head = NULL;  //pointer to first node of list

    head = addNodeEndOfList(NULL, 2022, 1, 1, "New Year");
    addNodeEndOfList(head, 2022, 1, 11, "C Programming Lecture");
    addNodeEndOfList(head, 2022, 1, 11, "C Programming Exercise");
    addNodeEndOfList(head, 2022, 1, 13, "C Programming Exercise");
    addNodeEndOfList(head, 2022, 1, 10, "Restart of Lectures");
    addNodeSort(head, 2022, 1, 12, "CTEST");
    printList(head);
}
