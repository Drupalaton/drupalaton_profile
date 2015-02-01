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
    'name' => 'attendees',
    'label' => 'Attendees',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
