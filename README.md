smallutils -- very small replacements for common UNIX utilities
===============================================================

These utilities are provided so that people can see how programming is done
without all the preprocessor customisations that are often included in many
programs. Aside from that, the programs are actually usable, as well.

Compiling Programs
------------------

Normally, these programs require `clang` to compile. If you have `gcc` or `tcc`
instead, edit the Makefile. Change CC and CFLAGS in the top to match the proper
settings for your compiler.

If you recieve errors from `clang`, please email the complete warning text to
me at:

  Daniel Roskams <rocket.penguin@riseup.net>

Any suggestions or questions are also welcome.

Installing Programs
-------------------

The Makefile doesn't come with an `install` target. This is because using it is
likely to mess up most systems. Instead, manually copy the binaries into a
directory in your `PATH` variable, for example `/usr/local/bin`. That particular
directory is unlikely to cause severe problems.
