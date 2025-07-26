# TestKit-pp
TestKit-pp is a C++ library for defining, management, execution, and analysing automated tests. It provides a framework for writing unit tests, ensuring that software applications function as expected across various scenarios.

## Installation

To install TestKit-pp, follow these steps:

1. Place the contents of the `include` directory into your project.
2. Add the TestKit directory to your `CMakeLists.txt` file:

```cmake
add_subdirectory(path/to/TestKit-pp)
```

3. Link the library to your project:

```cmake
target_link_libraries([your_project_name] TestKit)
```

4. Include the TestKit header in your project:
```c++
#include "path/to/TestKit-pp/Test.hpp"
```