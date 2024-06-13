# 0x19-postmortem
### Issue Summary:
On June 8th, 2023, our e-commerce website experienced a complete outage from 3:20 PM to 5:25 PM (WAT). During this period, the website became unresponsive, and users were unable to access any part of the site.

### Impact: 
The outage affected all services on the website, including product listings, shopping cart functionality, and the checkout process. Approximately 80% of our users encountered error messages or unresponsive pages.

### Root Cause:
A memory leak in the web application server caused the server to become overloaded and unresponsive, leading to the website outage.

### Timeline:
- 3:20 PM — Issue detected by the monitoring system, which alerted the operations team.
- 3:25 PM — Operations team attempted to restart the web application server, but this did not resolve the issue.
- 3:40 PM — Team started investigating the issue, initially assuming it was a server configuration problem.
- 4:00 PM — High memory usage on the server was identified, leading to the suspicion of a memory leak.
- 4:15 PM — Investigation into the application’s code to find potential causes of the memory leak began.
- 4:55 PM — Memory leak in the code was identified, and work on a fix commenced.
- 5:10 PM — Fix deployed, and web application server restarted.
- 5:25 PM — Website back online and fully operational.

### Detection:
The issue was detected by our monitoring system, which sent an alert to the operations team.

### Actions Taken:
- Investigated the server’s configuration based on initial assumptions.
- Noted abnormal server memory usage and suspected a memory leak.
- Analyzed the application’s code to identify the cause of the memory leak.
- Implemented and deployed a fix for the memory leak.
- Misleading Investigation/Debugging Paths:
- The initial assumption that the issue was related to server configuration delayed the identification of the actual root cause.

### Incident Escalation:
The operations team handled the incident initially but escalated it to the development team upon discovering the issue was related to the application’s code.

### Resolution:
The memory leak was identified and fixed through code optimization and better memory management practices. The web application server was restarted, restoring the website to full functionality.

### Corrective and Preventative Measures:
###### Improvements/Fixes:
- Perform regular code reviews to identify potential memory leaks.
- Implement rigorous testing procedures to catch memory leaks before deployment.
- Enhance monitoring of server performance and resource usage.
- Improve documentation and training for the operations team.

###### Specific Tasks:
- Conduct a comprehensive code review of the web application.
- Implement additional automated tests to detect memory leaks.
- Update monitoring tools to include granular resource usage data.
- Provide additional training for operations team members on troubleshooting web application issues.
