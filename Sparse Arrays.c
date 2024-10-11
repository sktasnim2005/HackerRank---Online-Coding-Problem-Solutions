#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
  int n, z, i, j, count;
  char **arr; // pointer to pointer to store the input words
  char **query; // pointer to pointer to store the query words
  char *temp; // temporary pointer to store the return value of realloc
  
  // read the number of input words
  scanf("%d\n", &n);
  
  // allocate memory for the input words
  arr = (char**)malloc(n * sizeof(char*));
  for(i = 0; i < n; i++){
      arr[i] = (char*)malloc(100 * sizeof(char)); // assuming the maximum length of a word is 100
  }
  
  // read the input words and store them in the array
  for(i = 0; i < n; i++){
      scanf("%s", arr[i]);
  }
  
  // read the number of query words
  scanf("%d\n", &z);
  
  // allocate memory for the query words
  query = (char**)malloc(z * sizeof(char*));
  for(j = 0; j < z; j++){
      query[j] = (char*)malloc(100 * sizeof(char)); // assuming the maximum length of a word is 100
  }
  
  // read the query words and store them in the array
  for(j = 0; j < z; j++){
      scanf("%s", query[j]);
  }
  
  // iterate over the query words
  for(j = 0; j < z; j++){
      // initialize the count to zero
      count = 0;
      
      // iterate over the input words and compare them with the current query word
      for(i = 0; i < n; i++){
          // if the words are equal, increment the count
          if(strcmp(arr[i], query[j]) == 0){
              count++;
          }
      }
      
      // print the frequency of the current query word
      printf("%d\n",count);
  }
  
  // free the allocated memory
  for(i = 0; i < n; i++){
      free(arr[i]);
  }
  free(arr);
  for(j = 0; j < z; j++){
      free(query[j]);
  }
  free(query);
  
  return 0;
}
