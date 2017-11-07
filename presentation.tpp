--title jshell NJUG 2017 
--author Bryan Tidwell (@gurgeh in nashdev)

--newpage Whats jshell
--heading Jshell
Jshell is a repl for java 9. (tldr pretty much) 

The main purpose is to allow java users to try out api's without compiling endless boiler plate

--newpage 
--heading Snippets and expressions
Jshell executes what are called "snippets" which are like normal java code except semicolons are optional and everything isn't tied to a class.

Each expression is evaluated immediately and expressions withot variables are assigned scratch variables. (This are preceded with a '$')

--newpage
--heading Forward References
Jshell lets you refer to methods that don't exist yet, but it will warn you and throw an error if you call without implementing them.

--beginoutput
-> String greet(String name){
>> return salutation() + name;
>> }
|  Added method greet(String), however, it cannot be invoked until method salutation() is declared
--endoutput

--newpage
--heading Commands
Jshell has commands that are mostly for altering the state of the execution enviornment or giving you meta 
--beginoutput
jshell> /
/!          /?          /drop       /edit       /env        /exit       /help       /history    /imports    /list
/methods    /open       /reload     /reset      /save       /set        /types      /vars

<press tab again to see synopsis>
--endoutput
There's too many to break down in a lightning round talk but there's details in the oracle documentation. 

There's even support for what looks like vim and emacs line editing modes and opening stuff in an external editor.
--newpage
--heading the classpath
Jshell has a mechanism for starting with a custom classpath. Without this it'd be pretty useless.
--beginoutput
 % jshell --class-path myOwnClassPath
--endoutput
btw The open-jdk jshell doesn't work and says its -classpath. The docs don't match my experience.

There's also support for modules.

--newpage
--heading Scripts
You can use jshell to create java scripts to either load expressions into a session or run full fledged scripts using the /exit command.
--beginoutput
jshell script.jsh
--endoutput
--newpage
--heading References
 * jshell on docker https://medium.com/@_purukaushik/start-using-java-9-shell-jshell-with-docker-888c91ff742c

 * oracle jshell docs https://docs.oracle.com/javase/9/jshell/toc.htm
