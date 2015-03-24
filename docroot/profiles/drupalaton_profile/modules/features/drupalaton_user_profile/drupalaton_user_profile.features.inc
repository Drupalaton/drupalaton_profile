<?php
/**
 * @file
 * drupalaton_user_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalaton_user_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function drupalaton_user_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function drupalaton_user_profile_image_default_styles() {
  $styles = array();

  // Exported image style: attendees.
  $styles['attendees'] = array(
    'label' => 'Attendees',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
