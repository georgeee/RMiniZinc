AC_INIT([rminizinc], [0.0.0.99])

# Find the compiler and compiler flags used by R.
: ${R_HOME=`R RHOME`}
if test -z "${R_HOME}"; then
  echo "could not determine R_HOME"
  exit 1
fi
CXX=`"${R_HOME}/bin/R" CMD config CXX`
CXXFLAGS=`"${R_HOME}/bin/R" CMD config CXXFLAGS`
CPPFLAGS=`"${R_HOME}/bin/R" CMD config CPPFLAGS`
AC_LANG(C++)
AC_PROG_CPP

AC_ARG_WITH([mzn],
            AC_HELP_STRING([--with-mzn=PREFIX],
                           [path to where libminizinc is installed]),
            [AC_MSG_NOTICE([Custom libminizinc path provided!])],
            [AC_SUBST([DEFAULT_INCLUDE], "/usr/local/lib/libminizinc")])

AC_SUBST([MZN_INCLUDE], "-I${DEFAULT_INCLUDE}/include")
AC_SUBST([MZN_LIBS], "-L${DEFAULT_INCLUDE} -lmzn")

AS_IF([test -e "${with_mzn}"],
            [
             MZN_INCLUDE="-I${with_mzn}/include"
             MZN_LIBS="-L${with_mzn} -lmzn"
            ])

CPP_FLAGS="${CPP_FLAGS} ${MZN_INCLUDE}"
CXX_FLAGS="${CXX_FLAGS} ${MZN_INCLUDE}"
LDFLAGS="${LDFLAGS} ${MZN_LIBS}"

AC_CONFIG_FILES([src/Makevars])
AC_OUTPUT

echo "
  --------------------------------------------------
  Configuration for ${PACKAGE_NAME} ${PACKAGE_VERSION}

    cppflags: ${CPPFLAGS} ${PKG_CPPFLAGS} ${MZN_INCLUDE}
    libs:     ${PKG_LIBS} ${MZN_LIBS}

  --------------------------------------------------
"