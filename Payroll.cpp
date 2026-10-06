#include <iostream>
#include <string>
#include <fstream>

double sssDeduction(double salary) {

    double sssDeduction = 0;

    if (salary > 0 && salary <= 5249.99) {
        sssDeduction = 250;
    } else if (salary >= 5250 && salary <= 5749.99) {
        sssDeduction = 275;
    } else if (salary >= 5750 && salary <= 6249.99) {
        sssDeduction = 300;
    } else if (salary >= 6250 && salary <= 6749.99) {
        sssDeduction = 325;
    } else if (salary >= 6750 && salary <= 7249.99) {
        sssDeduction = 350;
    } else if (salary >= 7250 && salary <= 7749.99) {
        sssDeduction = 375;
    } else if (salary >= 7750 && salary <= 8249.99) {
        sssDeduction = 400;
    } else if (salary >= 8250 && salary <= 8749.99) {
        sssDeduction = 425;
    } else if (salary >= 8750 && salary <= 9249.99) {
        sssDeduction = 450;   
    } else if (salary >= 9250 && salary <= 9749.99) {
        sssDeduction = 475;   
    } else if (salary >= 9750 && salary <= 10249.99) {
        sssDeduction = 500; 
    } else if (salary >= 10250 && salary <= 10749.99) {
        sssDeduction = 525; 
    } else if (salary >= 10750 && salary <= 11249.99) {
        sssDeduction = 550; 
    } else if (salary >= 11250 && salary <= 11749.99) {
        sssDeduction = 575; 
    } else if (salary >= 11750 && salary <= 12249.99) {
        sssDeduction = 600; 
    } else if (salary >= 12250 && salary <= 12749.99) {
        sssDeduction = 625; 
    } else if (salary >= 12750 && salary <= 13249.99) {
        sssDeduction = 650; 
    } else if (salary >= 13250 && salary <= 13749.99) {
        sssDeduction = 675; 
    } else if (salary >= 13750 && salary <= 14249.99) {
        sssDeduction = 700; 
    } else if (salary >= 14250 && salary <= 14749.99) {
        sssDeduction = 725; 
    } else if (salary >= 14750 && salary <= 15249.99) {
        sssDeduction = 750; 
    } else if (salary >= 15250 && salary <= 15749.99) {
        sssDeduction = 775; 
    } else if (salary >= 15750 && salary <= 16249.99) {
        sssDeduction = 800; 
    } else if (salary >= 16250 && salary <= 16749.99) {
        sssDeduction = 825; 
    } else if (salary >= 16750 && salary <= 17249.99) {
        sssDeduction = 850; 
    } else if (salary >= 17250 && salary <= 17749.99) {
        sssDeduction = 875; 
    } else if (salary >= 17750 && salary <= 18249.99) {
        sssDeduction = 900; 
    } else if (salary >= 18250 && salary <= 18749.99) {
        sssDeduction = 925; 
    } else if (salary >= 18750 && salary <= 19249.99) {
        sssDeduction = 950; 
    } else if (salary >= 19250 && salary <= 19749.99) {
        sssDeduction = 975; 
    } else if (salary >= 19750 && salary <= 20249.99) {
        sssDeduction = 1000; 
    } else if (salary >= 20250 && salary <= 20749.99) {
        sssDeduction = 1025; 
    } else if (salary >= 20750 && salary <= 21249.99) {
        sssDeduction = 1050; 
    } else if (salary >= 21250 && salary <= 21749.99) {
        sssDeduction = 1075; 
    } else if (salary >= 21750 && salary <= 22249.99) {
        sssDeduction = 1100; 
    } else if (salary >= 22250 && salary <= 22749.99) {
        sssDeduction = 1125; 
    } else if (salary >= 22750 && salary <= 23249.99) {
        sssDeduction = 1150; 
    } else if (salary >= 23250 && salary <= 23749.99) {
        sssDeduction = 1175; 
    } else if (salary >= 23750 && salary <= 24249.99) {
        sssDeduction = 1200; 
    } else if (salary >= 24250 && salary <= 24749.99) {
        sssDeduction = 1225; 
    } else if (salary >= 24750 && salary <= 25249.99) {
        sssDeduction = 1250; 
    } else if (salary >= 25250 && salary <= 25749.99) {
        sssDeduction = 1275; 
    } else if (salary >= 25750 && salary <= 26249.99) {
        sssDeduction = 1300; 
    } else if (salary >= 26250 && salary <= 26749.99) {
        sssDeduction = 1325; 
    } else if (salary >= 26750 && salary <= 27249.99) {
        sssDeduction = 1350; 
    } else if (salary >= 27250 && salary <= 27749.99) {
        sssDeduction = 1375; 
    } else if (salary >= 27750 && salary <= 28249.99) {
        sssDeduction = 1400; 
    } else if (salary >= 28250 && salary <= 28749.99) {
        sssDeduction = 1425; 
    } else if (salary >= 28750 && salary <= 29249.99) {
        sssDeduction = 1450; 
    } else if (salary >= 29250 && salary <= 29749.99) {
        sssDeduction = 1475; 
    } else if (salary >= 29750 && salary <= 30249.99) {
        sssDeduction = 1500; 
    } else if (salary >= 30250 && salary <= 30749.99) {
        sssDeduction = 1525; 
    } else if (salary >= 30750 && salary <= 31249.99) {
        sssDeduction = 1550; 
    } else if (salary >= 31250 && salary <= 31749.99) {
        sssDeduction = 1575; 
    } else if (salary >= 31750 && salary <= 32249.99) {
        sssDeduction = 1600; 
    } else if (salary >= 32250 && salary <= 32749.99) {
        sssDeduction = 1625; 
    } else if (salary >= 32750 && salary <= 33249.99) {
        sssDeduction = 1650; 
    } else if (salary >= 33250 && salary <= 33749.99) {
        sssDeduction = 1675; 
    } else if (salary >= 33750 && salary <= 34249.99) {
        sssDeduction = 1700; 
    } else if (salary >= 34250 && salary < 34750) {
        sssDeduction = 1725; 
    } else if (salary >= 34750) {
        sssDeduction = 1750;
    } else {
        std::cout << "Invalid salary input." << std::endl;
        return 0;
    }
    
return sssDeduction;
}

double philhealthDeduction(double salary) {
    
    double philhealthDeduction = 0;

    if (salary > 0 && salary <= 10000) {
        philhealthDeduction = 250;
    } else if (salary > 10000 && salary <= 99999.99) {
        philhealthDeduction = salary * 0.025;
    } else if (salary >= 100000) {
        philhealthDeduction = 2500;
    } else {
        std::cout << "Invalid salary input." << std::endl;
        return 0;
    }

    return philhealthDeduction;
}

double pagibigDeduction(double salary) {

    double pagibigDeduction = 0;

    if (salary > 0 && salary <= 1500) {
        pagibigDeduction = salary * 0.01;
    } else if (salary > 1500 && salary <= 5000) {
        pagibigDeduction = salary * 0.02;
    } else if (salary > 5000) {
        pagibigDeduction = 100;
    } else {
        std::cout << "Invalid salary input." << std::endl;
        return 0;
    }

    return pagibigDeduction;
}

double trainLawDeduction(double salary) {

    double trainLawDeduction = 0;

    if (salary <= 0) {
        std::cout << "Invalid salary input." << std::endl;
        return 0;
    }

    double annualTaxableIncome = salary * 12;
    double annualTax = 0;

    if (annualTaxableIncome <= 250000) {
        annualTax = 0;
    } else if (annualTaxableIncome <= 400000) {
        annualTax = (annualTaxableIncome - 250000) * 0.15;
    } else if (annualTaxableIncome <= 800000) {
        annualTax = 22500 + (annualTaxableIncome - 400000) * 0.20;
    } else if (annualTaxableIncome <= 2000000) {
        annualTax = 102500 + (annualTaxableIncome - 800000) * 0.25;
    } else if (annualTaxableIncome <= 8000000) {
        annualTax = 402500 + (annualTaxableIncome - 2000000) * 0.30;
    } else {
        annualTax = 2202500 + (annualTaxableIncome - 8000000) * 0.35;
    }

    trainLawDeduction = annualTax / 12;
    return trainLawDeduction;
}

void displayPayroll(std::string username) {

    std::ifstream payrollFile("employees.txt");

    if (!payrollFile) {
        std::cout << "ERROR: Could not open employees.txt" << std::endl;
        return;
    }

    std::string fileUsername, filePassword;
    int fileLoginState;
    double fileSalary, fileHoursWorked;

    while (payrollFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {

        if (fileUsername == username) {

            double sss = sssDeduction(fileSalary);
            double philhealth = philhealthDeduction(fileSalary);
            double pagibig = pagibigDeduction(fileSalary);
            double trainLaw = trainLawDeduction(fileSalary - sss - philhealth - pagibig);

            double totalDeductions = sss + philhealth + pagibig + trainLaw;

            double netPay = fileSalary - totalDeductions;

            std::cout << std::endl;
            std::cout << "=============================" << std::endl;
            std::cout << "        MY PAYROLL" << std::endl;
            std::cout << "=============================" << std::endl;

            std::cout << "Employee: " << fileUsername << std::endl;
            std::cout << "Hours Worked: " << fileHoursWorked << std::endl;

            std::cout << std::endl;
            std::cout << "Gross Pay:       " << fileSalary << std::endl;

            std::cout << std::endl;
            std::cout << "DEDUCTIONS" << std::endl;
            std::cout << "SSS:             " << sss << std::endl;
            std::cout << "PhilHealth:      " << philhealth << std::endl;
            std::cout << "Pag-IBIG:        " << pagibig << std::endl;
            std::cout << "TRAIN Law:       " << trainLaw << std::endl;
            std::cout << "Total Deductions: " << totalDeductions << std::endl;

            std::cout << std::endl;
            std::cout << "Net Pay:         " << netPay << std::endl;
            std::cout << "=============================" << std::endl;

            payrollFile.close();
            return;
        }
    }

    payrollFile.close();

    std::cout << "Employee payroll could not be found." << std::endl;
}

int main() {
    while (true) {
        std::string username, password;
        int loginState = 0;
        bool loginSuccessful = false;

        std::ifstream employeeFile("employees.txt");

        if (!employeeFile) {
            std::cout << "ERROR: Could not open employees.txt" << std::endl;
            return 1;
        }

        std::cout << std::endl;
        std::cout << "Welcome to the Payroll System" << std::endl;
        std::cout << "=============================" << std::endl;

        for (int loginAttempts = 0; loginAttempts < 3; loginAttempts++) {

            std::cout << "Enter your username: ";
            std::cin >> username;

            std::cout << "Enter your password: ";
            std::cin >> password;

            employeeFile.clear();
            employeeFile.seekg(0);

            std::string fileUsername, filePassword;
            int fileLoginState;
            double fileSalary, fileHoursWorked;

            loginSuccessful = false;

            while (employeeFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {

                if (username == fileUsername && password == filePassword) {
                    loginState = fileLoginState;
                    loginSuccessful = true;
                    break;
                }
            }

            if (loginSuccessful) {
                break;
            }
            else {
                std::cout << "Username or Password is incorrect. "
                     << 3 - (1 + loginAttempts)
                     << " attempts left." << std::endl;
            }
        }

        employeeFile.close();

        if (!loginSuccessful) {
            std::cout << "Too Many Attempts." << std::endl;
            continue;
        }
        if (loginState == 1) {
            int choice;
            do {
                std::cout << std::endl;
                std::cout << "=============================" << std::endl;
                std::cout << "          CEO MENU" << std::endl;
                std::cout << "=============================" << std::endl;
                std::cout << "1. View My Pay" << std::endl;
                std::cout << "2. Add Employee" << std::endl;
                std::cout << "3. Remove Employee" << std::endl;
                std::cout << "4. Logout" << std::endl;
                std::cout << "Enter your choice: ";
                std::cin >> choice;
                if (choice == 1) {
                    displayPayroll(username);
                } else if (choice == 2) {

                    std::string newUsername, newPassword;
                    int newLoginState;
                    double newSalary;

                    std::cout << std::endl;
                    std::cout << "CURRENT EMPLOYEES" << std::endl;
                    std::cout << "=============================" << std::endl;

                    std::ifstream viewFile("employees.txt");

                    std::string fileUsername, filePassword;
                    int fileLoginState;
                    double fileSalary, fileHoursWorked;

                    while (viewFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {

                        std::cout << "Username: " << fileUsername << " | Position: ";

                        switch (fileLoginState) {
                            case 1:
                                std::cout << "CEO";
                                break;
                            case 2:
                                std::cout << "VP";
                                break;
                            case 3:
                                std::cout << "Ex-Secretary";
                                break;
                            case 4:
                                std::cout << "Manager";
                                break;
                            case 5:
                                std::cout << "Supervisor";
                                break;
                            case 6:
                                std::cout << "Rank and File";
                                break;
                            case 7:
                                std::cout << "Payroll Master";
                                break;
                        }
                        std::cout << " || Salary: " << fileSalary << " || Hours Worked: " << fileHoursWorked << std::endl;
                    }

                    viewFile.close();

                    std::cout << std::endl;
                    std::cout << "ADD EMPLOYEE" << std::endl;
                    std::cout << "=============================" << std::endl;

                    std::cout << "Enter new username: ";
                    std::cin >> newUsername;

                    std::cout << "Enter new password: ";
                    std::cin >> newPassword;

                    std::cout << std::endl;
                    std::cout << "Select Employee Position:" << std::endl;
                    std::cout << "1. CEO" << std::endl;
                    std::cout << "2. VP" << std::endl;
                    std::cout << "3. Ex-Secretary" << std::endl;
                    std::cout << "4. Manager" << std::endl;
                    std::cout << "5. Supervisor" << std::endl;
                    std::cout << "6. Rank and File" << std::endl;
                    std::cout << "7. Payroll Master" << std::endl;
                    std::cout << "Enter position: ";
                    std::cin >> newLoginState;

                    if (newLoginState < 1 || newLoginState > 7) {
                        std::cout << "Invalid position." << std::endl;
                    } else {
                        std::ifstream checkFile("employees.txt");

                        std::string checkUsername, checkPassword;
                        int checkLoginState;
                        double checkSalary, checkHoursWorked;

                        bool usernameExists = false;

                        while (checkFile >> checkUsername >> checkPassword >> checkLoginState >> checkSalary >> checkHoursWorked) {
                            if (checkUsername == newUsername) {
                                usernameExists = true;
                                break;
                            }
                        }

                        checkFile.close();

                        if (usernameExists) {
                            std::cout << "Username already exists." << std::endl;
                        } else {
                            std::cout << "Enter employee salary: ";
                            std::cin >> newSalary;
                            std::ofstream addFile("employees.txt", std::ios::app);

                            if (!addFile) {

                                std::cout << "ERROR: Could not open employees.txt"
                                     << std::endl;
                            } else {
                                addFile << newUsername << " " << newPassword << " " << newLoginState << std::endl;

                                addFile.close();

                                std::cout << std::endl;
                                std::cout << "Employee added successfully!" << std::endl;
                            }
                        }
                    }
                } else if (choice == 3) {

                    std::string removeUsername;

                    std::cout << std::endl;
                    std::cout << "CURRENT EMPLOYEES" << std::endl;
                    std::cout << "=============================" << std::endl;

                    std::ifstream viewFile("employees.txt");

                    std::string fileUsername, filePassword;
                    int fileLoginState;
                    double fileSalary, fileHoursWorked;

                    while (viewFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {

                        std::cout << "Username: " << fileUsername << " | Position: ";

                        switch (fileLoginState) {
                            case 1:
                                std::cout << "CEO";
                                break;
                            case 2:
                                std::cout << "VP";
                                break;
                            case 3:
                                std::cout << "Ex-Secretary";
                                break;
                            case 4:
                                std::cout << "Manager";
                                break;
                            case 5:
                                std::cout << "Supervisor";
                                break;
                            case 6:
                                std::cout << "Rank and File";
                                break;
                            case 7:
                                std::cout << "Payroll Master";
                                break;
                        }
                        std::cout << " || Salary: " << fileSalary << " || Hours Worked: " << fileHoursWorked << std::endl;
                    }

                    viewFile.close();

                    std::cout << std::endl;
                    std::cout << "REMOVE EMPLOYEE" << std::endl;
                    std::cout << "=============================" << std::endl;

                    std::cout << "Enter username to remove: ";
                    std::cin >> removeUsername;

                    if (removeUsername == username) {
                        std::cout << "You cannot remove your own CEO account."
                                  << std::endl;
                    } else {

                        std::ifstream inputFile("employees.txt");
                        std::ofstream tempFile("temp.txt");

                        if (!inputFile || !tempFile) {
                            std::cout << "ERROR: Could not open employee files."
                                      << std::endl;
                        }
                        else {
                            std::string fileUsername, filePassword;
                            int fileLoginState;
                            double fileSalary, fileHoursWorked;

                            bool employeeFound = false;

                            while (inputFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {
                                if (fileUsername == removeUsername) {
                                    employeeFound = true;
                                } else {
                                    tempFile << fileUsername << " " << filePassword << " " << fileLoginState << " " << fileSalary << " " << fileHoursWorked << std::endl;
                                }
                            }

                            inputFile.close();
                            tempFile.close();

                            if (employeeFound) {
                                remove("employees.txt");
                                rename("temp.txt", "employees.txt");

                                std::cout << "Employee removed successfully!" << std::endl;
                            } else {
                                remove("temp.txt");
                                std::cout << "Employee not found." << std::endl;
                            }
                        }
                    }
                } else if (choice == 4) {
                    std::cout << std::endl;
                    std::cout << "Logging out..." << std::endl;
                } else {
                    std::cout << "Invalid choice." << std::endl;
                }
            } while (choice != 4);
            continue;
        } else {
            switch (loginState) {
                case 2:
                    std::cout << std::endl;
                    std::cout << "Welcome VP!" << std::endl;
                    displayPayroll(username);
                    std::cout << std::endl;
                    std::cout << "Logging out..." << std::endl;
                    break;
                case 3:
                    std::cout << std::endl;
                    std::cout << "Welcome Ex-Secretary!" << std::endl;
                    displayPayroll(username);
                    std::cout << std::endl;
                    std::cout << "Logging out..." << std::endl;
                    break;
                case 4:
                    std::cout << std::endl;
                    std::cout << "Welcome Manager!" << std::endl;
                    displayPayroll(username);
                    std::cout << std::endl;
                    std::cout << "Logging out..." << std::endl;
                    break;
                case 5:
                    std::cout << std::endl;
                    std::cout << "Welcome Supervisor!" << std::endl;
                    displayPayroll(username);
                    std::cout << std::endl;
                    std::cout << "Logging out..." << std::endl;
                    break;
                case 6:
                    std::cout << std::endl;
                    std::cout << "Welcome Rank and File!" << std::endl;
                    displayPayroll(username);
                    std::cout << std::endl;
                    std::cout << "Logging out..." << std::endl;
                    break;
                case 7:
                    int choice;

                do {
                    std::cout << std::endl;
                    std::cout << "Welcome Payroll Master!" << std::endl;
                    std::cout << "=============================" << std::endl;
                    std::cout << "1. Change Employee Salary" << std::endl;
                    std::cout << "2. Log Employee Hours Worked" << std::endl;
                    std::cout << "3. View Employees" << std::endl;
                    std::cout << "4. View My Pay" << std::endl;
                    std::cout << "5. Logout" << std::endl;
                    std::cout << "Enter your choice: ";
                    std::cin >> choice;
                    std::cout << std::endl;

                    if (choice == 1) {
                        std::string employeeUsername;
                        double newSalary;

                        std::cout << "Change Employee Salary" << std::endl;
                        std::cout << "=============================" << std::endl;

                        std::ifstream viewFile("employees.txt");

                        std::string fileUsername, filePassword;
                        int fileLoginState;
                        double fileSalary, fileHoursWorked;

                        while (viewFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {
                            std::cout << "Username: " << fileUsername << " || Position: ";
                            switch(fileLoginState) {
                                case 1:
                                    std::cout << "CEO";
                                    break;
                                case 2:
                                    std::cout << "VP";
                                    break;
                                case 3:
                                    std::cout << "Ex-Secretary";
                                    break;
                                case 4:
                                    std::cout << "Manager";
                                    break;
                                case 5:
                                    std::cout << "Supervisor";
                                    break;
                                case 6:
                                    std::cout << "Rank and File";
                                    break;
                                case 7:
                                    std::cout << "Payroll Master";
                                    break;
                            }
                            std::cout << " || Salary: " << fileSalary << " || Hours Worked: " << fileHoursWorked << std::endl;
                        }
                        viewFile.close();

                        std::cout << "\nEnter Username: ";
                        std::cin >> employeeUsername;

                        std::cout << "\nEnter New Salary: ";
                        std::cin >> newSalary;

                        std::ifstream inputFile("employees.txt");
                        std::ofstream tempFile("temp.txt");

                        if (!inputFile || !tempFile) {
                            std::cout << "ERROR: Could not open employee.txt" << std::endl;
                        } else {
                            bool employeeFound = false;

                            while (inputFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {
                                if (fileUsername == employeeUsername) {
                                    fileSalary = newSalary;
                                    employeeFound = true;
                                }
                                tempFile << fileUsername << " " << filePassword << " " << fileLoginState << " " << fileSalary << " " << fileHoursWorked << std::endl;
                            }
                            inputFile.close();
                            tempFile.close();

                            remove("employees.txt");
                            rename("temp.txt", "employees.txt");

                            if (employeeFound) {
                                std::cout << "Salary updated successfully!" << std::endl;
                            } else {
                                std::cout << "Employee not found." << std::endl;
                            }
                        }
                    } else if (choice == 2) {
                        std::string employeeUsername;
                        double newHours;

                        std::cout << "Log Employee Hours Worked" << std::endl;
                        std::cout << "=============================" << std::endl;

                        std::ifstream viewFile("employees.txt");

                        std::string fileUsername, filePassword;
                        int fileLoginState;
                        double fileSalary, fileHoursWorked;

                        while (viewFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {
                            std::cout << "Username: " << fileUsername << " || Position: ";
                            switch(fileLoginState) {
                                case 1:
                                    std::cout << "CEO";
                                    break;
                                case 2:
                                    std::cout << "VP";
                                    break;
                                case 3:
                                    std::cout << "Ex-Secretary";
                                    break;
                                case 4:
                                    std::cout << "Manager";
                                    break;
                                case 5:
                                    std::cout << "Supervisor";
                                    break;
                                case 6:
                                    std::cout << "Rank and File";
                                    break;
                                case 7:
                                    std::cout << "Payroll Master";
                                    break;
                            }
                            std::cout << " || Salary: " << fileSalary << " || Hours Worked: " << fileHoursWorked << std::endl;
                        }

                        viewFile.close();

                        std::cout << "Enter Username: ";
                        std::cin >> employeeUsername;

                        std::cout << "Enter New Hours Worked: ";
                        std::cin >> newHours;

                        std::ifstream inputFile("employees.txt");
                        std::ofstream tempFile("temp.txt");

                        if (!inputFile || !tempFile) {
                            std::cout << "ERROR: Could not open employee.txt" << std::endl;
                        } else {
                            bool employeeFound = false;

                            while (inputFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {
                                if (fileUsername == employeeUsername) {
                                    fileHoursWorked = newHours;
                                    employeeFound = true;
                                }
                                tempFile << fileUsername << " " << filePassword << " " << fileLoginState << " " << fileSalary << " " << fileHoursWorked << std::endl;
                            }
                            inputFile.close();
                            tempFile.close();

                            remove("employees.txt");
                            rename("temp.txt", "employees.txt");

                            if (employeeFound) {
                                std::cout << "Hours worked updated successfully!" << std::endl;
                            } else {
                                std::cout << "Employee not found." << std::endl;
                            }
                        }
                    } else if (choice == 3) {
                        std::cout << "View Employees" << std::endl;
                        std::cout << "=============================" << std::endl;

                        std::ifstream viewFile("employees.txt");

                        std::string fileUsername, filePassword;
                        int fileLoginState;
                        double fileSalary, fileHoursWorked;

                        while (viewFile >> fileUsername >> filePassword >> fileLoginState >> fileSalary >> fileHoursWorked) {
                            std::cout << "Username: " << fileUsername << " || Position: ";
                            switch(fileLoginState) {
                                case 1:
                                    std::cout << "CEO";
                                    break;
                                case 2:
                                    std::cout << "VP";
                                    break;
                                case 3:
                                    std::cout << "Ex-Secretary";
                                    break;
                                case 4:
                                    std::cout << "Manager";
                                    break;
                                case 5:
                                    std::cout << "Supervisor";
                                    break;
                                case 6:
                                    std::cout << "Rank and File";
                                    break;
                                case 7:
                                    std::cout << "Payroll Master";
                                    break;
                            }
                            std::cout << " || Salary: " << fileSalary << " || Hours Worked: " << fileHoursWorked << std::endl;
                        }

                        viewFile.close();

                    } else if (choice == 4) {
                        displayPayroll(username);
                    } else if (choice == 5) {
                        std::cout << std::endl;
                        std::cout << "Logging out..." << std::endl;
                    } else {
                        std::cout << "Invalid choice." << std::endl;
                    } 
                    
            } while (choice != 5);
            break;
        }
    }
}
    return 0;
}