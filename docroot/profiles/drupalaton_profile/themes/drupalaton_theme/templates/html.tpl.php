<!DOCTYPE html>
<!--[if lt IE 7]>      <html class="no-js lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html class="no-js lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html class="no-js lt-ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js"> <!--<![endif]-->

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <link href='http://fonts.googleapis.com/css?family=Oswald:400,300,700|Open+Sans:300italic,400italic,600italic,700italic,800italic,400,300,600,700,800&subset=latin,latin-ext' rel='stylesheet' type='text/css'>
    <!--[if lt IE 9]>
  <![endif]-->
  <!--[if IE]>
    <link rel="stylesheet" type="text/css" href="<?php print $path_to_theme; ?>/css/ie.css" />
    <script type="text/javascript" src="<?php print $path_to_theme; ?>/lib/respond/src/respond.js"></script>
  <![endif]-->
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
  
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!-- FACEBOOK -->
  <meta property="fb:app_id" content="372862979453673">
  <meta property="og:type" content="website">
  <meta property="og:url" content="http://www.drupalaton.hu">
  <meta property="og:title" content="Drupalaton">
  <meta property="og:description" content="Drupalaton">
  <meta property="og:image" content="http://drupalaton.hu/profiles/drupalaton_profile/themes/drupalaton_theme/img/drup_facebook.png">
  <!-- / FACEBOOK -->
  <meta name="google-site-verification" content="OQkJo4hICfIbZbQxvcU6c3Z3GhbQaEmD7KIEwqXZjZM" />
  
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
