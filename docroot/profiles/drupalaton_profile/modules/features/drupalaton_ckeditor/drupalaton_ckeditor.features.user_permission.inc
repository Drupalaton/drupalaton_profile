<?php
/**
 * @file
 * drupalaton_ckeditor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function drupalaton_ckeditor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'texteditor' => 'texteditor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
