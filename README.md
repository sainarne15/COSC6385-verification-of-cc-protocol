# Verification-of-cc-protocol
## How to run the code:
1. go to the src directory by **cd Murphi3.1/src**
2. Then compile the Murphi using the command **make mu**   (make clean if already make was run)
3. To install it use, **make install**
<br>After go the bin directory using the command **cd Murphi3.1/bin**
 In **Murphi3.1/bin**, create a symbolic link using the command **ln -sf mu. mu**
 4. Go to the **ex** directory in Murphi3.1 using **cd Murphi3.1/ex**
 5. Use the symbolic link to generate the C file for pingpong.m **../bin/mu toy/pingpong.m**
 8. Inisde the ex/toy, compile the generated C file using the command **make pingpong**
 9. We can run the file using **./pingpong**, we can also pass arguments to print out various information using commands like **./pingpong -v**, **./pingpong -h**
 
## Verification:
1. Go to the directory **Murphi3.1/src**, And optionally make the executable access using the command **chmod +x Murphi3.1/src/mu**, if you are in the home directory.
2. Go to the verification directory and generate the C file for the Futurebus protocol + verification using **./../Murphi3.1/src/mu futurebus.m** command, This will generate the C file futurebus.C.
3. Copile futurebus.C file using the command **make futurebus**, which will generate the executable program.
4. Finally run the executable using the following command **./futurebus**.

## References
1.	GitHub - adnaneGdihi/fixed_murphi3.1: fixed_murphi3.1
2.	https://linuxhandbook.com/symbolic-link-linux/#:~:text=chained%20symbolic%20link-,What%20is%20Symbolic%20link%20in%20Linux%20and%20why%20is%20it,alias%20to%20an%20actual%20file.
3.	https://github.com/Amutheezan/futurebus

