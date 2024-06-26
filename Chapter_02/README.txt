S.Prata C++ Primer Plus 6th ed.
================================================================================
                         PROGRAMMING EXERCISES CHAPTER 2


1.  Write a C++ program that displays your name and address (or if you value
    your privacy, a fictitious name and address).

2.  Write a C++ program that asks for a distance in furlongs and converts it to
    yards. (One furlong is 220 yards.)

3.  Write a C++ program that uses three user-defined functions (counting main()
    as one) and produces the following output:

    Three blind mice
    Three blind mice
    See how they run
    See how they run

    One function, called two times, should produce the first two lines, and the
    remaining function, also called twice, should produce the remaining output.

4.  Write a program that asks the user to enter his or her age. The program then
    should display the age in months:

    Enter your age: 29
    Your age in months is 384.

5.  Write a program that has main() call a user-defined function that takes a
    Celsius temperature value as an argument and then returns the equivalent
    Fahrenheit value. The program should request the Celsius value as input from
    the user and display the result, as shown in the following code:

    Please enter a Celsius value: 20
    20 degrees Celsius is 68 degrees Fahrenheit.

    For reference, here is the formula for making the conversion:

    Fahrenheit = 1.8 × degrees Celsius + 32.0

6.  Write a program that has main() call a user-defined function that takes a
    distance in light years as an argument and then returns the distance in
    astronomical units. The program should request the light year value as input
    from the user and display the result, as shown in the following code:

    Enter the number of light years: 4.2
    4.2 light years = 265608 astronomical units.

    An astronomical unit is the average distance from the earth to the sun
    (about 150,000,000 km or 93,000,000 miles), and a light year is the distance
    light travels in a year (about 10 trillion kilometers or 6 trillion miles).
    (The nearest star after the sun is about 4.2 light years away.) Use type
    double (as in Listing 2.4) and this conversion factor:

    1 light year = 63,240 astronomical units

7.  Write a program that asks the user to enter an hour value and a minute
    value. The main() function should then pass these two values to a type void
    function that displays the two values in the format shown in the following
    sample run:

    Enter the number of hours: 9
    Enter the number of minutes: 28
    Time: 9:28

================================================================================