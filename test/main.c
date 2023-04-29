#include <stdio.h>
 #define RESPONSES_SIZE 10 // define array sizes
 #define FREQUENCY_SIZE 101

 // function main begins program execution
 int main(void)
 {
     int u = 0 ;
 // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE]={0};

 // place the survey responses in the responses array
 int responses[RESPONSES_SIZE];
 for(int i =0; i<RESPONSES_SIZE ; i++){
    scanf("%d" ,&responses[i]);
 }

 // for each answer, select value of an element of array responses
 // and use that value as an index in array frequency to
 // determine element to increment
 for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
    ++frequency[responses[answer]];
 }

 // display results
 printf("%s%17s\n", "Rating", "Frequency");

 // output the frequencies in a tabular format
 for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
 printf("%6d%17d\n", rating, frequency[rating]);
 }
 }




































