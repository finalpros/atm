## 1. Eclipse
   * Open [Eclipse IDE for C/C++ Developers Url](http://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/mars1) and in the right middle corner click on Windows 32-bit or 64-bit depending on your operating system and download the eclipse. 
    ![image](https://cloud.githubusercontent.com/assets/7558577/13283810/1d0426da-db16-11e5-8f29-61d54b426d17.png)
   * After downloading the Zip file, extract the Zip file onto the drive. 
   
## 2. MinGW
   * Open the [MinGW download link](https://sourceforge.net/projects/mingw/files/) and check click on Download mingw-get-setup.exe (86.5 kB) OR open [direct download link](https://sourceforge.net/projects/mingw/files/latest/download?source=files)
   * After downloading migw-get-setup.exe, double click and complete installation to get MinGW Installation Manager.
   
## 3. MinGW Installation Manager
   * Open MinGW Installation Manager, under "Basic setup", select "mingw32-gcc-g++" then "Right click" and do "Mark for installation"
   * Now to "Installation" menu and click on "Apply changes", this will install gcc (C source compiler) and g++(c++ source comipler)
   * Add the bin folder of installed mingw to path environment variable.
   
## 4. Modification in Eclipse Settings
   * Click on "Window" menu then go to "Preferences", in the left panel expand "C/C++" and then expand "New CDT project wizard" and select "Makefile Project", in the right panel under "Binary Parsers" TAB check the checkbox of "PE Windows Parser" and click ok.
   * Click on "Window" menu then go to "Preferences", in the left panel expand "C/C++" and then expand "Build" and select "Environment" and click on "Select" button on the top right corner and check the Checkbox of "Path" and click "Ok" and click on "Apply" and "Ok".
   
## 5. Importing Git project into Eclipse
   * Click on "File" menu then go to "Import", select and expand "Git" and select "Projects from Git" and click on "Next" button, select "Clone URI" and click "Next" button, paste the URL https://github.com/finalpros/atm.git under "Location -> URI", click on "Next", "Next", "Next", "Next" and "Finish".
   
## 6. Run application
   * Select project "atm" and Right click on project and click on "Build Project" which will build the "atm.exe" in "Debug" folder. Now open command prompt(Win + R -> cmd ) and change directory to source directory (we can get the source directory from Right click on project and select "Properties", in the left panel make sure "Resource" is selected, the value of "Location" in the right panel is nothing but the source directory path) and enter "Debug\atm.exe" and press Enter.

Example:    
C:\Users\Pradeep\git\atm>Debug\atm.exe

Welcome to ATM Reference Implementation.

Please enter the ATM card number: 4001 5643 7893 1235

Entered ATM card number : 4001 5643 7893 1235

Enter the ATM Pin: 3421

Your account balance is : 5400