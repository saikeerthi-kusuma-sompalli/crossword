# Requirements
## Introduction
   ####  A cross word puzzle consists of a rectangular grid of black and white squares and two lists of definitions (or description). one list of definitions is for "words" to be written left to right across white squares in the rows and the other list is for words to be written down white squares in the columns. (A word is a sequence of alphabetic character.) To solve a crossword puzzle, one writes the words corresponding to the definition on the white squares of the grid.
     
  ####  The definitions correspond to the rectangular grid by means of sequential integers on "eligible" white squares. White squares with black squares immediately to the left or above them "eligible". white squares with no square either immediately to the left or above are also "eligible". No other squares are numbered. All the squares on the first row are numbered.
     
 ####   The numbering starts with 1 and continues consecutively across white squares of the fisrt row, then across the eligible white squares of the second row, then across the eligible white squares of the third row and so on across all of the rows of puzzle. The picture below illustrates a rectangular crossword puzzle grid with appropriate number!!!                            
 
 
 ![crossword](https://user-images.githubusercontent.com/39005873/114999951-ef8efe00-9ebf-11eb-875d-45d3db56a7ca.png)


## Definition
   #### An "Across" word for a definition is written on a sequence of white squares in  a row startinng on a numbered square that doesn't follow another white square in the same row. The sequence of the white squares for that word goes across the row of the numbered square, ending immediately before the next black square in the row or in the rightmost square of the row.
   
   #### An "Down" word for a definition is written on a sequence of white squares in  a column startinng on a numbered square that doesn't follow another white square in the same column. The sequence of the white squares for that word goes down the column. Every white square in a correctly solved puzzle contains a letter.
   
   #### We must write a program that takes several solved crossword puzzles as input and outputs the lists of across and down words which constitute the solutions. 
   
### Input

   #### Each puzzle solution in the input starts with a line containing two integers r and c, Where r represents the number of rows in the puzzle and c represents the number of columns in the puzzle. The r rows of input which follow each contain c characters (excluding the end-of-line) which describe the solutio. Each of those c characters is an alphabetic  character which is a part of the word or the character * which indicates black square.
   
### Output

   #### Contains the list of cross words followed by the list of down words  Words in the each list must be a output one-per-line in increasing order of the number of their corresponding definitions.
   #### The heading for the list of across words is "Across". The heading for the list of down words is "Down". In the case where the lists are empty(all the squares in the gris are black), The Across and the Down headings should still appear. 

## SWOT Analysis 
![imagessss](https://user-images.githubusercontent.com/39005873/115014291-c37b7900-9ecf-11eb-9583-bdd2b7d80492.png)


