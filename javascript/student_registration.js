// Student Registration Status Checker

function checkStudentRegistration() {
    const studentName = prompt('Enter student name:');
    const registeredUnits = parseInt(prompt('Enter number of registered units:'), 10);
    let status;

    // Check registration status
    if (registeredUnits > 7) {
        status = 'Overload - Approval Required';
    } else {
        status = 'Registration Accepted';
    }

    // Display final summary
    console.log(`\nSummary:\nStudent Name: ${studentName}\nRegistered Units: ${registeredUnits}\nStatus: ${status}`);
}

// Call the function to execute the program
checkStudentRegistration();