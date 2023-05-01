import math

def quadratic_equation(a, b, c):
  """
  Solves the quadratic equation ax^2 + bx + c = 0.

  Args:
    a: The coefficient of the x^2 term.
    b: The coefficient of the x term.
    c: The constant term.

  Returns:
    A tuple of two floats, representing the solutions to the equation.
  """

  discriminant = b**2 - 4*a*c

  if discriminant < 0:
    return None
  elif discriminant == 0:
    return (-b / (2*a),)
  else:
    return ((-b + math.sqrt(discriminant)) / (2*a), (-b - math.sqrt(discriminant)) / (2*a))