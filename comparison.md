# Comparison of Python, Java, JavaScript, and C

## Syntax
- **Python**: Python uses clean and readable syntax, relying on indentation to define blocks of code, which emphasizes readability. For example:  
  ```python
  def greet():  
      print('Hello, World!')
  ```

- **Java**: Java uses a more verbose syntax, requiring explicit declaration of types and the use of curly braces to define code blocks. For example:  
  ```java
  public void greet() {  
      System.out.println("Hello, World!");
  }
  ```

- **JavaScript**: JavaScript syntax is similar to Java, but it allows for more flexibility such as dynamic typing and does not require explicit type declarations. For example:  
  ```javascript
  function greet() {  
      console.log('Hello, World!');
  }
  ```

- **C**: C has a syntax that is generally considered more complicated than Python or Java. It requires explicit type definitions, includes headers, and uses semicolons to end statements. For example:  
  ```c
  void greet() {  
      printf("Hello, World!\n");
  }
  ```

## Type Systems
- **Python**: Dynamically typed, meaning variable types are checked at runtime. This enables greater flexibility.
- **Java**: Statically typed, which enforces type checking at compile time, making it less flexible but safer.
- **JavaScript**: Dynamically typed, similar to Python, allowing variables to change types during execution.
- **C**: Statically typed, like Java, requires the programmer to specify variable types explicitly.

## Memory Management
- **Python**: Uses automatic memory management (garbage collection) to free up unused resources.
- **Java**: Also relies on garbage collection for memory management, although it allows for greater control with the use of finalize() methods.
- **JavaScript**: Has an automatic garbage collection mechanism similar to Java and Python, but also has scope limitations.
- **C**: Manual memory management controlled by the programmer, using functions like `malloc` and `free`. This can lead to memory leaks if not managed properly.

## Input/Output Handling
- **Python**: Has built-in functions such as `input()` for user input and `print()` for output.
- **Java**: Uses classes like `Scanner` and `System.out` for handling input and output operations.
- **JavaScript**: Utilizes the `prompt()` method for input and `console.log()` for output, mainly in browsers.
- **C**: Uses `scanf()` for input and `printf()` for output, necessitating format specifiers for outputs.

## Other Key Differences
- **Python**: Known for its simplicity and readability, making it a popular choice for beginners and rapid development.
- **Java**: Popular for enterprise applications due to its strong object-oriented features and robustness.
- **JavaScript**: The backbone of web development; runs natively in web browsers, allowing for interactive web pages.
- **C**: Offers high performance and low-level memory access, often used in system programming, embedded systems, and performance-critical applications.

## Conclusion
While all four languages serve different purposes and excel in various domains, understanding their differences in syntax, type systems, memory management, and input/output handling can aid developers in choosing the right tool for their respective projects.