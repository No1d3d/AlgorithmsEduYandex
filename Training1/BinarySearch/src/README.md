TASK 1
The first line of the input data contains the natural numbers N and K
(0 < N, K < 100,000). The second line contains the number of elements of the first array, and the
third line contains the number of Elements of the second array. The elements of both arrays are integers,
each modulo no more than 10+e9.
It is required for each of the K numbers to output "YES" in a separate line if this number
occurs in the first array, and "NO" otherwise.

TASK 2
For each of the numbers in the second sequence, find the one closest to it in the first.
The first line of the input data contains the numbers N and K(0 < N, K <= 100001). The
second row contains N numbers of the first array, sorted by non-decreasing order, and the
third row contains K numbers of the second array. Each number in both arrays modulo does not
exceed 2-10
For each of the K numbers, output in a separate line the number from the first array that is
closest to the given one. If there are several of them, print the least of them.

TASK 3
When Petya was in school, he often participated in computer science, mathematics, and
physics Olympiads. Since he was a fairly capable boy and studied hard, he received diplomas at many of
these Olympiads. By the time he graduated from high school, he had accumulated n diplomas,
and, as it turned out, they all had the same dimensions: w - in width and h - in height.
Now Petya is studying at one of the best Russian universities and lives in a dormitory with
his classmates. He decided to decorate his room by hanging his paintings on one of the walls.
diplomas for school Olympiads. Since it is quite difficult to attach diplomas to a concrete wall
, he decided to buy a special board made of cork wood to attach it to
the wall, and diplomas to it. In order for this structure to look more beautiful, Petya
wants the board to be square and take up as little space on the wall as possible. Each
diploma must be placed strictly in a rectangle measuring w by h. Diplomas
must not be rotated 90 degrees. Rectangles corresponding to different
diplomas should not have common internal points. You need to write a program that
calculates the minimum size of the side of the board that Petya will need to place
all her diplomas.
The input file contains three integers: w, h, n (1 <= w, h, n, <= 10e+9).
The output file must output the answer to the task.

TASK 4
To explore Mars, it is necessary to build a research base. The base should consist of
identical modules, each of which is a rectangle.
Each module is a living compartment, which has the shape of a rectangle.
the size is a by b meters. To increase the reliability of the modules, engineers can add
a layer of additional protection around each module. The thickness of this layer should be
an integer number of meters, and all modules should have the same thickness of additional
protection. The module with protection, the thickness of which is equal to d meters, will have the shape
a rectangle measuring (a+2d)(b+2d) meters.
All modules must be located on a pre-prepared rectangular field
measuring wh meters. At the same time, they should be organized in a regular grid: their
sides should be parallel to the sides of the field, and the modules should be oriented
in the same way.
You need to write a program that, based on the specified number and size of modules, as well
as the size of the field for their placement, determines the maximum thickness of the additional
protection layer that can be added to each module.
The input file contains five space-separated integers: n, a, b, w, and h (I < n, a, b,
w, h 1018). It is guaranteed that, without additional protection, all modules can be placed in
the settlement as described.
The output file must contain a single integer: the maximum possible thickness
of additional protection. If additional protection cannot be installed
, the number 0 must be output.

TASK 5
At the lyceum, in computer science lessons, students' answers are evaluated with an integer number of points from 2 to 5
The final computer science grade is set as the arithmetic mean of the grades in all
lessons, rounded to the nearest integer. If the average value is exactly
in the middle between two integers, then the score is rounded up.
All lyceum students strive to get a final computer science score of at least 4 points. 
Unfortunately, one of the students got a twos, b threes and c fours in class. Now he
plans to get several A's, and he wants the final score to be at least
4 points. He needs to figure out the minimum number of fives he needs to get
in order to achieve his goal.
It is required to write a program that, based on the given non-negative integers a , b and c
, determines the minimum number of fives that a student needs to receive in order to
His final computer science score was at least 4 points.
The input data contains three lines. The first line contains a non-negative integer
a , the second line contains a non-negative integer b , the third line contains a
non-negative integer c (0 <= a, b, c <= 10e+15, a + b + c >= 1).
The output data should contain one number: the minimum number of fives that
a student needs to receive in order for the final score to be at least 4 points.

TASK 6
This morning, the jury decided to add another, very Easy Task to the Olympiad version.
The executive Secretary of the Organizing Committee printed her condition in one copy, and now
he needs to make N more copies before the start of the Olympiad. He has
two copiers at his disposal, one of which copies a sheet in x seconds, and the other in y. (It is allowed
to use both one copier and both at the same time. You can copy not only from
the original, but also from a copy.) Help him figure out the minimum time it
will take.
The program receives three natural numbers N, x and y, separated by a space
(1 <= N <=2 × 10e+8, 1 <= x, y <= 10).
Print one number - the minimum time in seconds required to get N copies.

TASK 7
The city square has a size of n × and is covered with 1× 1 square tiles. During
the planned tile replacement, it turned out that the new tiles were not enough to cover the entire
area, so it was decided to tile only the path along the edge of the square, and in the center
of the square to lay a rectangular flower bed (see the picture for example). In this case, the path must
have the same width on all sides of the square. Determine the maximum width
of the path that can be laid out from the available tiles.
The first and second lines of the input data each contain one number n and m
(3 <= n < 2 * 10e+9, 3 <= m <= 2 × 10e+9) - the size of the area.
The third row contains the number of available tiles1, 1st< nm.
Note that the value may be greater than the possible value of a 32-
bit integer variable, so 64-bit
numbers must be used (type int64 in Pascal, type long long in C and C++, type long in Java and C#).
The program should output a single number - the maximum width of the track that
can be laid out from the available tiles.

TASK 8

TASK 9

TASK 10