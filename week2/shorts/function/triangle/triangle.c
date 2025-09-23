bool valid_triangle(float x, float y, float z);

bool valid_trinagle(float x, float y, float z)
{
  // check for all positive sides
  if (x <= 0 || y <= 0 || z <= 0)
  {
    return false;
  }

  // check that sum of any two sides greater than third
  if ((x + y <= z) || (x + z <= y) || (x + z <= y))
  {
    return false;
  }

  // if we passed both tests, we're good!
  return true;
}