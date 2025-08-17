📌 Binary Search Algorithm Performance Analysis
📂 Project Overview
This project implements the Binary Search algorithm in C and analyzes its performance in Best Case, Worst Case, and Average Case scenarios. Execution times were recorded for different input sizes and plotted on a single line graph to compare the three cases.

🎯 Aim
To implement Binary Search and analyze its execution time for various input sizes under Best, Worst, and Average Case scenarios.

📝 Introduction
Binary Search is an efficient searching algorithm with a time complexity of O(log n), used to find an element in a sorted array. This project tests its performance in different scenarios by measuring execution times for various input sizes.

⚙️ Implementation Details
Language Used: C

Number of Test Cases: 15 (5 Best, 5 Worst, 5 Average)

Data Storage: Text file containing input sizes and recorded times

Graph: Single line graph comparing Best, Worst, and Average case times

📊 Observations
Average Case consistently took the longest time due to more comparisons spread across the search range.

Worst Case times were lower than Average Case but higher than Best Case.

Best Case had the shortest execution time since the target was found immediately.

Small variations in results are due to system and hardware execution differences.

📈 Graph
The line graph shows execution time (Y-axis) against input size (X-axis) for Best, Worst, and Average cases.

The Average Case line is above the other two, followed by Worst Case, and Best Case at the bottom.

📂 Files Included
source code → Source code for Binary Search implementation

test_cases.txt → Recorded 15 test cases with input size and execution time

graph.png → Line graph comparing execution times

README.md → This file

🏁 Conclusion
Binary Search performs fastest in the Best Case and slowest in the Average Case (in this experiment). The difference in times highlights how data positioning and input size affect search performance.

🔗 GitHub Repository
(Add your repository link here)