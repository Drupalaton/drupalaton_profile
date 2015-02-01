<?php
/**
 * @file
 * drupalaton_ckeditor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function drupalaton_ckeditor_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <u> <strike> <ul> <ol> <li> <dl> <dt> <dd> <h1> <h2> <h3> <h4> <div> <p> <br /> <iframe> <img> <table> <tr> <td> <thead> <tbody> <tr> <th> <td> <span> <!-->',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'codefilter' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'nowrap_expand' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
    ),
  );

  return $formats;
}
