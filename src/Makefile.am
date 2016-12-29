
# Variables that end with _PROGRAMS are special variables that list programs that the resulting Makefile should build
# In Automake speak, this _PROGRAMS suffix is called a _primary_
# Automake recognizes other primaries such as _SCRIPTS, _DATA, _LIBRARIES, etc. corresponding to different types of files. 
# The ‘bin’ part of the bin_PROGRAMS tells automake that the resulting programs should be installed in _bindir_
# GNU Build System uses a set of variables to denote destination directories and allow users to customize these locations:
# Directory variable	Default value
# prefix	            /usr/local
#   exec_prefix	        ${prefix}
#     bindir	        ${exec_prefix}/bin
#     libdir	        ${exec_prefix}/lib
#     …                 
#   includedir	        ${prefix}/include
#   datarootdir	        ${prefix}/share
#     datadir	        ${datarootdir}
#     mandir	        ${datarootdir}/man
#     infodir	        ${datarootdir}/info
#     docdir	        ${datarootdir}/doc/${PACKAGE}
#   …
# Any such directory variable can be put in front of a _primary_ (omitting the dir suffix) to tell automake where
# to install the listed files. 
# The current primary names are ‘PROGRAMS’, ‘LIBRARIES’, ‘LTLIBRARIES’, ‘LISP’, ‘PYTHON’, ‘JAVA’, ‘SCRIPTS’,
# ‘DATA’, ‘HEADERS’, ‘MANS’, and ‘TEXINFOS’.
bin_PROGRAMS = hello
# Programs need to be built from source files, so for each program prog listed in a _PROGRAMS variable,
# automake will look for another variable named prog_SOURCES listing its source files
hello_SOURCES = hello.c
