<?php
/**
 * @file
 *   Default theme implementation for the Scald Youtube Player
 */
?>
<iframe title="<?php print $vars['title'] ?>" width="<?php print $vars['video_width'] ?>" height="<?php print $vars['video_height'] ?>" src="//www.youtube.com/embed/<?php print $vars['video_id'] ?><?php print $vars['list'] ?>" frameborder="0" allowfullscreen></iframe>
