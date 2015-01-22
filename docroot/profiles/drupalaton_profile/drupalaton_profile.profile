<?php
/**
 * @file
 * Enables modules and site configuration for a minimal site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
 
/**
 * Implements hook_install_tasks().
 */
function drupalaton_profile_install_tasks($install_state) {
  $tasks = array(
    'drupalaton_profile_create_user_permissions' => array(),
    'drupalaton_profile_create_texteditor_role' => array(),
    'drupalaton_profile_create_administrator_role' => array(),
  );
  return $tasks;
}
 
 function drupalaton_profile_create_administrator_role() {
   // Make the editor role
  $role = new stdClass;
  $role->name = 'administrator';
  $role->weight = 5;
  user_role_save($role);
  $rid = $role->rid;

}

function drupalaton_profile_create_texteditor_role() {
   // Make the editor role
  $role = new stdClass;
  $role->name = 'texteditor';
  $role->weight = 4;
  user_role_save($role);
  $rid = $role->rid;

}

function drupalaton_profile_create_user_permissions() {
// Enable default permissions for system roles.
  user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content'));
}

function drupalaton_profile_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = 'Drupalaton';
  
  // set default site email
  $form['site_information']['site_mail']['#default_value'] = 'info@drupalaton.hu';
  
  // set default admin values
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'info@drupalaton.hu';
  
  // set default location
  $form['server_settings']['site_default_country']['#default_value'] = 'HU';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Budapest';
  $form['update_notifications']['update_status_module'][2]['#default_value'] = 0;
}
