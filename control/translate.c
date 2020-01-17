#include <stdio.h>
#include <string.h>
char* piglatin (char word[] );
char* shrthnd (char word[] );
char array[100];
char pigLatin[100];
char shorthand[100];
//void clearBuffer(char word[]);
void clearPigBuffer(char word[]);
char* shorty()
{
   
  //char *input[10000];
  // char *outputpig[10000];
   char input[] = "I like to read books";
   long string_size = strlen(input);
   char split[] = " ";
   char *pointy = strtok(input, split);
  
   while(pointy != NULL) {
    //printf("'%s'\n", pointy);
     // strcpy(tokendWord, pointy);
//     printf("%s ", shrthnd(pointy));
     //clearBuffer(pointy);
     //clearPigBuffer();
    pointy = strtok(NULL, split);
   }
   
   
 // printf("\n\n\n\n\n\n");
   
   
   for (int i = 0; i < string_size; i++) {
    // printf("%d ", bruh[i]);
   }
   return shorthand;
}

   char* pig(char* piglatin)
   {
      
     //char *input[10000];
     // char *outputpig[10000];
      char input[] = "I like to read books";
      long string_size = strlen(input);
      char split[] = " ";
      char *pointy = strtok(input, split);
     
      while(pointy != NULL) {
       //printf("'%s'\n", pointy);
        // strcpy(tokendWord, pointy);
      //  printf("%s ", piglatin(pointy));
        //clearBuffer(pointy);
       // clearPigBuffer(pointy);
       pointy = strtok(NULL, split);
      }
      
      
    // printf("\n\n\n\n\n\n");
      
      
      for (int i = 0; i < string_size; i++) {
       // printf("%d ", bruh[i]);
      }
      return 0;
   }
   
char* shrthnd(char word[]){
   
  char charArray[strlen(word) + 1];
  strcpy(charArray, word);
  for(int i = 0; i < strlen(word); i++){
    charArray[i] = word[i];
  }
  for(int i = 0; i < strlen(word); i++){
    switch (charArray[i])
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        for(int y = i; y < strlen(word); y++) {
          charArray[y] = charArray[y + 1];
        }
        i--;
      default: ;
    }
  }
   
  return charArray;
}
   
   
char* piglatin (char word[] ){
  
  int buffer = 0, place = 0, start= 0;
  
  for (int i = 0; word[i] != '\0'; i++, buffer++)
  {
    char temp = word[i];
    for (; word[i] != ' ' && word[i] != '\0'; i++) {
      buffer++;
    }
    for (; start < buffer - 1 ; start++ , place++) {
      pigLatin[place] = word[start +1];
    }
    pigLatin[place] = temp;
    pigLatin[place+1] = 'a';
    pigLatin[place+2] = 'y';
     
    place += 4;
    start = buffer + 1;
  }
  pigLatin[place] = '\0';
   
  return piglatin;
}
/*void clearbuffer(char word[]){
 for(int i=0; i<strlen(word); i++){
  array[i]= '\0';
 }
 }
/*void clearPigBuffer(){
for(int i=0; i<80; i++){
 piglatin[i]= '\0';
}*/
