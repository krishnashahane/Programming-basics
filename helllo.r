# Hello World in R
print("Hello World!")

# This is a comment in R. It will not be executed as code. Comments are useful for explaining what your code does or for leaving notes to yourself or others who may read your code later.
# You can also use the cat() function to print text without a newline at the end:
cat("Hello World!")

# You can also use the paste() function to concatenate strings together:
greeting <- "Hello"
name <- "World"
message <- paste(greeting, name)
print(message)

# You can also use the sprintf() function to format strings:
greeting <- "Hello"
name <- "World"
message <- sprintf("%s %s!", greeting, name)
print(message)

# You can also use the glue() function from the glue package to create strings with embedded R expressions:
if (!requireNamespace("glue", quietly = TRUE)) {
  install.packages("glue")
}
library(glue)
greeting <- "Hello"
name <- "World"
message <- glue("Greeting: {greeting}, Name: {name}")
print(message)

# You can also use the format() function to format numbers and dates in R:
number <- 123.456789
formatted_number <- format(number, digits = 2)
print(formatted_number)
date <- as.Date("2026-02-21")
formatted_date <- format(date, "%B %d, %Y")
print(formatted_date)

# You can also use the sprintf() function to format numbers and dates in R:
number <- 123.456789
formatted_number <- sprintf("%.2f", number)
print(formatted_number)
date <- as.Date("2026-02-21")
formatted_date <- format(date, "%B %d, %Y")
print(formatted_date)

# You can also use the formatC() function to format numbers in R:
number <- 123.456789
formatted_number <- formatC(number, format = "f", digits = 2)
print(formatted_number)

# You can also use the format() function to format numbers and dates in R:
number <- 123.456789
formatted_number <- format(number, digits = 2)
print(formatted_number)
date <- as.Date("2026-02-21")
formatted_date <- format(date, "%B %d, %Y")
print(formatted_date)

# Arrays in R
# Arrays are a data structure in R that can hold multiple values of the same type. They are similar to vector, but they can have more than one dimension. You can create an array using the array function. Here is an example of how to create a 2-dimensional array in R:
my_array <- array(1:6, dim <- c(2, 3))
print(my_array)
# This creates a 2*3 array with the values 1 to 6. the dim argument specifies the dimensions of the array, in this case, 2 rows and 3 columns. You can access the elements of the array using indexing. For example, to access the element in the first row and second column, you can use:
element <- my_array[1, 2]
print(element)
# You can also use the dimnames argument to give names to the dimensions of the array.
my_array <- array(1:6, dim = c(2, 3), dimnames = list(c("Row1", "Row2"), c("Col1", "Col2", "Col3")))
print(my_array)
# This creates a 2*3 array with the values 1 to 6 and gives names to rows and columns. You can access the elements of the array using the names as well. For example, to access the element in the row "Row1" and column "Col2", you can use:
element <- my_array["Row1", "Col2"]
print(element)

# You can also perform operations on arrays in R. For example, you can add two arrays together or multiply an array by a scalar value. Here is an example of how to add two arrays together:
array1 <- array(1:6, dim = c(2, 3))
array2 <- array(7:12, dim = c(2, 3))
result <- array1 + array2
print(result)

#You can also perform element-wise operations on arrays, such as. multiplying two arrays together or applying a function to each element of an array. Here is an example of how to multiply two arrays together:
array1 <- array(1:6, dim = c(2, 3))
array2 <- array(7, 12, dim = c(2, 3))
result <- result <-array1 * array2
print(result)

#You can also apply a function to each element of an array using the apply() function. Here is an example of how to calculate the mean of each row in a 2-dimensional array:
my_array <- array(1:6, dim = c(2, 3))
row_means <- apply(my_array, 1, mean)
print(row_means)    

# You can also calculate the mean of each column in a 2-dimensional array using the apply() function:
my_array <- array(1:6, dim = c(2, 3))
col_means <- apply(my_array, 2, mean)
print(col_means)    

# You can also calculate the mean of each element in a 3-dimensional array using the apply() function:
my_array <- array(1:24, dim = c(2, 3, 4))
element_means <- apply(my_array, c(1, 2), mean)
print(element_means)    

# You can also use the lapply() function to apply a function to each element of a list of arrays. Here is an example of how to calculate the mean of each element in a list of 2-dimensional arrays:
array1 <- array(1:6, dim = c(2, 3))
array2 <- array(7:12, dim = c(2, 3))
array_list <- list(array1, array2)
element_means <- lapply(array_list, function(x) apply(x, c(1, 2), mean))
print(element_means)

# You can also use the sapply() function to apply a function to each element of a list of arrays and return a simplified result. Here is an example of how to calculate the mean of each element in a list of 2-dimensional arrays and return a matrix:
array1 <- array(1:6, dim = c(2, 3))
array2 <- array(7:12, dim = c(2, 3))
array_list <- list(array1, array2)
element_means <- sapply(array_list, function(x) apply(x, c(1, 2), mean))
print(element_means)

# You can also use the tapply() function to apply a function to subsets of an array based on a grouping variable. Here is an example of how to calculate the mean of each element in a 2-dimensional array based on a grouping variable:
my_array <- array(1:6, dim = c(2, 3))
grouping_variable <- c("Group1", "Group1", "Group2", "Group2", "Group1", "Group2")
element_means <- tapply(my_array, grouping_variable, mean)
print(element_means)

# You can also use the aggregate() function to apply a function to subsets of an array based on a grouping variable. Here is an example of how to calculate the mean of each element in a 2-dimensional array based on a grouping variable:
my_array <- array(1:6, dim = c(2, 3))
grouping_variable <- c("Group1", "Group1", "Group2", "Group2", "Group1", "Group2")
element_means <- aggregate(my_array, by = list(grouping_variable), FUN = mean)
print(element_means)    

# You can also use the by() function to apply a function to subsets of an array based on a grouping variable. Here is an example of how to calculate the mean of each element in a 2-dimensional array based on a grouping variable:
my_array <- array(1:6, dim = c(2, 3))
grouping_variable <- c("Group1", "Group1", "Group2", "Group 2", "Group1", "Group2")
element_means <- by(my_array, grouping_variable, mean)
print(element_means)    

# You can also use the split() function to split an array into subsets based on a grouping variable. Here is an example of how to split a 2-dimensional array into subsets based on a grouping variable:
my_array <- array(1:6, dim = c(2, 3))
grouping_variable <- c("Group1", "Group1", "Group2", "Group2", "Group1", "Group2")
split_array <- split(my_array, grouping_variable)
print(split_array)  

# You can also use the unlist() function to flatten a list of arrays into a single vector. Here is an example of how to flatten a list of 2-dimensional arrays into a single vector:
array1 <- array(1:6, dim = c(2, 3))
array2 <- array(7:12, dim = c(2, 3))
array_list <- list(array1, array2)              
flattened_vector <- unlist(array_list)
print(flattened_vector)

# You can also use the rbind() function to combine multiple arrays into a single array by row. Here is an example of how to combine two 2-dimensional arrays into a single array by row:
array1 <- array(1:6, dim = c(2, 3))
array2 <- array(7:12, dim = c(2, 3))
combined_array <- rbind(array1, array2)
print(combined_array)

# You can also use the cbind() function to combine multiple arrays into a single array by column. Here is an example of how to combine two 2-dimensional arrays into a single array by column:
array1 <- array(1:6, dim = c(2, 3))
array2 <- array(7:12, dim = c(2, 3))
combined_array <- cbind(array1, array2)    
print(combined_array)

#Data types in R
#R has several built-in data types that are used to store different types of data. The most common data types in R includes numeric, integer, character, logical, factor, and date. Here is a brief overview of each data type:
#Numeric: This data type is used to store decimal numbers. For example:
numeric_value <- 3.14
print(numeric_value)
#Integer: This data type is used to store whole numbers. For example:
integer_value <- 42L
print(integer_value)
#Character: This data type is used to store text. For example:
character_value <- "Hello Krishna")
print(character_value)
#Logical: This data type is used to store TRUE or FALSE values. For example:
logical value <- TRUE
print(logical_value)
#Factor: This data type is used to store categorical data. For example:
factor_value <- factor(c("Low", "Medium", "High"))
print(factor_value)
#Date: This data type is used to store dates. For example:
date_value <- as.Date("2026-02-21")
print(date_value)
#You can also use the class() function to check the data type of a variable in R. For example:
numeric_value <- 3.14
print(class(numeric_value))
integer_value <- 42L
print(class(integer_value))
character_value <- "Hello Krishna"
print(class(character_value))
logical_value <- TRUE
print(class(logical_value))
factor_value <- factor(c("Low", "Medium", "High"))      
print(class(factor_value))
date_value <- as.Date("2026-02-21")
print(class(date_value))    

#You can also use the typeof() function to check the underlying data type of a variable in R. For example:
numeric_value <- 3.14
print(typeof(numeric_value))
integer_value <- 42L                        
print(typeof(integer_value))
character_value <- "Hello Krishna"
print(typeof(character_value))
logical_value <- TRUE
print(typeof(logical_value))
factor_value <- factor(c("Low", "Medium", "High"))
print(typeof(factor_value))
date_value <- as.Date("2026-02-21")
print(typeof(date_value))

#You can also use the is.numeric(), is.integer(), is.character(), is.logical(), is.factor(), and is.Date() functions to check if a variable is of a specific data type in R. For example:
numeric_value <- 3.14
print(is.numeric(numeric_value))
integer_value <- 42L
print(is.integer(integer_value))
character_value <- "Hello Krishna"
print(is.character(character_value))
logical_value <- TRUE
print(is.logical(logical_value))
factor_value <- factor(c("Low", "Medium", "High"))
print(is.factor(factor_value))
date_value <- as.Date("2026-02-21")             
print(is.Date(date_value)) 

#Data structures in R
#R has several built-in data structures that are used to store and organize data. The most common data structures in R include vectors, matrices, arrays, lists, and data frames, Here is a brief overview of each Data structure:
#Vector: A vector is a one-dimensional array that can hold multiple values of the same type. For example:
my_vector <- c(1, 2, 3, 4, 5)
print(my_vector)
#Matrix: A matrix is a two-dimensional array that can hold multiple values of the same type. For example:
my_matrix <- matrix(1:6, nrow = 2, n)col = 3)
print(my_matrix)
#Array: An array is a multi-dimensional array that can hold multiple values of the same type. For example:
my_array <- array(1:24, dim = c(2, 3, 4))
print(my_array)
#List: A list is a collection of objects that can hold multiple values of different types.
my_list <- list(name = "Krishna", age = 19, hobboies = c("coding", "Gaming", "Travelling"))
print(my_list)
#Data frame: A data frame is a two-dimensional table that can hold multiple values of different types. It is similar to a matrix, but it can have different data types in each column, For example:
my_data_frame <- data.frame(name = c("Krishna", "Ravi", "Shiva"), age = c(19, 20, 21), hobbies = c("coding", "Gaming", "Travelling"))
print(my_data_frame)

#You can also use the class() function to check the data structure of a variable in R. For example:
my_vector <- c(1, 2, 3, 4, 5)
print(class(my_vector))
my_matrix <- matrix(1:6, nrow = 2, ncol = 3)
print(class(my_array))
my_list <- list(Name = "Krishna", age = 19", hobbies = c("coding", " Gaming", "Travelling"))
print(class(my_list)

my_data_frame <- data.frame(name = c("Krishna", "Ravi", "Shiva"), age = c(19, 20, 21), hobbies = c("coding", "Gaming", "Travelling"))
print(class(my_data_frame))

#You can also use the typeof() function to check the underlying data structure of a variable in R, For example:
my_vector = c(1,2,3,4,5)
print(typeof(my_vector)
my_matrix <- matrix(1:6, nrow = 2, ncol = 3
print(typeof(my_matrix())))
my_list <- list(name = "Krishna", age = 19, hobbies = ci("coding", "Gaming",  "Travelling")
print(typeof(my_list)))
my_data_frame <- data.frame(name = c("Krishna", "Ravi", "Shiva"), age = c(19, 20, 21), hobbies = c("coding", "Gaming", "Travelling")
print(typeof(my_data_frame)))

#You can also use the is.vector(), is.matrix(), is.array(), is.list(), and is.data.frame() 