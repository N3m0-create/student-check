def student_registration_status_checker():
    # Prompt for student name
    name = input('Enter the student name: ')

    # Prompt for number of registered units
    units = int(input('Enter the number of registered units: '))

    # Check registration status
    if units > 7:
        status = 'Overload - Approval Required'
    else:
        status = 'Registration Accepted'

    # Print final summary
    print(f'\nSummary:')
    print(f'Student Name: {name}')
    print(f'Registered Units: {units}')
    print(f'Status: {status}')

# Run the function
student_registration_status_checker()