/*
JoePass is curently beeing build using
 
Mountain Lion
XCode 3.2.6 (with svn support, if needed. I just installed mountain lion and svn support was gone.)
The reason for this is that I am to lazy to change some older part of the code,
which uses function that are no longer supported in XCode 4 headers and libs, or above.
 
This makes it neccessary to use XCode 3, it's compilers, headers and libraries.
Some tweeks are neccessary to make this combination work:
Install XCode 3 (I use 3.2.6) from the developer side at apple.com

 Maybe you have to install the developer tools as well, if you want to access the svn repository:
http://adcdownload.apple.com/Developer_Tools/command_line_tools_os_x_mountain_lion_for_xcode__august_2012/command_line_tools_for_xcode_os_x_mountain_lion_aug_2012.dmg\

configure XCode to use the compiler needed, see:\
http://stackoverflow.com/questions/5333490/how-can-we-restore-ppc-ppc64-as-well-as-full-10-4-10-5-sdk-support-to-xcode-4\
 */
