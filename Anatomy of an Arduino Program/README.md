# The Arduino Language: A Crash Course #
To really get the most out of this guide, it is very important to understand the code and what exactly you are reading/writing.
The language is its own thing but also it kind of really isn't. You'll see what I mean. The documentation that includes the most
about the language can be found on the Arduino website at: arduino.cc/reference/en/. Before we jump directly into the Arduino language,
lets do a big picture overview of the differences between some languages. I am sure you've heard the names Python, C#, C++, C, Ruby, Kotlin,
Java, JavaScript, Go, Rust, Scala, and SO many more thrown around before. While many of these languages are interconnected, it is important to really
understand what makes some of them different.

## A 10,000ft View of Language Differences ##
Many languages are kind of used in more of a niche application while some are more universal. In actuality, i'm sure you could probably find a way to use
almost any language for almost anything but some are just better at certain things.

### Compiled vs. Interpreted ###
The Arduino language is what's known as a compiled language meaning the program must be compiled into machine code before it can run on a device. The compiler checks for errors
and ommissions, promptly stopping the compilation if it detects a fatal error. C++ and C are examples of other compiled languages. On the other hand, Python is an interpreted
language meaning it does not get compiled. Instead, there is a python intepreter that instructs the computer what the code is telling it to do.

Compilers translate the entire source code as a whole while interpreters translate one line at a time.

### Language Levels ###
Languages are also divided into "levels" that reference how close they are to being straight up machine code (the code your processor actually understands).
High-level languages are closer to how humans communicate and typically are more beginner-friendly. However, they are also less memory efficient. Python is an
example of a high-level language. Low-level languages are machine dependent, and are generally harder to write, debug, and transfer between devices. They are
more memory efficient though. Assembly is an example of a low-level language.

C, C++, and Arduino are also considered high-level. A good way to tell if a language is high or low-level is if it needs to be translated before it can run. If the language
has to be interpreted or compiled it a high-level language.

## Arduino: A Quirky Cousin to C++ ##
If you are familiar with C or C++, Arduino is going to look very similar. This is because the Arduino language is basically C++ with some stuff hidden to allow for ease of use
and to be more beginner friendly.
