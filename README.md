# k-r

Notes and exercises from _The C Programming Language_ by Brian Kernighan and Dennis Ritchie.

I am using Visual Studio Code with the following formatting options :

```
"C_Cpp.clang_format_fallbackStyle": "Webkit",
"files.insertFinalNewline": true,
"files.trimFinalNewlines": true,
"files.trimTrailingWhitespace": true
```

## Rules

- Solve problems efficiently in pure C.
- Write portable solutions so the code can be tested almost anywhere.
  - Write in ANSI C (C89).
  - Use POSIX makefiles, avoiding GNU Make extensions that may not be available.
- Be pedantic; turn on essentially all warnings `-Wunused-variable -Wno-implicit-int -Wno-return-type -pedantic -ansi -Werror`
- For a given problem, use only techniques that have already been covered.
