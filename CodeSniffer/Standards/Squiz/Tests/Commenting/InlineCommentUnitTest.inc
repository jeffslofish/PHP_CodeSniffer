<?php
// Some code goes here.
$code = 'hello';

// This comment contains # multiple
// hash signs (#).
$code = 'hello';

/*
 * Here is a small function comment.
 */
function test()
{
    // Some code goes here.
    $code = 'hello';

    # This comment is banned.
    $code = 'hello';

}//end test()

/*
    A longer comment goes here.
    It spans multiple lines.
*/

# This is a long comment
# that is banned.



// Some code goes here!

// This comment contains # multiple
// hash signs (#) but no
// full stop
$code = 'hello';

/*
 * Here is a small function comment
 */
function test()
{
    // Some code goes here

}//end test()

/*
    A longer comment goes here.
    It spans multiple lines!!
    Or does it?
*/

// This is a simple multi-line
// comment!
$code = 'hello';

//This is not valid.
$code = 'hello';

//  Neither is this!
$code = 'hello';

//
$code = 'hello';
?>