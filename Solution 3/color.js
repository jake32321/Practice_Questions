var arr = [];
/*
Loop isn't working 100% but due to time constraints for
me and the deadline I figured I would give you the progress
I made.  If you have any questions feel free to email me.
*/
$("document").ready(function(){
  //Listens for the event of a click on the div
  $("div.content").click(function(){
    //Sets backgorund to blue
    $(this).css("background-color", "blue");
    //Gets the element id and sets it to a variable
    code = $(this).attr('id');
    //Adds the variable to the array
    arr.push(code);
    //Checks the length of the array to see if everything is selected
    if(arr.length == 7){
      //Sets small glint to red
 	  	$("div.small").css("background-color", "red");
      //Should go and set everything back to white in the right order
      for(var i = 1; i < arr.length; i++){
        var element = $(document.getElementById('id')).get(a[i]);
        $('element').wait(1000).css("background-color", "white");
      }
      //Sets the small glint back to green
      $("div.small").css("background-color", "green");
		}
  });
});
