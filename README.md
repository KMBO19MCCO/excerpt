# excerpt
Creates a test polynomials

Creates a test polynomial, both in the form of roots, e.g. (x-roots[0])*(x-roots[1])*(quadratic polynomial with no real roots) as well as
represented by coefficients, e.g. (coefficients[4]=1)*x^4 + coefficients[3]*x^3 + coefficients[2]*x^2 + coefficients[1]*x + coefficients[0].
The highest-degree coefficient always equals 1. The function returns the actual number of different real roots placed into the vector
(roots) (complex roots are not placed there). Negative return values may mean internal implementation error
