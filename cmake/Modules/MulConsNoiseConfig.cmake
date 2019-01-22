INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_MULCONSNOISE MulConsNoise)

FIND_PATH(
    MULCONSNOISE_INCLUDE_DIRS
    NAMES MulConsNoise/api.h
    HINTS $ENV{MULCONSNOISE_DIR}/include
        ${PC_MULCONSNOISE_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    MULCONSNOISE_LIBRARIES
    NAMES gnuradio-MulConsNoise
    HINTS $ENV{MULCONSNOISE_DIR}/lib
        ${PC_MULCONSNOISE_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(MULCONSNOISE DEFAULT_MSG MULCONSNOISE_LIBRARIES MULCONSNOISE_INCLUDE_DIRS)
MARK_AS_ADVANCED(MULCONSNOISE_LIBRARIES MULCONSNOISE_INCLUDE_DIRS)

