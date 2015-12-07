# Tecnical_Interview_Questions
Here are some questions I have recieved and had to solve for different technical interview here for your practice.
#Questions 
###1. <b>Palindromic Numbers</b>
  * How many palindromic numbers [http://en.wikipedia.org/wiki/Palindromic_number] are there in the set of numbers representable by a 16 bit unsigned integer [0..65535] ?
  * <b>You can use any programming language. We’re not concerned with runtime complexity here, only simplicity & correctness</b>

###2. <b>Cellular Automata</b>
  * We will write a command-line console application that prints output that resembles a simple cellular automata. Each line of the program’s output represents a row of 64 boolean values. True should be printed as an asterisk ( * ) and False should be printed as a hyphen ( - ). So each line of output should be 64 characters of asterisks or hyphens, followed by a newline.  Use the following rules to determine the values in the rows. The initial row of booleans should be all False, except for one True roughly in the middle (in the 32nd position; so it should be 31 Falses, followed by one True, followed by 32 Falses). Each subsequent row of booleans will depend on the one immediately before it. Each new row should be calculated using this rule. The value for a given position in the new row should be True if in the previous row, either the position immediately to the left or immediately to the right was True, but not both. Otherwise it is False.
  * <b>Print out 32 lines worth of output total using these rules. Include the output as well as the code.</b>
  
###3. <b>Frontend / DOM Programming</b>
  * A) Create the following layout in HTML/CSS: (it’s a “C” for CircleUp with a green “glint” in the corner)
  * B) Write jQuery / javascript so that clicking the large white boxes turns them blue (ignore the little green box). After the last one has been clicked, the green box should turn red and the blue boxes should start “undoing” their blue coloring, in the reverse order that they were clicked, separated by 1 second.  Nothing should respond to clicks during this period. After they are all undone, the little red box should become green again and everything should be back to its initial state.
  * It should behave like in this video: http://vimeo.com/103005825
  * <b>Preference is for you to do this on jsfiddle.net and send a link (on jsfiddle, be careful that the URL you copy/paste has updated to reflect final updates)</b>

###4. <b>SQL</b>
  * Given two tables defined as follows, and these insert statements:
  
