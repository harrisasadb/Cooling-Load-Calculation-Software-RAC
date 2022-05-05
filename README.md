		===	PROGRAMMER'S NOTE 	===

The program was made on Visual Studio 2013 and the programming language
used was C++

The code has been well-documented, with meaningful identifier names and 
comments added where possible. This will enable any competent programmer,
be it a future student of PIEAS or otherwise, to take the program and be
able to improve it significantly, in the future.

For Future Developments we have three ideas in mind:

1.The program calculates the heat load due to conduction through the walls
under the assumption that the wall is composed of clay bricks with a
coating of cement on both sides (taking the wall thickness conservatively
as 200 mm resulting in a conductance of 2.61 W/m^2.K) and that the window
is single glazed glass (almost 3.2 mm thick, having a conductance of
5.91 W/m^2.K)

This was a reasonable assumption as this material is the
most popular choice for buildings in Pakistan. If the building for which
the cooling load is being calculated, is made up of a different material
(concrete blocks for example) the value calculated for the external load
will be erroneous. The program can be improved in the future by
introducing an option to choose the material type and thickness of the
walls, roof and windows.

2.Ventilation load calculation options have not been developed. Those can
be added in the future

3.The program does not have any checks to see if the inputted value is
within the allowable range, for example the indoor temperature is well
below 50 degree Celcius or that the value of CLF is between 0 and 1.
Ensuring that impossible values are not accidentally inputted will make
the program significantly more user friendly.


- Harris Asad (https://github.com/harrisasadb) & Sheikh Emad ud din (https://github.com/Red-Salmon)
- May, 2018
