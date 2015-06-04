<?php
/**
 * @file
 * drupalaton_ckeditor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalaton_ckeditor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function drupalaton_ckeditor_image_default_styles() {
  $styles = array();

  // Exported image style: 1_3_size.
  $styles['1_3_size'] = array(
    'label' => '1/3 size',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 1_4_size.
  $styles['1_4_size'] = array(
    'label' => '1/4 size',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 240,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: full_size.
  $styles['full_size'] = array(
    'label' => 'Full size',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: half_size.
  $styles['half_size'] = array(
    'label' => 'Half size',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_scald_default_context_types().
 */
function drupalaton_ckeditor_scald_default_context_types() {
  $contexts = array();
  $contexts['1_3_size-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['1_3_size-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-1_3_size',
      ),
    ),
  );
  $contexts['1_4_size-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['1_4_size-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-1_4_size',
      ),
    ),
  );
  $contexts['full_size-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['full_size-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-full_size',
      ),
    ),
  );
  $contexts['half_size-gallery'] = array(
    'player' => array(
      'gallery' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'gallery' => array(
        '*' => 'passthrough',
      ),
    ),
  );
  $contexts['half_size-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-half_size',
      ),
    ),
  );
  return $contexts;
}
