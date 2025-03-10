# A-December-of-Algorithms-2023
<div align="left">
<h1>
    <p align="center"><img alt="header" src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/103169831/0c9a9502-6b9a-4c99-b00f-79ffed567016" width="500"></img></p>

</h1>
Welcome to A December of Algorithms 2023. 

After overwhelming responses from previous years, we present you with a new collection of algorithms to implement this December. 

Each Day, Each Algorithm ;) 

Finish them all to get a certificate :)


**Send a pull request only after completing all 31 algorithms.**

**Please submit all PRs on or before January 15th 11:59 PM IST.**

## What Do I Do?
We have a small collection of algorithms, one for every day of the month. Scroll down to take a look at them. 

All you need to do is fork this repository, implement all 31  algorithms and send a pull request over to us. 

Check out our FAQ for more information.

## Index
  - [**December 1 - Cricmetric**](#december-1---cricmetric)
  - [**December 2 - Shopper's Choice**](#december-2---shoppers-choice)
  - [**FAQ**](#faq)


## Algorithms

 ### December 1 - Cricmetric

   #### Problem Statement
   In a cricket match, each batsman has a unique identifier, and their corresponding  runs scored are stored in an array.     Your task is to analyze the cricket match data  and determine the following: 
   
    1. The total runs scored by the team. 
    2. The batsman who scored the highest number of runs and their corresponding  unique identifier.


   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/103169831/6e7189c3-455a-4f37-baaa-9f3bd3ceae87" width="400"></p>
   
   #### Sample Input/Output
   ```
      Input: 
      5 
      20 35 40 15 25

      Output:
      135 
      2

   ```

   #### Explanation
   ```
     
        There are five batsmen in the match. Their runs are 20, 35, 40, 15, and 25. The total  runs scored by the team are 135. Batsman number 3 (index 2) scored the highest  number of runs, which is 40. 
        
   ```
   ```
      Input: 
      10 
      10 20 30 40 50 60 70 80 90 100 
      
      Output: 
      550 
      9

   ``` 
   
   #### Explanation
   ```
     
        There are ten batsmen in the match. Their runs are 10, 20, 30, 40, 50, 60, 70, 80,  90, and 100. The total runs scored by the team are 550. Batsman number 10 (index  9) scored the highest number of runs, which is 100. 
        
   ```
    
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
    - [Indexing in Arrays](https://www.geeksforgeeks.org/how-exactly-does-indexing-works-in-arrays/)
----

 ### December 2 - Shopper's Choice

   #### Problem Statement
   In a retail store, the management wants to analyze customer purchase data to gain insights into the popularity of various products. They have a dataset representing customer purchases, where each entry corresponds to the product ID of the item bought.
Given an array of product IDs, develop a program to generate the frequency of each product as an output array. The frequency represents how often each product has been purchased.


   <p align="center"><img src="https://github.com/SVCE-ACM/A-December-Of-Algorithms-2023/assets/113821083/55a0cca7-6c69-48d4-9b90-55fd5799e820" width="400"></p>
   
   #### Sample Input/Output
   ```
    Input 1 
    [2,2,3,4,5,6,2,4,6,7] 
    Output 1 
    [3,1,2,1,2,1] 


   ```

   #### Explanation
   ```
     
    Frequency of 2: 3 
    Frequency of 3: 1 
    Frequency of 4: 2 
    Frequency of 5: 1 
    Frequency of 6: 2 
    Frequency of 7: 1
 
        
   ```
   ```
    Input 2
    [25,28,33,27,28,25,25,31]
    Output 2
    [3,2,1,1,1]


   ``` 
   
   #### Explanation
   ```
     
    Frequency of 25: 3 
    Frequency of 28: 2 
    Frequency of 33: 1 
    Frequency of 27: 1 
    Frequency of 31: 1 
  
        
   ```
    
- **References**
    - [Arrays in C++](http://www.cplusplus.com/doc/tutorial/arrays/)
    - [Arrays in Java](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/arrays.html)
    - [Arrays in Python](https://www.w3schools.com/python/python_lists.asp)
----

FAQ
======

#### Who can join the Challenge?
Anyone who is passionate about coding and can dedicate a little time a day for the challenge for the next 31 days.

#### When should I submit the pull request?
You don't need to submit it everyday. Just submit it once you're done with all 31 algorithms.

#### What if I'm not able to code every day?
Not a problem. While coding every day is nice, we understand that other commitments might interfere with it. 

Plus its holiday season. So you don't have to solve one problem every day. 

Go at your own pace. One per day or 7 a week or even all 30 in a day.

#### What language should I use to code?
Anything! New to GoLang? Best way to practice it. 

Wanna find out what all this hype about Python is? Use it! 

Any and all languages are welcome. 

Maybe you could try using a different language for every problem as a mini-challenge?

#### Fork? Pull request? What is all that? I don't know how to use GitHub!
If you are new to Git or GitHub, check out this out [GitHub](https://guides.github.com/activities/hello-world/)

#### Where are the rest of the problems?
Our code ninjas are hard at work preparing the rest of the problems. Don't worry, they'll be up soon.

#### How should I complete these programs?
We have a folder for each day of the month. Simply complete your code and move the file into that folder. 

Be sure to rename your file to the following format: `language_username` or `language_username_problemname`
Some examples:
`python3_exampleUser.py`
`c_exampleUser.c`

**Please do not modify any existing files in the repository.**

#### I forked the repository but some problems were added only after that. How do I access those problems?
Not to worry! Open your nearest terminal or command prompt and navigate over to your forked repository. 

Enter these commands:
```bash
git remote add upstream https://github.com/SVCE-ACM/A-December-of-Algorithms-2021.git
git fetch upstream
git merge upstream/main
```
If you're curious, the commands simply add a new remote called upstream that is linked to this repository. Then it 'fetches' or retrieves the contents of the repository and attempts to merge it with your progress.
Note that if you've already added the upstream repository, you don't need to re-add it in the future while fetching the newer questions.

#### I received a merge error. What do I do?
This shouldn't happen unless you modify an existing file in the repository. There's a lot of potential troubleshooting that might be needed, but the simplest thing to do is to make a copy of your code outside the repository and then clone it once again. Now repeat the steps from the answer above. Merge it and then add your code. Now proceed as usual. :)

#### I'm facing difficulties with/need help understanding a particular question.
Open up an [issue](https://github.com/SVCE-ACM/A-December-of-Algorithms-2021/issues) on this repository and we'll do our best to help you out.

###### [[Back to Top]](#----)

![wave](http://cdn.thekrishna.in/img/common/border.png)
