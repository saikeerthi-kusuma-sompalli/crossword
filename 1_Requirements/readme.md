# Requirements
## Introduction
   ####  A cross word puzzle consists of a rectangular grid of black and white squares and two lists of definitions (or description). one list of definitions is for "words" to be written left to right across white squares in the rows and the other list is for words to be written down white squares in the columns. (A word is a sequence of alphabetic character.) To solve a crossword puzzle, one writes the words corresponding to the definition on the white squares of the grid.
     
  ####  The definitions correspond to the rectangular grid by means of sequential integers on "eligible" white squares. White squares with black squares immediately to the left or above them "eligible". white squares with no square either immediately to the left or above are also "eligible". No other squares are numbered. All the squares on the first row are numbered.
     
 ####   The numbering starts with 1 and continues consecutively across white squares of the fisrt row, then across the eligible white squares of the second row, then across the eligible white squares of the third row and so on across all of the rows of puzzle. The picture below illustrates a rectangular crossword puzzle grid with appropriate number!!!                            
 
 
 ![crossword](https://user-images.githubusercontent.com/39005873/114999951-ef8efe00-9ebf-11eb-875d-45d3db56a7ca.png)
 ![swot1111](https://user-images.githubusercontent.com/39005873/119105674-2fa34c80-ba3b-11eb-8a28-46998d015806.png)



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
![Opportunities-0 (1)](https://user-images.githubusercontent.com/39005873/119104761-41d0bb00-ba3a-11eb-84ce-2fddfe0d9d24.png)

## 4W's and 1'H:

### Who: 
   - This tool will be useful for the public in heavy traffic and the police to control them.
### What
   - Based on no of vehicles on the road, the algorithm decides which traffic light to on first.
### When:
   - When there is heavy traffic only in the one path when compared to other paths then the traffic light will be put on for the path which is having heavy traffic.
### Where:
   - In smart Cities, to enchance the traffic signal performance.
### How:
   - we will take images from the camera based on time intervals and store them in the database. We extract these images from the database and calculate the no of vehicles on the road and based on this count the algorithm will decide what traffic light to on at first.
#### Detail Requirements:
### High level requirements:
   | ID | Description | Status(Implemeted/Future) |
   | -- | ----------- |       -----              |
   | HR_01| Store the data in the database |      |
   | HR_02| Ability to read an image from camera |      |
   | HR_03| Ability to import and extract from Database |      |
   | HR_04| Ability to Calculate the no of vechiles from the image |      |
   | HR_05| Ability to on the traffic lights based on density of vehicles |      |
   
   
### Low level requirements: 
   | ID | Description | HLR_ID | Status(Implemeted/Future) |
   | -- | ----------- | ------ |           -----           |   
   | LR_01| capture an image from camera based on time intervals | HR_02 |        |
   | LR_02| imort data from Database | HR_03 |        |
   | LR_03| Extract data from database | HR_03 |      |
   | LR_04| Count the no of vechiles based on object detection | HR_04 |       |
   | LR_05| Checking if they is any Emergency vehicle | HR_04 |       | 
   | LR_06| Based on count the traffic light will be put on or off. If count = 0 then traffic light will be in off condition still it count increases in that path | HR_05 |     
   | LR_07| If there is any Emergency the traffic light will be put on for that path | HR_05 |        |
   
   
   
   

