
# CaesarCipherTool
`CaesarCipherTool` is a command-line utility that allows users to encrypt and decrypt files using the Caesar Cipher or XOR methods. It also supports user registration and authentication and logs every encryption/decryption event.

## Features:
- User Registration and Authentication.
- Encrypt files using:
  - Caesar Cipher
  - XOR
- Decrypt files using:
  - Caesar Cipher
  - XOR
- View logs of all encryption and decryption activities.

## Prerequisites:
- GCC (GNU Compiler Collection) for compiling C code.

## Setup and Compilation:
1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/ujjwalguptavirtuoso/CaeserCipherTool.git
    ```
2. Navigate to the project directory:
    ```bash
    cd CaesarCipherTool
    ```
3. Compile the source files:
    ```bash
    gcc main.c user.c caesar.c xor.c logs.c utils.c -o CaesarCipherTool
    ```

## Running the Tool:
After compilation, you can run the tool using:
```bash
./CaesarCipherTool
```
This will display the main menu, where you can choose various operations like user registration, file encryption, file decryption, or viewing logs.

## Note:
This tool is intended for educational purposes only. The encryption methods used (Caesar Cipher and XOR) are not secure for real-world applications, and the user authentication method is basic. Always use established libraries and methods for serious applications.

## Contributing:
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
    
