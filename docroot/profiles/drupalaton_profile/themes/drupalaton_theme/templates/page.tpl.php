<div class="global">
  <?php if ($main_menu): ?>
    <div class="navigation">
      <nav id="nav" class="closed">          
        <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
      </nav>
    </div> <!-- #navigation -->
  <?php endif; ?>
  <div class="landscape">
    <div class="hills"></div>
    <div class="clouds scrollorama">
      <div id="cloud1" class="cloud cloud1 cloud-left"></div>
      <div class="cloud cloud2 cloud-left"></div>
      <div class="cloud cloud3 cloud-left"></div>
      <div class="cloud cloud4 cloud-left"></div>
      <div class="cloud cloud5 cloud-right"></div>
      <div class="cloud cloud6 cloud-right"></div>
      <div class="cloud cloud7 cloud-right"></div>
      <div class="cloud cloud8 cloud-right"></div>
      <div class="cloud cloud9 cloud-right"></div>
      <div class="cloud cloud10 cloud-right"></div>
    </div>
    <div class="boats scrollorama ">
      <div id="smallboat" class="boat small"></div>
      <div id="bigboat" class="boat big"></div>
    </div>
    <div class="logo">
      <div class="logo-inner">
        <img alt="Drupalaton logo" src="<?php print $logo; ?>">
      </div>
    </div>
    <div class="lake"></div>
    <div class="logo-link">
      <div class="logo-link-inner">
        <a itemprop="name" title="Drupalaton" href="/"></a>
      </div>
    </div>
  </div><!-- /.landscape-->
  
  <?php print $messages; ?>

  <div id="main-wrapper"><div id="main" class="clearfix">

    <div id="content" class="column"><div class="section container_12">
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
      <?php print render($page['content']); ?>
    </div></div> <!-- /.section, /#content -->

  </div></div> <!-- /#main, /#main-wrapper -->

</div>
<?php if ($sponsor_diamond || $sponsor_gold): ?>
  <div class="sponsors">
    <div class="container_12 panel-pane">
      <h2 class="pane-title">Sponsors</h2>
      <?php if ($sponsor_diamond): ?>
        <?php print $sponsor_diamond; ?>
      <?php endif; ?>
      <?php if ($sponsor_gold): ?>
        <?php print $sponsor_gold; ?>
      <?php endif; ?>
    </div>
  </div>
<?php endif; ?>
<div class="newsletter" id="newsletter">
  <div class="container_12">
    <!-- Begin MailChimp Signup Form -->
    <div id="mc_embed_signup">
    <form action="http://drupal.us4.list-manage1.com/subscribe/post?u=8c9c7d47497f10b169c88b791&amp;id=24c4e902a7" method="post" id="mc-embedded-subscribe-form" name="mc-embedded-subscribe-form" class="validate" target="_blank" novalidate>
    <label for="mce-EMAIL">
      <span class="first">Subscribe to our newsletter. </span>
      <span class="last">Receive the latest updates.</span>
    </label>
    <input type="email" value="" name="EMAIL" class="email" id="mce-EMAIL" placeholder="email address" required>
    <div><input type="submit" value="Subscribe" name="subscribe" id="mc-embedded-subscribe" class="button"></div>
    </form>
    </div>

    <!--End mc_embed_signup-->
  </div>
</div><!-- /.newsletter -->
<div class="twitter" id="twitter">
  <div class="container_12">
    <div>
      <span class="first">You can also follow us</span>
      <span class="second">on Twitter</span>
      <span class="third"><a href="https://twitter.com/drupalaton" title="@Drupalaton on twitter">@Drupalaton</a> and #Drupalaton</span>
    </div>
  </div>
</div><!-- /.twitter -->
<div class="social" id="social">
  <div class="container_12">
    <p>
      Share <span>drupalaton</span> on
      <a href="https://twitter.com/intent/tweet?url=http%3A//www.drupalaton.hu&text=Drupal conf @ Lake Balaton Hungary"><img src="/profiles/drupalaton_profile/themes/drupalaton_theme/img/share_twitter.svg" alt="on Twitter" /></a> or on
      <a href="http://www.facebook.com/sharer.php?u=http://drupalaton.hu&p[images][0]=http://drupalaton.hu/themes/drupalaton/img/drup_facebook.png"><img src="/profiles/drupalaton_profile/themes/drupalaton_theme/img/share_facebook.svg" alt="on Facebook" /></a>
    </p>
  </div>
</div><!-- /.social -->