Introduction
============
Normally, autotools is the name for the combination of different tools used for the development of C/c++ based projects.

Autotools = common name for autoconf+automake+ libtool+ ...

Autotool is a very handy tool creating/managing and distributing the source code in various unix-line OS.

This project provides a template which can be used to the jump start your project. This is basically taken from the https://github.com/byuksel/Automake-Autoconf-Template-Project and modified little bit.

Developers normally write configure.ac on root directory and Makefile.am in each of the subdirectories where the generation of Makefile is expected.

Autotools provides common build facilities:

- select tools (e.g .CC= ..)
- select destinations(e.g. prefix=.._
- DESTDIR(vital for packaging)
- VPATH builds
- cross compilation etc.


Steps:
=======
- Clone the repository and run:
- `autoreconf -i`

If it does not work you have to run the following commands:
- `aclocal`
- `autoconf`
- `automake --add-missing`

This generates the configure file and Makefile.in. If libtools has not been installed then:
- `sudo apt-get install libtools`

Then run the configure script:
- `./configure`

(Written in a special language processed by `m4` 
 macro, probes the system and generates Makefile)
- `make`

(compiles the project and generates executables and libraries)
- `make install`  

(installs the library and header files in predefined path


Trying out some auto-generated capabilities
===========================================
`DESTDIR="$t" make install`

`DESTDIR="$t" make uninstall`

`make dist`          # Create distribution tarball

`make distcheck`     # CHECK BEFORE RELEASE


Installation and removal
========================

`t="$(mktemp -d)"`

`DESTDIR="$t" make install`

`DESTDIR="$t" make uninstall`


Checking
========
`find "$t"`

Making tarball
=============
`make dist`

This will create `my_program-0.01.tar.gz`

Checking
========

`tar tvzf *.tar.gz`

`make distcheck`

this makes sure that other recipiennts will able to use it /unzip it


You can seee the following message:
```
=================================================
my_program-0.01 archives ready for distribution: 
my_program-0.01.tar.gz
=================================================

```


Useful commands
===========================================
$ `list="LICENSE INSTALL README.md AUTHORS COPYING"`

$ `touch $list`