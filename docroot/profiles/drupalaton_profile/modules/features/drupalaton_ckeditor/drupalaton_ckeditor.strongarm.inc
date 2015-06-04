<?php
/**
 * @file
 * drupalaton_ckeditor.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function drupalaton_ckeditor_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_switch_feature_export';
  $strongarm->value = TRUE;
  $export['scald_switch_feature_export'] = $strongarm;

  return $export;
}
