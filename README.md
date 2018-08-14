# DOS-CC-in-linux
Some scripts that make possible to use old C compilers "directly" from the terminal

So...
I like making software for DOS, and it is a real hassle to open up DosBox, mount stuff, compile and etcetera every single time I want to compile something.

So, to fix that, I made these little scripts to set up an evironment where I can just call tcc on the terminal, open up DosBox and pass the arguments from the terminal command to the actual software call in the emulator.

With this correctly set up, you'll have a little command called tcc in linux that approximates the feel of using tcc in DOS, (I use  Turbo C++ 3.0, so this is set up for that, if you have a working copy of another compiler, a few quick modifications to my files will make it work, should just be a question of changing the switches in your makefiles).

That being said, This DOES NOT include, any compilers, you'll have to source that yourselves.

