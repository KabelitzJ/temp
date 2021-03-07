# temp
A template project to showcase modern, target based, cmake 

## Structure
The project is made of a static library `temp` which provides a very unique approach for adding two numeric values ;)

It also creates an executable `demo` which links with `temp` and shows its functionality.

The project defines a root cmake target and a separate target for the library and executable respectively.  
This way we can control different properties separately for each target (e.g. the output directory).
