set(sources
  src/estimators/GHFilter.cpp
  src/estimators/EKF.cpp
  src/estimators/Observer.cpp
)

set(exe_sources
  src/main.cpp
  ${sources}
)

set(headers
  include/estimators/GHFilter.hpp
  include/estimators/EKF.hpp
  include/estimators/Observer.hpp
)

set(test_sources

  # src/tmp_test.cpp
)
