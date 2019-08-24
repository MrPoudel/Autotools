#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68]) #autoconf version >= 2.68

# Initialize AC: ACINIT( package_name, version, bug_report_address)

AC_INIT([my_program], [0.01], [https://github.com/MrPoudel]) #program name is my_program

#AC_CONFIG_SRCDIR([hello.c]) #safety File must exist
AC_CONFIG_HEADERS([config.h])    #MAke config header
AC_CONFIG_AUX_DIR([build-aux]) #Auxialary files go here: missing, install-sh, decomp 
AC_CONFIG_MACRO_DIR([m4])
#AM_INIT_AUTOMAKE([1.11 -Wall -Werror])
# Initialize Automake

AM_INIT_AUTOMAKE
# AM stands for Automake commands, AC stands for Autoconf commands

# We use libraries
AC_PROG_RANLIB

# Let's check for a C++ compiler

AC_LANG(C++)

# Let's set a C++ compiler
AC_PROG_CXX
#AC_PROG_CC_C0 # Nedded for -DDEBUG

#Let's set a c compiler
#AC_PROG_CC

# This suppresses the error we get for also having the cc version of helper library.
AC_SUBST([CC])

# Let's specify where the Makefiles should be produced.
# These are the same locations as your Makefile.in's, but named as Makefile only
# We need to do this because both Autoconf and Automake read this file and
# produce Makefiles from this list.

AC_CONFIG_FILES([Makefile include/Makefile src/Makefile])

# Finally produce "configure" script
AC_OUTPUT #Required final line
